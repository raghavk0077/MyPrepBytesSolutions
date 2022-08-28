#include "iostream"
using namespace std;

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {

    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;

        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        int temp[k];
        for(int i = n - k, j = 0; i < n; i++, j++){
            temp[j] = arr[i];
        }
        printArr(temp, k);

        for(int i = n - 1, j = n - k - 1; i >= k; i--, j--){
            arr[i] = arr[j];
        }

        for(int i = 0; i < k; i++){
            arr[i] = temp[i];
        }

        printArr(arr, n);



    }

    return 0;
}