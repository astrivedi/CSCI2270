all: listclass.o driver.o
	g++ listclass.o driver.o -o lists
listclass.o: listclass.cpp listclass.hpp
	g++ -c listclass.cpp
driver.o: driver.cpp 
	g++ -c driver.cpp
clean:
	rm -rf lists listclass.o driver.o
