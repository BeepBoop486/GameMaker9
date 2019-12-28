######################################################################
# Automatically generated by qmake (3.1) Fri Dec 27 06:46:03 2019
######################################################################

TEMPLATE = app
TARGET = "PK Creator"
INCLUDEPATH += .

# You can make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# Please consult the documentation of the deprecated API in order to know
# how to port your code away from it.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Input
HEADERS += CodeEditor.h \
           CodeEditorWindow.h \
           Config.h \
           EventItem.h \
           Highlighter.h \
           Item.h \
           LineNumberArea.h \
           LuaDebugger.h \
           MainWindow.h \
           Object.h \
           ResourceView.h \
           Scene.h \
           SceneEditor.h \
           Sprite.h \
           Texture.h \
           TreeModel.h \
           WelcomeWindow.h
FORMS += CodeWindow.ui \
         ConfigWindow.ui \
         MainWindow.ui \
         ObjectWindow.ui \
         SceneWindow.ui \
         SpriteWindow.ui \
         TextureWindow.ui \
         WelcomeWindow.ui
SOURCES += CodeEditor.cpp \
           CodeEditorWindow.cpp \
           Config.cpp \
           EventItem.cpp \
           Highlighter.cpp \
           LuaDebugger.cpp \
           main.cpp \
           MainWindow.cpp \
           Object.cpp \
           ResourceView.cpp \
           Scene.cpp \
           SceneEditor.cpp \
           Sprite.cpp \
           Texture.cpp \
           TreeModel.cpp \
           WelcomeWindow.cpp
RESOURCES += Resources.qrc res/res.qrc \
    Resources.qrc

QT += core gui widgets

unix: CONFIG += link_pkgconfig
unix: PKGCONFIG += lua
