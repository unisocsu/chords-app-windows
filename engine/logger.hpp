#ifndef CHORDSTUDIO_LOGGER_HPP
#define CHORDSTUDIO_LOGGER_HPP

#include <string>

namespace chordstudio {

class Logger {
public:
    static void log(const std::string& message);
    static void error(const std::string& message);
};

} // namespace chordstudio

#endif // CHORDSTUDIO_LOGGER_HPP
