TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

TARGET = palindrome

SOURCES += main.cpp \
    strfunctions.cpp

HEADERS += \
    strfunctions.h

CONFIG += c++11

QMAKE_CXXFLAGS += "-ofast"

SUBDIRS += tests
