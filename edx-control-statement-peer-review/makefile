main.exe : main.o power.o the_switch.o int_array.o calc_sine.o pow.o
	g++ -o main.exe main.o power.o the_switch.o int_array.o calc_sine.o pow.o

main.o : main.cpp
	g++ -g -c main.cpp

power.o : power.cpp
	g++ -g -c power.cpp

switch.o : the_switch.cpp
	g++ -g -c the_switch.cpp

int-array.o : int_array.cpp
	g++ -g -c int_array.cpp

pow.o : pow.cpp
	g++ -g -c pow.cpp

calc_sine.o : calc_sine.cpp
	g++ -g -c calc_sine.cpp

clean :
	rm main.exe *.o