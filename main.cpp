#include <iostream>
#include "binheap.h"
#include <random>

int main() {

    BinHeap k;
    k.insert(3);
    k.insert(4);
    k.insert(5);
    k.insert(8);
    k.insert(7);
    k.insert(6);
    k.insert(9);

    k.buildMinHeap(k.heapSize);

    k.ShowHeap(1,0);





    // Generate a random number between 0 and 10







    return 0;
}
