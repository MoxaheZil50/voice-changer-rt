// presets.cpp — part of voice-changer-rt.

#include "voicechangerrt/presets.h"

#include <cstdio>

namespace voicechangerrt {

Presets::Presets(const std::string& config_path)
    : config_path_(config_path) {}

void Presets::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Presets::run() {
    if (verbose_) std::fprintf(stderr, "[voice-changer-rt] presets: run\n");
    // core logic lives here
    return true;
}

}  // namespace voicechangerrt
