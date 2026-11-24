// main.cpp — entry point. Wires config and subsystems together.

#include "voicechangerrt/settings.h"
#include "voicechangerrt/engine.h"
#include "voicechangerrt/io.h"
#include "voicechangerrt/presets.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    voicechangerrt::Settings settings = voicechangerrt::Settings::load_default();
    voicechangerrt::Engine engine(settings.store_path);
    voicechangerrt::Io io(settings.store_path);
    voicechangerrt::Presets presets(settings.store_path);
    std::fprintf(stderr, "[voice-changer-rt] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
