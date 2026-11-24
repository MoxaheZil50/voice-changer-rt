// engine.cpp — part of voice-changer-rt.

#include "voicechangerrt/engine.h"

#include <cstdio>

namespace voicechangerrt {

Engine::Engine(const std::string& config_path)
    : config_path_(config_path) {}

void Engine::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Engine::run() {
    if (verbose_) std::fprintf(stderr, "[voice-changer-rt] engine: run\n");
    // core logic lives here
    return true;
}

}  // namespace voicechangerrt
