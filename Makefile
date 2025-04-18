cc := gcc
include := ./include
CFLAGS := -Wall -I$(include)
bin := bin/HexDec.exe

all : $(bin)

win : CFLAGS := $(CFLAGS) -DWINDOWS
win : all

# linux : CFLAGS := $(CFLAGS)
linux : all

$(bin) : objs/main.o
	$(cc) -o $@ $^

objs/main.o : main.c
	$(cc) $(CFLAGS) -c -o $@ $^


clean :
	rm objs/*.o bin/*.exe

dir :
	mkdir bin
	mkdir objs
