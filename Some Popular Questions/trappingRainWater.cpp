#include "iostream"
using namespace std;

void printArr(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main() {

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *arr = new int(n);          //dynamically creating 1D array
        int *left = new int(n);
        int *right = new int(n);
        int water = 0;

        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        // printArr(arr, n);

        left[0] = arr[0];
        for(int i = 1; i < n; i++){
            left[i] = max(left[i-1], arr[i]);
        }

        printArr(left,n);

        //creating right side array
        right[n - 1] = arr[n - 1];
        for(int i = n-2; i >= 0; i--){
            right[i] = max(arr[i],right[i+1]);
        }

        printArr(right, n);

        for(int i = 0; i < n; i++){
        water += (min(left[i],right[i]) - arr[i]);
        }
        cout<<water<<endl;

    }

    return 0;
}