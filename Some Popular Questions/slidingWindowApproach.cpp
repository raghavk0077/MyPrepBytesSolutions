#include"iostream"
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        int sum = 0, maxSum = 0;
        //here we have calculated the sum till k consecutive elements
        for(int i = 0; i < k; i++){
            sum += arr[i];
        }

        maxSum = sum;
        //here we will start from k index and move in forward direction subtracting the first element each time and adding the next element in the sum
        for(int i = k; i < n; i++){
            sum += arr[i] - arr[i - k];
            if(sum > maxSum){
                maxSum = sum;
            }
        }
        cout<<maxSum<<endl;
    }

    return 0;
}

/*
Time complexity = O(n)
Space complexity = O(1);
*/