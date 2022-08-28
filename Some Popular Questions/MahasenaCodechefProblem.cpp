#include "iostream"
using namespace std;

int main() {

    int n, lucky = 0, unlucky = 0;
    cin>>n;
    int *arr = new int(n);      //creating dynamic array
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        if(arr[i] % 2 == 0){
            lucky++;
        }
        else{
            unlucky++;
        }
    }

    if(lucky > unlucky){
        cout<<"READY FOR BATTLE";
    }
    else{
        cout<<"NOT READY";
    }

    delete arr;                 //deleting memory location of array

    return 0;
}