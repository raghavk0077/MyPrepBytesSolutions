#include "iostream"
using namespace std;

//created this printArr function just for checking whether i am getting right and left array correct or not
void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {

    // int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};   sample test case
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n], left[n], right[n], water = 0;   //initialized array


        //taking input of buildings height
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        
        //creating left array for maximum height
        left[0] = arr[0];
        for(int i = 1; i < n; i++){
            left[i] = max(left[i-1], arr[i]);
        }
        // printArr(left,n);

        //creating right array for maximum height starting from last index
        right[n - 1] = arr[n - 1];
        for(int i = n-2; i >= 0; i--){
            right[i] = max(arr[i],right[i+1]);
        }
        // printArr(right,n);

        //calculating the number of units of water trapped between the buildings
        for(int i = 0; i < n; i++){
            water += (min(left[i],right[i]) - arr[i]);
        }
        cout<<water<<endl;  //printing the total value of water trapped
    }

    return 0;
}