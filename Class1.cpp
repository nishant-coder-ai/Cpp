#include<iostream>

using namespace std;

class Mobile{
    public:
        string model;

    private:
        int price;

    public:
        string company;
        void display(){
            cout<<"Enter the Model : ";
            cin>>model;
            cout<<"Enter the Price : ";
            cin>>price;
            cout<<price<<company<<model<<endl;

        }


};

int main(){
    Mobile M1;

    M1.company = "Xiome";
    M1.display();

    return 0;
}
