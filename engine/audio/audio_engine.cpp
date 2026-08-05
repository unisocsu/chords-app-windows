#include "audio_engine.hpp"
#include "logger.hpp"

namespace chordstudio {

AudioEngine::AudioEngine() = default;

AudioEngine::~AudioEngine() {
    shutdown();
}

bool AudioEngine::initialize() {
    Logger::log("Initializing AudioEngine...");
    m_isInitialized = true;
    return true;
}

void AudioEngine::shutdown() {
    if (m_isInitialized) {
        Logger::log("Shutting down AudioEngine...");
        m_isInitialized = false;
    }
}

bool AudioEngine::loadFile(const std::string& filePath) {
    if (!m_isInitialized) {
        Logger::error("AudioEngine is not initialized!");
        return false;
    }
    Logger::log("Loading audio file: " + filePath);
    return true;
}

} // namespace chordstudio
