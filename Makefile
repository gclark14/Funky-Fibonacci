all: rabbits

rabbits: main.o
	g++ -o r -std=c++11 $^

main.o: main.cpp
	g++ -g -c main.cpp -std=c++11

clean: 
	rm r *.o
