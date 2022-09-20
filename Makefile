main: main.o getShapes.o
	g++ -o main main.o getShapes.o

main.o: main.cpp getShapes.h
	g++ -c main.cpp getShapes.h

getShapes.o: getShapes.cpp
	g++ -c getShapes.cpp

clean:
	rm -f main.o getShapes.o