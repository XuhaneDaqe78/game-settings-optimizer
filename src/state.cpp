// state.cpp — part of game-settings-optimizer.

#include "gamesettingsoptimizer/state.h"

#include <cstdio>

namespace gamesettingsoptimizer {

State::State(const std::string& config_path)
    : config_path_(config_path) {}

void State::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool State::run() {
    if (verbose_) std::fprintf(stderr, "[game-settings-optimizer] state: run\n");
    // core logic lives here
    return true;
}

}  // namespace gamesettingsoptimizer
