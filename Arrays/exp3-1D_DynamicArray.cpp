#include "iostream"
using namespace std;

void PrintArr(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main () {

    int n;
    cin>>n;
    int * arr = new int(n);

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    PrintArr(arr, n);

    return 0;
}