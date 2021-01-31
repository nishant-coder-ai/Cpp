#include<iostream>

using namespace std;

void display();
int main(){

    display();
    display();
}

void display(){
    static int number = 8;
    number++;
    cout<<number<<endl;
}
