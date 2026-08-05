include(FetchContent)

# 1. JSON library
FetchContent_Declare(
    json
    GIT_REPOSITORY https://github.com/nlohmann/json.git
    GIT_TAG        v3.11.3
)
FetchContent_MakeAvailable(json)

# 2. KissFFT library
FetchContent_Declare(
    kissfft
    GIT_REPOSITORY https://github.com/mborgerding/kissfft.git
    GIT_TAG        master
)
set(KISSFFT_DATATYPE "float" CACHE STRING "" FORCE)
FetchContent_MakeAvailable(kissfft)

# 3. Miniz compression library
FetchContent_Declare(
    miniz
    GIT_REPOSITORY https://github.com/richgel999/miniz.git
    GIT_TAG        3.0.2
)
FetchContent_MakeAvailable(miniz)

# 4. Whisper.cpp AI engine
FetchContent_Declare(
    whisper
    GIT_REPOSITORY https://github.com/ggerganov/whisper.cpp.git
    GIT_TAG        v1.5.4
)
FetchContent_MakeAvailable(whisper)

# 5. Miniaudio framework (Single header setup)
FetchContent_Declare(
    miniaudio_repo
    GIT_REPOSITORY https://github.com/mackron/miniaudio.git
    GIT_TAG        0.11.21
)
FetchContent_MakeAvailable(miniaudio_repo)

add_library(miniaudio INTERFACE)
target_include_directories(miniaudio INTERFACE ${miniaudio_repo_SOURCE_DIR})
