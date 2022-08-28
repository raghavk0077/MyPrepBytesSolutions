//This is the famous algo to find majority element in an array Known as Moore's Voting Algorithm

#include"iostream"
using namespace std;

int main() {

    // int arr[12] = {2,1,4,5,2,4,2,2,4,2,2,2};
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int major = 0, count = 1, c = 0;
    for(int i = 1; i < n; i++){
        if(arr[major] == arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count == 0){
            major = i;
            count = 1;
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[major] == arr[i]){
            c++;
        }
        else{
            continue;
        }
    }
    if(c > (n/2)){
        cout<<arr[major];
    }
    else{
        cout<<"No major element is present in array"<<endl;
    }

    return 0;
}