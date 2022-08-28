#include "iostream"
using namespace std;

int main() {

    int * ptr = new int(10);
    cout<<*ptr<<"\n";
    delete ptr;
    cout<<*ptr<<"\n";       //here it has becomed dangling ptr pointing to 
                            //any garbage value
    delete ptr;

    return 0;
}