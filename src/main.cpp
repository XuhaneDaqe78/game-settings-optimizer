// main.cpp — entry point. Wires config and subsystems together.

#include "gamesettingsoptimizer/settings.h"
#include "gamesettingsoptimizer/benchmark.h"
#include "gamesettingsoptimizer/suggest.h"
#include "gamesettingsoptimizer/apply.h"
#include "gamesettingsoptimizer/cli.h"
#include "gamesettingsoptimizer/state.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    gamesettingsoptimizer::Settings settings = gamesettingsoptimizer::Settings::load_default();
    gamesettingsoptimizer::Benchmark benchmark(settings.store_path);
    gamesettingsoptimizer::Suggest suggest(settings.store_path);
    gamesettingsoptimizer::Apply apply(settings.store_path);
    gamesettingsoptimizer::Cli cli(settings.store_path);
    gamesettingsoptimizer::State state(settings.store_path);
    std::fprintf(stderr, "[game-settings-optimizer] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
