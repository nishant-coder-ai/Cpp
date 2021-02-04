#include<iostream>

using namespace std;

struct Xiome{
    string name;
    int price;
};

void printValues(string *namemobile, int *pricemobile){
    cout<<"Name : "<<*namemobile<<" , Price : "<<*pricemobile<<endl;
}

int main(){
    struct Xiome Note ={"Pro 5", 15000};
    cout<<Note.name<<" ,  "<<Note.price<<endl;
    printValues(&Note.name, &Note.price);
    return 0;
}
