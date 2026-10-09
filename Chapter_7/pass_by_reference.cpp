#include <iostream>
using namespace std;

void changeArr(int arr[], int size){
    cout<< "Inside the function, before modification: ";

    for(int i = 0; i < size; i++){
        cout << arr[i] << " "; // Printing the original array
    }
    cout << endl;
    for(int i = 0; i < size; i++){
        arr[i] = 2*arr[i]; // Modifying the original array by doubling each element
    }
}


int main(){ 

    //Pass by reference
    //Pass by reference is a method of passing arguments to a function where the function receives a reference (or address) to the original variable,
    // rather than a copy of its value. This allows the function to modify the original variable directly.

    int arr[] = {1, 2, 3};
    changeArr(arr, 3); // Passing the array to the function

    cout << "Inside the main function, after modification: ";
    for(int i = 0; i < 3; i++){
    // Printing the modified array
        cout << arr[i] << " ";
    }
    cout << endl;
     return 0;
} 
 