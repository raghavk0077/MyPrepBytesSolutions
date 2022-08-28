#include "iostream"
using namespace std;

int main() {

    int a = 10;
    double d;
    void *vptr;
    vptr = &a;
    // vptr = &d;
    // *vptr;
    // *vptr++;

    int *iptr = static_cast<int*>(vptr);
    cout<<*iptr;



    return 0 ;
}