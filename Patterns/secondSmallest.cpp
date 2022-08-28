#include "iostream"
using namespace std;

int main() {

    // int x, y, z;
    // cin>>x>>y>>z;
    // if((x>y && x<z) || (x>z && x<y))
    //     cout<<x;
    // else if((y>x && y<z) || (y>z && y<x))
    //     cout<<y;
    // else
    //     cout<<z;

    // for (int i = 0; i<=127; cout<<" "<< i++);   

    int sum = 0;
     for (int i = 0, j = 0; i < 5 && j < 5; ++i, j = i + 1)
         sum += i;
      cout<< sum;
    return 0;
}