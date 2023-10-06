all: func.o poligonos.o
	gcc func.o poligonos.o main.c -o main

func.o: func.h
	gcc -c func.c

poligonos.o: poligonos.h
	gcc -c poligonos.c

clean:
	rm *.o main

run:
	./main
