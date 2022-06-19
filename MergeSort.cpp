#include <iostream>

using namespace std;

void merge(int *arr, int start, int mid, int end) {

    int *temp, aux1, aux2, siz;

    bool end1 = false, end2 = false;
    siz = end - start+1;
    aux1 = start;
    aux2 = mid+1;
    temp = new int[siz];

    if(temp != NULL){
        for(int counter = 0; counter< siz; counter++){
            if(!end1 && !end2){
                if(arr[aux1] < arr[aux2])
                    temp[counter] = arr[aux1++];
                else
                    temp[counter] = arr[aux2++];
                if(aux1 > mid)
                    end1 = true;
                if(aux2 > end)
                    end2 = true;
            }else{
                if(!end1)
                    temp[counter] = arr[aux1++];
                else
                    temp[counter] = arr[aux2++];
            }
        }
        for(int counter = 0, counter2 = start; counter < siz; counter++, counter2++)
            arr[counter2] = temp[counter];
    }
    delete []temp;

}

void mergeSort(int *arr, int start, int end) {
    int mid;
    if(start < end){
        mid = (start+end)/2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1,end);
        merge(arr,start,mid,end);
    }
}

int execMergeSort(int* arr, int siz) {
    mergeSort(arr, 0, siz-1);
    return 0;
}
