#include <iostream>

void mem_alloc_new_delete() {

    // alloc and init dynamic memory for int via the free store
    int *iptr = new int (88);
    std::cout << "Value should be 88 - " << *iptr << std::endl;
    // free the memory
    delete iptr;

    // alloc dynamic memory for int[] via the free store
    int *iaptr = new int[5] { 88, 88, 88, 88, 88 };
    std::cout << "Values should 5 values of 88 - ";
    for(int idx = 0; idx < 5; idx++) 
        std::cout << iaptr[idx] << " ";
    std::cout << std::endl;
    delete iaptr;
}