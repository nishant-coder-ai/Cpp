#include<iostream>

using namespace std;

class Mars{
    public:
        void printName(){                            /// this is simple function
            cout<<"This is Mars , okkk looks Good...   :)"<<endl;

        }
        void printAxe() const{                       /// this is constant function.
            cout<<"This is Axe ! "<<endl;
        }

};

int main(){

    Mars m1;
    m1.printName();
    const Mars m2;
    m2.printAxe();

///    m2.printName();  this will generate error , cause the function we called isn't const..

    return 0;
}
