#include "iostream"
using namespace std;

int main() {

    string str;
    cin>>str;

    int freqArr[26] = {0};  

    for(int i = 0; i < str.length(); i++){
        freqArr[str[i] - 97]++;     
    }

    
    int flag = 1;
    for(int i = 0; i < str.length(); i++){
        if(freqArr[str[i] - 97] == 1){
            cout<<i<<endl;
            flag = 0;
            break;
        }

    }
    if(flag == 1){
        cout<<-1<<endl;
    }


    return 0;
}