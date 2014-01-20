TEMPLATE = app

CONFIG += console
win32: CONFIG += windows
unix: CONFIG += nix
CONFIG -= app_bundle
CONFIG -= qt

SOURCES +=  main.cpp

INCLUDEPATH += ../../

CONFIG += c++11

QMAKE_CXXFLAGS += "-ofast"

nix {
    LIBS += -lgtest -lpthread
}

windows {
    LIBS += -L..\gtestlib_path\lib*.a
    INCLUDEPATH += ..\gtest_source
}
