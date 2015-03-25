TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += C++11
CONFIG += thread

SOURCES += \
    vRef.cpp \
    vHeap.cpp \
    vGarbageCollector.cpp \
    Main.cpp \
    DataManager.cpp \
    crazythread.cpp \
    DataInfo.cpp

OTHER_FILES += \
    LightWeight-Dynamic-Memory-Manager.pro.user

HEADERS += \
    vRef.h \
    vHeap.h \
    vGarbageCollector.h \
    nodo.h \
    lista_enlazada.h \
    DataManager.h \
    DataInfo.h \
    crazythread.h

