TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    pacman.cpp \
    sysinfo.cpp \
    gui.cpp \
    other.cpp \
    kernel.cpp \
    run.cpp \
    hwinfo.cpp

HEADERS += \
    pacman.h \
    sysinfo.h \
    gui.h \
    other.h \
    kernel.h \
    run.h \
    hwinfo.h
