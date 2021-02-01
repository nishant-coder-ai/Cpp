#include<iostream>

using namespace std;

int main(){

   /* int *ptr;
    int arr[6];
    cout<<arr<<endl;
    cout<<&arr<<endl;
    ptr = arr;
    int *ptr; */
    int* ptr, arr[5] = {1,2,3,4,5};
    ptr = arr;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
   /// ptr + 1 is equivalent to &arr[1];
   /// ptr + 2 is equivalent to &arr[2];
   /// ptr + 3 is equivalent to &arr[3];
   /// ptr + 4 is equivalent to &arr[4];
    return 0;
}
