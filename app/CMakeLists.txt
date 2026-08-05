find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

qt_standard_project_setup()

qt_add_executable(ChordStudioApp
    main.cpp
    main_window.hpp
    main_window.cpp
)

target_link_libraries(ChordStudioApp
    PRIVATE
        ChordStudioEngine
        Qt6::Core
        Qt6::Gui
        Qt6::Widgets
)
