#include "iostream"
using namespace std;

int main() {

    int n, mod = 0, temp, c = 0;
    cin>>n;
    temp = n;

    while(temp > 0){
        mod = temp % 10;
        temp = temp / 10;
        c++;
    }

     

    return 0;
}