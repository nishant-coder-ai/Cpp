#include<iostream>

using namespace std;

int add(int num1, int num2){
    return num1 + num2;
}

int main(){
    int n1,n2;
    cout<<"Enter the Two Numbers : "<<endl;
    cin>>n1>>n2;
    cout<<add(n1,n2)<<endl;

    return 0;
}
