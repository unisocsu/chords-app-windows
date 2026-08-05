#ifndef CHORDSTUDIO_MAIN_WINDOW_HPP
#define CHORDSTUDIO_MAIN_WINDOW_HPP

#include <QMainWindow>
#include <memory>

namespace chordstudio {
    class AudioEngine;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private:
    std::unique_ptr<chordstudio::AudioEngine> m_audioEngine;
};

#endif // CHORDSTUDIO_MAIN_WINDOW_HPP
