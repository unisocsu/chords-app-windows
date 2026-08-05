add_library(ChordStudioEngine STATIC
    audio/audio_engine.cpp
    chords/chord_analyzer.cpp
    fft/fft_processor.cpp
    lyrics/lyrics_analyzer.cpp
    whisper/whisper_wrapper.cpp
    models/project_model.cpp
    utils/logger.cpp
)

target_include_directories(ChordStudioEngine
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(ChordStudioEngine
    PUBLIC
        nlohmann_json::nlohmann_json
        kissfft::kissfft
        miniz
        miniaudio
)
