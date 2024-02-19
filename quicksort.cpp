// quicksort implementation

#include "quicksort.h"

void quicksort(KeyType A[], int p, int r)
{
    if (p < r){
        int q = partition(A, p, r);
        quicksort(A, p, q - 1);
        quicksort(A, q + 1, r);
    }
}

void rquicksort(KeyType A[], int p, int r)
{
    if (p < r){
        int q = rpartition(A, p, r);
        rquicksort(A, p, q-1);
        rquicksort(A, q + 1, r);
    }
}

int partition(KeyType A[], int p, int r)
{
    int x = A[p];
    int i = p;
    for(int j = p + 1; j <= r; ++j){
        if (A[j] <= x){
            i = i + 1;
            std::swap(A[i], A[j]);
        }
    }
    std::swap(A[p], A[i]);
    return i;
}

int rpartition(KeyType A[], int p, int r)
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int i = (std::rand() % (r- p + 1)) + p;
    std::swap(A[i], A[p]);
    return partition(A, p, r);
    // FILL IN THIS CODE
}
