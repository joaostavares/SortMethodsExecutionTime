using namespace std;

void execInsertionSort(int *arr, int siz) {

    int aux, aux2;

    for (int counter = 1; counter < siz; counter++){
        aux = arr[counter];
        for(aux2 = counter; (aux2 > 0) && (aux < arr[aux2-1]); aux2--){
            arr[aux2] = arr[aux2-1];
        }
        arr[aux2] = aux;
    }
}
