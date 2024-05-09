run:
	gcc -c src/*.c -o bin/main.o -Iinclude
	gcc bin/main.o include/libnectar.a -Iinclude -lSDL2 -o bin/prog
	clear
	./bin/prog
clean:
	rm -rf bin/*

cleaninclude:
	rm -rf include/*
