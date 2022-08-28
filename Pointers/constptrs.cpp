#include "iostream"
using namespace std;

int main() {

    int x = 20 , y = 10;
    

    int *const ptr = &x; 

    // ptr = &y;
    *ptr = 10;

    cout<<ptr<<endl;
    cout<<*ptr;

    // cout<<*++ptr<<endl;

    /*
    const int * ptr = &x;           ptr = &x (is fine)          *ptr = 10; (cannot done)
    int * const ptr = &x;           ptr = &x (cannot done)      *ptr = 10; (is fine)
    const int * const ptr = &x;     ptr = &x (cannot done)      *ptr = 10; (cannot done)
    int const *ptr = &x;            ptr = &x (is fine)          *ptr = 10; (cannot done)


    */

    return 0;
}