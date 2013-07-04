TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    block.cpp \
    level.cpp \
    game.cpp \
    renderer.cpp

HEADERS += \
    BVector2D.hpp \
    level.hpp \
    game.hpp \
    renderer.hpp \
    block.hpp

LIBS += \
   -L/usr/lib -lSDL -lSDL_image -lSDL_ttf

OTHER_FILES += \
    Art/hello.bmp

