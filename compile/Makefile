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
ARGS=-Wall -std=c++11 -O3
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
