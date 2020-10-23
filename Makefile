CC=gcc

LIBS=$(shell sdl-config --cflags --libs)

bin/TapInSDL: tapinsdl.cpp bin/
	$(CC) -o $@ $< $(LIBS)

bin/:
	mkdir bin