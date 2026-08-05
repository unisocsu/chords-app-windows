cmake_minimum_required(VERSION 3.20)
project(ChordStudio VERSION 0.1.0 LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Load dependencies
add_subdirectory(third_party)

# Load engine and desktop app
add_subdirectory(engine)
add_subdirectory(app)
