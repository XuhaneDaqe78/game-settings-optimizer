// cli.cpp — part of game-settings-optimizer.

#include "gamesettingsoptimizer/cli.h"

#include <cstdio>

namespace gamesettingsoptimizer {

Cli::Cli(const std::string& config_path)
    : config_path_(config_path) {}

void Cli::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Cli::run() {
    if (verbose_) std::fprintf(stderr, "[game-settings-optimizer] cli: run\n");
    // core logic lives here
    return true;
}

}  // namespace gamesettingsoptimizer
