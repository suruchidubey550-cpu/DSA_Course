#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if (arr[i] == target){
            return i; // Return the index of the target element if found
        }
    }
    return -1; // Return -1 if the target element is not found
}
int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    //int size = sizeof(arr)/sizeof(int);
    int size = 7;
    int target = 8;
cout << linearSearch(arr, size, target) << endl;

    //int index = linearSearch(arr, size, target);

    // if(index != -1){
    //     cout << "Element found at index: " << index << endl;
    // }
    // else{
    //     cout << "Element not found" << endl;
    // }
    return 0;
}