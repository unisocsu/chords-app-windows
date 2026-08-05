#ifndef CHORDSTUDIO_AUDIO_ENGINE_HPP
#define CHORDSTUDIO_AUDIO_ENGINE_HPP

#include <string>

namespace chordstudio {

class AudioEngine {
public:
    AudioEngine();
    ~AudioEngine();

    bool initialize();
    void shutdown();
    bool loadFile(const std::string& filePath);

private:
    bool m_isInitialized{false};
};

} // namespace chordstudio

#endif // CHORDSTUDIO_AUDIO_ENGINE_HPP
