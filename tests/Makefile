SHELL := /bin/bash

CC = g++
INCLUDE = ../include
SRCS = ../src/tinybmp.cpp ./simple_bmp.cpp
TARGET = simple_bmp
OBJS = $(SRCS:.cpp=.o)

$(TARGET) : $(OBJS)
	echo 'Makefile to test tinybmp'
	$(CC) -o $@ $^

.cpp.o :
	$(CC) -c -I$(INCLUDE) -o $@ $<

clean :
	rm -f $(OBJS) $(TARGET)
    
.PHONY : clean
