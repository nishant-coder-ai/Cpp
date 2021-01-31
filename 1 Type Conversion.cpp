#include<iostream>

using namespace std;

int main(){
    int num1 = 88;
    cout<<"num1 : "<<num1<<endl;

    double num2;
    num2= num1;///--------implicit type conversion
    cout<<"num2 : "<<num2<<endl;

    double num3 = 888.77;
     cout<<"num3 : "<<num3<<endl;
    int num4;
    num4 = (int)num3;///--------explicit type conversion
     cout<<"num4 : "<<num4<<endl;


    return 0;
}
