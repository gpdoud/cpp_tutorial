main.exe : main.o time.o name.o
	g++ -o main.exe main.o time.o name.o

main.o : main.cpp
	g++ -c main.cpp

name.o : name.cpp name.h
	g++ -c name.cpp name.h

time.o : time.cpp time.h
	g++ -c time.cpp time.h

clean :
	rm *.o
	rm *.gch