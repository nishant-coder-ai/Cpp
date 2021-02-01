#include<iostream>

using namespace std;

void printarr(int thearr[], int sizeofarr){
    for(int x = 0; x<sizeofarr ; x++){
        cout<<thearr[x];

    }


}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    printarr(arr, 6);


    return 0;
}
