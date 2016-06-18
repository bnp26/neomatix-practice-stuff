# the compiler: gcc for C program, define as g++ for C++
CC = g++

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS  =

INCLUDES = -I /usr/local/Cellar/opencv/2.4.13/include/opencv2

# the build target executable:
TARGET = imageviewer

all: $(TARGET)
    $(CC) $(CFLAGS) $(INCLUDES) -o $(TARGET) $(TARGET).cpp

clean:
    $(RM) $(TARGET)