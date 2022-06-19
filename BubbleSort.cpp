using namespace std;

void execBubbleSort(int *arr, int siz) {
    int aux, end = siz;
    bool check = false;
    do
    {
        check = false;
        for (int counter = 0; counter < end - 1; counter++){
            if(arr[counter] > arr[counter+1]){
                aux = arr[counter];
                arr[counter] = arr[counter+1];
                arr[counter+1] = aux;
                check = true;
            }
        }
        end--;
    } while (check != false);
}
