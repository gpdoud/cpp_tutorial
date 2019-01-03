#include <iostream>

void cast_void_ptr_to_int_ptr();
void function_return_value();
void function_returns_dynamic_memory();
void mem_alloc_new_delete();
void references();

int main(int argc, char *argv[]) {

    cast_void_ptr_to_int_ptr();
    mem_alloc_new_delete();
    references();
    function_return_value();
    function_returns_dynamic_memory();
    return 0;
}