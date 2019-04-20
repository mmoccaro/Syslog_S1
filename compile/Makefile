# * =======================
# *
# * Author: Matthew Moccaro
# * File:   Makefile
# * Type:   Makefile
# * 
# * Creation Date: 4/20/19
# *
# * Description: Makefile to
# * create the Syslog_S1 project.
# * 
# * ======================

#Parameters-------------------
CC=g++
ARGS=-Wall -std=c++11 -O3 -pthread -I/usr/include/gtk-3.0 -I/usr/include/atk-1.0 -I/usr/include/at-spi2-atk/2.0 -I/usr/include/pango-1.0 -I/usr/include/gio-unix-2.0/ -I/usr/include/cairo -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include -I/usr/include/at-spi-2.0 -I/usr/include/dbus-1.0 -I/usr/lib64/dbus-1.0/include -I/usr/include/libdrm -I/usr/include/harfbuzz -I/usr/include/freetype2 -I/usr/include/fribidi -I/usr/include/libpng15 -I/usr/include/uuid -I/usr/include/pixman-1  -lgtk-3 -lgdk-3 -latk-1.0 -lgio-2.0 -lpangocairo-1.0 -lgdk_pixbuf-2.0 -lcairo-gobject -lpango-1.0 -lcairo -lgobject-2.0 -lglib-2.0 
SOURCE_PATH=../source/
BIN_PATH=../binaries/
OBJ_PATH=../objects/
INCLUDE_DIR=../source/
DEFINES=-D LINUX
INCLUDES=
OBJS=


#DEFAULTS
default: $(BIN_PATH)Syslog_S1.exe

#Syslog_S1
$(BIN_PATH)Syslog_S1.exe: $(SOURCE_PATH)Syslog_S1.cpp $(OBJS)
				  
	@echo ""
	@echo "Creating Main Executable..."
	@echo ""
	$(CC) $(ARGS) $(DEFINES) $(INCLUDES) $(SOURCE_PATH)Syslog_S1.cpp $(OBJS) -o $(BIN_PATH)Syslog_S1.exe
	@echo ""


#Clean and Refresh=================================================

#Clean
clean:
	rm $(BIN_PATH)* $(OBJ_PATH)*

#Refresh
refresh:
	rm $(BIN_PATH)* $(OBJ_PATH)*
	make

.PHONY: clean refresh

#End of File
