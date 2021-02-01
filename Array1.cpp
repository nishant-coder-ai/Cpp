#include<iostream>

using namespace std;

int main(){
    int arr[2][3] = {{1,2,3},
                     {4,5,6} };


    cout<<arr[0][0]<<endl; ///1
    cout<<arr[0][1]<<endl; ///2
    cout<<arr[0][2]<<endl; ///3
    cout<<arr[1][0]<<endl; ///4
    cout<<arr[1][1]<<endl; ///5
    cout<<arr[1][2]<<endl; ///6

    cout<<"-------------------------"<<endl;

    for(int row = 0 ; row < 2 ; row++){
        for(int column = 0 ; column < 3 ; column++){
            cout<<arr[row][column]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
