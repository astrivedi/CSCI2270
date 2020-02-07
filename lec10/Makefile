all: main.o LinkedList.o
	g++ -o lists main.o LinkedList.o
main.o: main.cpp LinkedList.hpp
	g++ -c main.cpp 
LinkedList.o: LinkedList.cpp LinkedList.hpp
	g++ -c LinkedList.cpp
clean: 
	rm -rf lists main.o LinkedList.o 