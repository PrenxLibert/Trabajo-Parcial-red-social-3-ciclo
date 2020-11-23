QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    interfas.cpp \
    main.cpp \
    redsocial.cpp

HEADERS += \
    Coleccion.h \
    Comment.h \
    Follow.h \
    Followers.h \
    HashTable.h \
    Interaccion.h \
    Interaciones.h \
    Library.h \
    Message.h \
    Publicacion.h \
    Publicaciones.h \
    Tree.h \
    User.h \
    interfas.h \
    redsocial.h

FORMS += \
    interfas.ui \
    redsocial.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../../../../algoritmia/TF pruebas/build-Red_Social-Desktop_Qt_5_15_1_MinGW_64_bit-Debug/usuarios.txt \
    ../../../../algoritmia/TF pruebas/build-Red_Social-Desktop_Qt_5_15_1_MinGW_64_bit-Debug/usuarios.txt \
    followers.tsv \
    interaction.tsv \
    publications.tsv \
    users.tsv
