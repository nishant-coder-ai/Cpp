#include<iostream>

using namespace std;

class Base{
    public:
    string name;
    Base(string name){
        cout<<"Hi";
        cout<<name;

    }


};

int main(){
    Base b1(" nana");

    return 0;
}
