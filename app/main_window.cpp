#include "main_window.hpp"
#include "audio/audio_engine.hpp"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      m_audioEngine(std::make_unique<chordstudio::AudioEngine>()) {
    
    setWindowTitle("ChordStudio");
    resize(1280, 720);

    m_audioEngine->initialize();
}

MainWindow::~MainWindow() {
    if (m_audioEngine) {
        m_audioEngine->shutdown();
    }
}
