#include<iostream>

using namespace std;

int main(){
    int num1, num2, num3;
    cout<<"Enter the three Numbers : "<<endl;
    cin>>num1>>num2>>num3;

    if(num1>num2){
            if(num1>num3){
                cout<<"num1 i.e. "<<num1<<" is the greatest Number."<<endl;
            }else{
                cout<<"num3 i.e. "<<num3<<" is the greatest Number."<<endl;
            }

    }else{
        if(num2>num3){
            cout<<"num2 i.e. "<<num2<<" is the greatest Number."<<endl;
        }else{
            cout<<"num3 i.e. "<<num3<<" is the greatest Number."<<endl;
        }
    }

    return 0;
}
