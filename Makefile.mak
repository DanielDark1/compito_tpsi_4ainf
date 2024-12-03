all: project

clean: main.o math.o pow.o logger.o
	rm -f main.o math.o pow.o logger.o

project: main.o math.o pow.o logger.o trace.h math.h pow.h
	gcc -DDEBUG -o project main.o math.o pow.o logger.o

main.o: main.c
	gcc -DDEBUG -c -o main.o main.c

math.o: math.c math.h
	gcc -DDEBUG -c -o math.o math.c

pow.o: pow.c pow.h
	gcc -DDEBUG -c -o pow.o pow.c
	
logger.o: logger.c logger.h
	gcc -DDEBUG -c -o logger.o logger.c
