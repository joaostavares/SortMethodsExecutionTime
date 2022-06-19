using namespace std;

int partition(int *arr, int start, int end) {
    int left,right,pivot,aux;
    left = start;
    right = end;

    pivot = arr[start];

    while (left < right){

        while (arr[left] <= pivot && left < end){
            left++;
        }
        while(arr[right] > pivot){
            right--;
        }
        if(left < right){
            aux = arr[left];
            arr[left] = arr[right];
            arr[right] = aux;
        }
    }
    arr[start] = arr[right];
    arr[right] = pivot;
    return right;
}

void quickSort(int *arr, int start, int end) {
    int pivot;
    if(end > start){
        pivot = partition(arr, start, end);
        quickSort(arr, start, pivot-1);
        quickSort(arr, pivot+1, end);
    }
}

int execQuickSort(int* arr, int siz) {
    quickSort(arr,0, siz-1);
    return 0;
}
