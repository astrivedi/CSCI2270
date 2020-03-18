list: List.o main.o
	g++ -o list List.o main.o
List.o: List.cpp List.hpp
	g++ -c List.cpp
main.o: main.cpp List.hpp
	g++ -c main.cpp
clean: 
	rm -rf List.o main.o list
