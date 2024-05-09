
SRCS := src/window.c src/global.c
OBJS := $(subst src/,,$(subst .c,.o,$(SRCS)))
SDL  := `sdl2-config --cflags --libs` -lSDL2 -lSDL2_mixer -lSDL2_image -lSDL2_ttf
build: src/*.h
	gcc -c $(SRCS) $(SDL)
	mv $(OBJS) bin/
	ar rcs bin/libnectar.a bin/*.o
	mv bin/libnectar.a ../sandbox/include/libnectar.a
	cp src/*.h ../sandbox/include/

clean:
	rm -rf bin/*
