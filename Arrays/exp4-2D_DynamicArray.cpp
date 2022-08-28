#include "iostream"
using namespace std;

void printArr(int **arr, int r, int c){
    for(int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main() {

    int r,c;
    cin>>r>>c;

    int **arr = new int*[r];        //array of r int pointers - rows

    for(int i = 0; i < r; i++){
        arr[i] = new int[c];        //columns each of size c
    }

    for(int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin>>arr[i][j];
        }
    }

    printArr(arr, r, c);

    return 0;
}