#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream obj("Player.txt");

    string name;
    int id;
    int num;

    while(obj>>name>>id>>num){
        cout<<name<<" : " <<id<<" : "<<num<<endl;
    }

    return 0;
}
