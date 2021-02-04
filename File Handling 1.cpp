/// Fast Way of Doing this......
#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream obj("Fast.txt");

    obj << "Roses are Red , Violets are Blue , I L... Y..!";
    obj.close();


    return 0;
}

