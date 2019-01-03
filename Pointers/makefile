main.exe : main.o cast_void_ptr_to_int_ptr.o mem_alloc_new_delete.o references.o function_return_value.o function_returns_dynamic_memory.o
	g++ -o main.exe main.o cast_void_ptr_to_int_ptr.o mem_alloc_new_delete.o references.o function_return_value.o function_returns_dynamic_memory.o

main.o : main.cpp 
	g++ -g -c main.cpp

cast_void_ptr_to_int_ptr.o : cast_void_ptr_to_int_ptr.cpp
	g++ -g -c cast_void_ptr_to_int_ptr.cpp

mem_alloc_new_delete.o : mem_alloc_new_delete.cpp
	g++ -g -c mem_alloc_new_delete.cpp

references.o : references.cpp
	g++ -g -c references.cpp

function_return_value.o : function_return_value.cpp
	g++ -g -c function_return_value.cpp

function_returns_dynamic_memory.o : function_returns_dynamic_memory.cpp
	g++ -g -c function_returns_dynamic_memory.cpp

clean :
	rm main.exe main.o cast_void_ptr_to_int_ptr.o mem_alloc_new_delete.0 references.o function_return_value.o function_returns_dynamic_memory.o

run :
	./main.exe