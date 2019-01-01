main.exe : main.o cast_void_ptr_to_int_ptr.o mem_alloc_new_delete.o references.o
	g++ -o main.exe main.o cast_void_ptr_to_int_ptr.o mem_alloc_new_delete.o references.o

main.o : main.cpp 
	g++ -c main.cpp

cast_void_ptr_to_int_ptr.o : cast_void_ptr_to_int_ptr.cpp
	g++ -c cast_void_ptr_to_int_ptr.cpp

mem_alloc_new_delete.o : mem_alloc_new_delete.cpp
	g++ -c mem_alloc_new_delete.cpp

references.o : references.cpp
	g++ -c references.cpp

clean :
	rm main.exe main.o cast_void_ptr_to_int_ptr.o mem_alloc_new_delete.0 references.o

run :
	./main.exe