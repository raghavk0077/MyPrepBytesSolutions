#include "iostream"
using namespace std;

int main() {

    int arr[] = {10, 20, 30 ,40 ,50};

    int * p = arr;

    cout<<sizeof(arr)<<endl<<sizeof(p)<<endl;
    cout<<arr+1<<endl<<p++<<endl;

    // cout<<*(arr + 1);

    // cout<<arr<<endl<<&arr[1];

    return 0;
}