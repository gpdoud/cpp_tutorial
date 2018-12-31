#include <iostream>

void cast_void_ptr_to_int_ptr() {

    void *vptr = malloc(sizeof(int));
    int *iptr = static_cast<int *>(vptr);
    // int *iptr = static_cast<int*>(malloc(sizeof(int))); // this is better
    *iptr = 88;
    std::cout << *iptr << " - should be 88" << std::endl;
    free(vptr);
}