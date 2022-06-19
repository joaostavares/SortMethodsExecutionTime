using namespace std;

void heap(int *arr, int right, int end) {
    int aux = arr[right];
    int left = 2 * right + 1;
    while(left <= end){
        if(left < end){
            if(arr[left] < arr[left+1]){
                left++;
            }
        }
        if(aux < arr[left]){
            arr[right] = arr[left];
            right =  left;
            left = 2 * right + 1;
        }else{
            left = end + 1;
        }
    }
    arr[right] = aux;
}

void execHeapSort(int *arr, int siz) {
    int aux;
    for(int counter = (siz-1)/2; counter >= 0; counter--){
        heap(arr, counter, siz-1);
    }
    for(int counter = siz-1; counter>= 1; counter--){
        aux = arr[0];
        arr[0] = arr[counter];
        arr[counter] = aux;
        heap(arr, 0, counter-1);
    }
}
