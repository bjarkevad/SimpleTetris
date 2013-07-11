TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
QMAKE_CXXFLAGS += -std=c++0x

SOURCES += main.cpp \
    block.cpp \
    level.cpp \
    game.cpp \
    renderer.cpp \
    sdlhelpers.cpp

HEADERS += \
    BVector2D.hpp \
    level.hpp \
    game.hpp \
    renderer.hpp \
    block.hpp \
    sdlhelpers.hpp

LIBS += \
   -L/usr/lib -lSDL -lSDL_image -lSDL_ttf

OTHER_FILES += \
    Art/hello.bmp \
    Art/background.bmp
