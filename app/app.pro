TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    myfunc.c

HEADERS += \
    myfunc.h

QMAKE_CFLAGS += -Wall -Wextra -Werror

# gcov
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov

deltarget.commands = $$QMAKE_DEL_FILE $$TARGET
QMAKE_EXTRA_TARGETS += deltarget
PRE_TARGETDEPS += deltarget


