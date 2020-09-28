QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    interfast.cpp \
    main.cpp \
    baseredsocial.cpp

HEADERS += \
    baseredsocial.h \
    chat.h \
    interfast.h \
    lista.h \
    usuario.h

FORMS += \
    baseredsocial.ui \
    interfast.ui

TRANSLATIONS += \
    Red_Social_es_419.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../build-Red_Social-Desktop_Qt_5_15_1_MSVC2015_64bit-Debug/reg_users.txt \
    mensajes.txt
