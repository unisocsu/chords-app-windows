#include "logger.hpp"
#include <iostream>

namespace chordstudio {

void Logger::log(const std::string& message) {
    std::cout << "[ChordStudio INFO] " << message << std::endl;
}

void Logger::error(const std::string& message) {
    std::cerr << "[ChordStudio ERROR] " << message << std::endl;
}

} // namespace chordstudio
