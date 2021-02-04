#include<iostream>

using namespace std;

struct Person{
    char name;
    int age;
    float percentage;

};

void display(Person x){

    cout<<x.name<<endl;
    cout<<x.age<<endl;
    cout<<x.percentage<<endl;


}

int main(){
    Person p1;
    p1.name= 'j';
    p1.age=99;
    p1.percentage=55.55;

    display(p1);


    return 0;
}
