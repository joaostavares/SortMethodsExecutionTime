using namespace std;

void execSelectionSort(int *arr, int siz) {

    int small, aux;
    for (int counter1 = 0; counter1 < siz - 1; counter1++){
        small = counter1;
        for(int counter2 = counter1 + 1; counter2 < siz; counter2++){
            if(arr[counter2] < arr[small]){
                small = counter2;
            }
        }
        if(small != counter1){
            aux = arr[counter1];
            arr[counter1] = arr[small];
            arr[small] = aux;
        }
    }
}
