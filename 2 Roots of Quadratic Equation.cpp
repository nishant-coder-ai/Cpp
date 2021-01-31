#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the Value of a , b, c from the Quadratic Equation: "<<endl;
    cin>>a>>b>>c;

    double d;
    d = (b*b) - (4*a*c);
    double r1, r2;
    if(d<0){
        int real , img;
        real = -b / (2*a);
        img = sqrt(d) / (2*a);
        cout<<"Roots are : "<<real<<" + i"<<img<<" ."<<endl;
        cout<<"Roots are : "<<real<<" - i"<<img<<" ."<<endl;

    }else if(d>0){
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        cout<<"Roots are : "<<r1<<endl;
        cout<<"Roots are : "<<r2<<endl;
    }else{
        r1 = r2 = -b / (2*a);
        cout<<"Roots are : "<<r1<<endl;
        cout<<"Roots are : "<<r2<<endl;
    }


    return 0;
}
