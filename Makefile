CC=g++

LIBS=$(shell sdl-config --cflags --libs)

bin/TapInSDL: tapinsdl.cpp bin/
	$(CC) $(LIBS) -o $@ $< -std=c++98

bin/:
	mkdir bin