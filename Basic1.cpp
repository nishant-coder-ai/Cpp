#include<iostream>

using namespace std;

int main(){
    int num[5] = {1,2,3,4,5};
    cout<<num[0]<<endl;
    cout<<num[1]<<endl;
    cout<<num[2]<<endl;
    cout<<num[3]<<endl;
    cout<<num[4]<<endl;
    cout<<num[5]<<endl;

    int a = 1;
    while(a<10){
        cout<<a<<endl;
        a++;
    }

    string name;
    cout<<"Enter your name : ";
    getline(cin, name);

    cout<<"hi,"<<name<<" ."<<endl;


    return 0;
}
