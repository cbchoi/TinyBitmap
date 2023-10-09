SHELL := /bin/bash

CC = g++
SRCS = ../src/tinybmp.cpp ./simple_bmp.cpp
TARGET = simple_bmp
OBJS = $(SRCS:.cpp=.o)

$(TARGET) : $(OBJS)
	echo 'Makefile to test tinybmp'
	$(CC) -o $@ $^

.cpp.o :
	$(CC) -c -I../includes -o $@ $<

clean :
	rm -f $(OBJS) $(TARGET)
    
.PHONY : clean
