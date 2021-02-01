#include<iostream>

using namespace std;

class Mobile{
    public:
        int price;
        string model;
    void display(){
        cout<<"HI"<<endl;
        cout<<price<<endl;

    }
};

int main(){
    Mobile oneG;

    oneG.price = 1000;
    oneG.model = "Nokia";
    oneG.display();

    return 0;
}
