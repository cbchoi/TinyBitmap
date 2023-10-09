SHELL := /bin/bash

CC = g++
CFLAGS = -c -Wall -Wextra -Werror

TARGET = libtb.a

INCLUDE = ../include
SRCS = ../src/tinybmp.cpp
OBJS = $(SRCS:.cpp=.o)

$(TARGET) : $(OBJS)
	ar -cr $@ $^

.cpp.o :
	$(CC) $(CFLAGS) -c -I$(INCLUDE) -o $@ $<

clean :
	rm -f $(OBJS) $(TARGET)
    
.PHONY : clean
