#ifndef CHORDSTUDIO_PROJECT_MODEL_HPP
#define CHORDSTUDIO_PROJECT_MODEL_HPP

#include <string>

namespace chordstudio {

struct ProjectModel {
    std::string name{"Untitled"};
    std::string filePath;
};

} // namespace chordstudio

#endif
