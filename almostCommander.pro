TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    pacman.cpp \
    sysinfo.cpp \
    gui.cpp \
    other.cpp \
    kernel.cpp

HEADERS += \
    pacman.h \
    sysinfo.h \
    gui.h \
    other.h \
    kernel.h
