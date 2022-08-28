#include "iostream"
using namespace std;

void squareArea(int);

int circleArea();

int rectangleArea(int, int);

int main() {

    int l,b,s,c = 1,a;
    
    do{
        cout<<"Please enter a valid operation number from the below menu"<<endl;
        cout<<"1 Calculate area of circle\n2 Calculate area of square\n3 Calculate area of rectangle";
        cin>>c;

        switch(c){
            case 1:
                a = circleArea();
                cout<<a<<endl;
                break;
            case 2:
                cin>>s;
                squareArea(s);
                break;
            case 3:
                cin>>l>>b;
                cout<<rectangleArea(l,b)<<endl;
                break;
        }
    }while(c < 0 && c > 3);



    return 0;
}

void squareArea(int s){
    cout<<(s*s);
}

int circleArea(){
    int r;
    cin>>r;

    return 3.14*r*r;
}

int rectangleArea(int l, int b){
    return l*b;
}