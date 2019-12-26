######################################################################
# Automatically generated by qmake (3.1) Thu Dec 26 13:25:24 2019
######################################################################

TEMPLATE = app
TARGET = src
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
           EventItem.h \
           Highlighter.h \
           Item.h \
           LineNumberArea.h \
           LuaDebugger.h \
           MainWindow.h \
           Object.h \
           ResourceView.h \
           Scene.h \
           Sprite.h \
           Texture.h \
           TreeModel.h \
           WelcomeWindow.h \
           ../Vendor/lua/include/lauxlib.h \
           ../Vendor/lua/include/lua.h \
           ../Vendor/lua/include/lua.hpp \
           ../Vendor/lua/include/luaconf.h \
           ../Vendor/lua/include/lualib.h
FORMS += CodeWindow.ui \
         MainWindow.ui \
         ObjectWindow.ui \
         SceneWindow.ui \
         SpriteWindow.ui \
         TextureWindow.ui \
         WelcomeWindow.ui
SOURCES += CodeEditor.cpp \
           CodeEditorWindow.cpp \
           EventItem.cpp \
           Highlighter.cpp \
           LuaDebugger.cpp \
           main.cpp \
           MainWindow.cpp \
           Object.cpp \
           ResourceView.cpp \
           Scene.cpp \
           Sprite.cpp \
           Texture.cpp \
           TreeModel.cpp \
           WelcomeWindow.cpp
RESOURCES += MainWindow.qrc res/res.qrc

QT += core gui widgets

unix: CONFIG += link_pkgconfig
unix: PKGCONFIG += lua
