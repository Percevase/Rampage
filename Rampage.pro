TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    Cube.cpp \
    Room.cpp \
    GameTools.cpp \
    Fighter.cpp \
    Physics.cpp

HEADERS += \
    Cube.h \
    Room.h \
    GameTools.h \
    Fighter.h \
    Physics.h
