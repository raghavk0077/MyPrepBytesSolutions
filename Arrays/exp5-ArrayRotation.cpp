#include "iostream"
using namespace std;

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//not working 
// int rotateLeft(int arr[], int n){
//     int temp = arr[0];
//     for(int i = 0; i <= n - 2; i++){
//         arr[i] = arr[i+1];
//     }
//     arr[n - 1] = temp;
// }

void reverse(int arr[], int s, int e){
    int temp = 0;
    for(int i = s; i < e/2; i++){
        temp = arr[i];
        arr[i] = arr[e - i - 1];
        arr[e - i - 1] = temp;
    }
    // int i = s;
    // while(i < e)
}

int main() {

    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    //this code is for left rotation of array
    /*
    int l;
    cin>>l;
    int temp[l];
    for(int i = 0; i < l; i++){
        temp[i] = arr[i];
    }
    printArr(temp,l);

    for(int i = 0; i <= n - l - 1; i++){
        arr[i] = arr[i + l];
    }
    printArr(arr,(n - l));

    for(int i = n - l, j = 0; i < n; i++, j++){
        arr[i] = temp[j];
    }
    printArr(arr, n);

    Time complexity = O(n) + O(l)
    Space complexity = O(l)

    */

   //Another way to do left rotation
   /*
    int l;
    cin>>l;
    for(int i = 0; i < l; i++){
        // rotateLeft(arr, l);
        int temp = arr[0];
        for(int i = 0; i <= n - 2; i++){
            arr[i] = arr[i+1];
        }
        arr[n - 1] = temp;
    }

    printArr(arr,n);

    Time complexity = O(n)*O(l)
    Space complexity = O(1)

    */

   //Another way to do left rotation
    int l;
    cin>>l;

    printArr(arr, n);

    reverse(arr, 0, n - l);
    // printArr(arr, n);

    reverse(arr, n - l, n);
    // printArr(arr, n);

    reverse(arr, 0, n);
    printArr(arr, n);

    return 0;
}