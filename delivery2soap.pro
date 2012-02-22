#-------------------------------------------------
#
# Project created by QtCreator 2012-02-14T14:28:51
#
#-------------------------------------------------
TARGET = delivery2soap
TEMPLATE = app
LIBS += -lgsoap++
INCLUDEPATH += soap/header

SOURCES += main.cpp \
        mainwindow.cpp \
        soap/src/soapC.cpp \
        soap/src/soapedeliveryApiBindingProxy.cpp \

HEADERS  += mainwindow.h \
            delivery2Service.h \
            soapedeliveryApiBindingProxy.h \
            soapH.h \
            soapStub.h \


FORMS    += mainwindow.ui
