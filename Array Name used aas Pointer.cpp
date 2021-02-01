#include <iostream>
using namespace std;

int main() {
    float arr[5];

   /// Insert data using pointer notation : int arr[2] = {10 , 20};
    ///                                     cout<<*(arr+1)<<endl;
    ///                                     Output : 20           if only*arr then output is 10;
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i) {

        // store input number in arr[i]
        cin >> *(arr + i) ;

    }
///Notice that we haven't declared a separate pointer variable,
/// but rather we are using the array name arr for the pointer notation.
///As we already know, the array name arr points to the first element of the array.
/// So, we can think of arr as acting like a pointer.
    // Display data using pointer notation
    cout << "Displaying data: " << endl;
    for (int i = 0; i < 5; ++i) {

        // display value of arr[i]
        cout << *(arr + i) << endl ;

    }

    return 0;
}
