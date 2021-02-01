#include<iostream>

using namespace std;

int main(){
    int sum = 0;
    for(int i = 16; i!=0 ; i/=2 ){
        cout<<i<<endl;
        sum += i;
    }

    cout<<sum;

    return 0;
}
