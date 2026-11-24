// apply.cpp — part of game-settings-optimizer.

#include "gamesettingsoptimizer/apply.h"

#include <cstdio>

namespace gamesettingsoptimizer {

Apply::Apply(const std::string& config_path)
    : config_path_(config_path) {}

void Apply::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Apply::run() {
    if (verbose_) std::fprintf(stderr, "[game-settings-optimizer] apply: run\n");
    // core logic lives here
    return true;
}

}  // namespace gamesettingsoptimizer
