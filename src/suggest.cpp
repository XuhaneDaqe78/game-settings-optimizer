// suggest.cpp — part of game-settings-optimizer.

#include "gamesettingsoptimizer/suggest.h"

#include <cstdio>

namespace gamesettingsoptimizer {

Suggest::Suggest(const std::string& config_path)
    : config_path_(config_path) {}

void Suggest::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Suggest::run() {
    if (verbose_) std::fprintf(stderr, "[game-settings-optimizer] suggest: run\n");
    // core logic lives here
    return true;
}

}  // namespace gamesettingsoptimizer
