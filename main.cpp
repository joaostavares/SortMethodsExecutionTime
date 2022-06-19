#include <iostream>
#include <chrono>
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "HeapSort.h"
#include "ArrayCreation.h"

using namespace std;
using namespace std::chrono;

int main() {
    int siz = 100;
    cout << "*     ----------     *" << endl << endl << endl;
    while(siz <= 10000) {
        int *arr = randomizer(siz);
        int *arrCopy = copier(arr, siz);
        auto start = high_resolution_clock::now();
        execBubbleSort(arrCopy, siz);
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<milliseconds>(stop - start);
        cout << "BubbleSort execution for " << siz << " elements takes " << duration.count() << " milliseconds" << endl << endl;
        delete arrCopy;
        arrCopy = copier(arr, siz);
        start = high_resolution_clock::now();
        execSelectionSort(arrCopy, siz);
        stop = high_resolution_clock::now();
        duration = duration_cast<milliseconds>(stop - start);
        cout << "SelectionSort execution for " << siz << " elements takes " << duration.count() << " milliseconds" << endl << endl;
        delete arrCopy;
        arrCopy = copier(arr, siz);
        start = high_resolution_clock::now();
        execInsertionSort(arrCopy, siz);
        stop = high_resolution_clock::now();
        duration = duration_cast<milliseconds>(stop - start);
        cout << "InsertionSort execution for " << siz << " elements takes " << duration.count() << " milliseconds" << endl << endl;
        delete arrCopy;
        arrCopy = copier(arr, siz);
        start = high_resolution_clock::now();
        execMergeSort(arrCopy, siz);
        stop = high_resolution_clock::now();
        duration = duration_cast<milliseconds>(stop - start);
        cout << "MergeSort execution for " << siz << " elements takes " << duration.count() << " milliseconds" << endl << endl;
        delete arrCopy;
        arrCopy = copier(arr, siz);
        start = high_resolution_clock::now();
        execQuickSort(arrCopy, siz);
        stop = high_resolution_clock::now();
        duration = duration_cast<milliseconds>(stop - start);
        cout << "QuickSort execution for " << siz << " elements takes " << duration.count() << " milliseconds" << endl << endl;
        delete arrCopy;
        arrCopy = copier(arr, siz);
        start = high_resolution_clock::now();
        execHeapSort(arrCopy, siz);
        stop = high_resolution_clock::now();
        duration = duration_cast<milliseconds>(stop - start);
        cout << "HeapSort execution for " << siz << " elements takes " << duration.count() << " milliseconds" << endl << endl;
        delete arrCopy;
        siz = siz*10;
        cout << "*     ----------     *" << endl << endl << endl;
    }

    return 0;
}
