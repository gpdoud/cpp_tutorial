main.exe : main.o cast_void_ptr_to_int_ptr.o
	g++ -o main.exe main.o cast_void_ptr_to_int_ptr.o

main.o : main.cpp 
	g++ -c main.cpp

cast_void_ptr_to_int_ptr.o : cast_void_ptr_to_int_ptr.cpp
	g++ -c cast_void_ptr_to_int_ptr.cpp

clean :
	rm main.exe main.o cast_void_ptr_to_int_ptr.o

run :
	./main.exe