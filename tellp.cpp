#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;

int main(){
    ofstream obj;
    obj.open("Jarvis.txt", ios::app);

    int pos;
    char ch;
    pos = obj.tellp();
    cout<<pos<<"\n";   /// actually we expected put pointer will be at 14 th means last word of file , and it is Ok, but its index will be start from 0. onwards.
    obj<<"ABCDEF";
    pos = obj.tellp();
    cout<<pos<<"\n";




    obj.close();
    getch();

    return 0;
}

