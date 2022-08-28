#include "iostream"
using namespace std;

int main() {

    string str;
    cin>>str;

    int freqArr[26] = {0};  //created this array for storing frequencies of characters present in string 

    for(int i = 0; i < str.length(); i++){
        freqArr[str[i] - 97]++;     //incremented the frequencies of each character in frequency array that appeared here
    }

    //for finding the first non repeating character traversing the string and matching value with frequency array
    int flag = 1;
    for(int i = 0; i < str.length(); i++){
        if(freqArr[str[i] - 97] == 1){
            cout<<str[i]<<endl;
            flag = 0;
            break;
        }

    }
    if(flag == 1){
        cout<<"No Non repeating character in string"<<endl;
    }

    /*
    Time complexity = O(n)
    Space Complexity = O(1)
    */
    return 0;
}