#include <iostream>

using namespace std;

int *randomizer(int siz) {
    int *arr = new int[siz];

    srand((unsigned)time( NULL ));
    for (int counter = 0; counter < siz; counter++){
        arr[counter] = rand();
    }

    return arr;
}

int *copier(int *arr, int siz) {
    int* arrCopy = new int[siz];
    copy(arr, arr + siz, arrCopy);

    return arrCopy;
}
