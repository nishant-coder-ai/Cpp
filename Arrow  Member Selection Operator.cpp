#include<iostream>
using namespace std;

class Mobile{
    public:
        void printName(string name){
            cout<<"This Is "<<name<<" ." <<endl;
        }
};

int main(){
    string name;
    cout<<"Enter the Name Of the Company : "<<endl;
    cin>>name;
    Mobile m1;
    Mobile *ptrmobile;
    ptrmobile = &m1;
    m1.printName(name);
    ptrmobile->printName(name);   /// if we want to send pointer to the class we don't use dot operator...

    return 0;
}
