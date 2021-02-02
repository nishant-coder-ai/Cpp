#include<iostream>

using namespace std;

template<class nana>

nana addnum(nana num1 , nana num2){
    return num1+num2;
}

int main(){
    int x = 89;
    int y =7;
    cout<<addnum(x, y);       /// but you can't have one is integer and another one is double or different.


}
