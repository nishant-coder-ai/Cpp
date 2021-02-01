#include<conio.h>
#include<iostream>

using namespace std;

void sayHi(){
    cout<<"Hi !"<<endl;
}

void sayBi();

int retSum(int num1, int num2){
    int result;
    result = num1 + num2;
    return result;
}

int main(){
    /*cout<<"First Line ."<<endl;
    sayHi();
    cout<<"Third Line ."<<endl;
    sayBi();

    int num;
    cout<<"Enter your Age : ";
    cin>>num;
    if(num>=18){
        cout<<"You are Eligible to vote!"<<endl;
    }else{
        cout<<"You are not Eligible to vote!"<<endl;
    }
    string name;
    cout<<"Enter your Name : ";
    cin>>name;

    cout<<"Hi,"<<name<<" !"<<endl;
    int sum;
    sum = retSum(6,8);
    cout<<sum<<endl;*/
    int a=1;
    for(a=1 ; a<=100 ; a++){
        cout<<a<<endl;
    }

    getch();
    return 0;
}

void sayBi(){
    cout<<"Bye !"<<endl;
}

