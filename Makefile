CC=gcc

LIBS=$(shell sdl-config --cflags --libs)

bin/main: main.c bin/
	$(CC) -o $@ $< $(LIBS)

bin/:
	mkdir bin