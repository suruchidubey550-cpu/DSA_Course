#include <iostream>
using namespace std;

int main(){
//     int arr[5] = {99, 100, 54, 36, 88};
//     arr[1] = 134;
// double price[] = {99.99, 100.50, 54.25, 36.75, 88.00};
// cout << "The first element of the array is: " << arr[0] << endl;
// cout << "The second element of the array is: " << arr[1] << endl;

// //0 to size -1
// cout << arr[-1] << endl;
// cout << arr[5] << endl; // In botth of these cases output is garbage value because we are trying to access the index which is not present in the array.

//Loops in arrays ----> 0 to size - 1
// int marks[5] = {99, 100, 54, 36, 88};
//int size = 5;
// int marks[size];

// for(int i = 0; i < size; i++){
//     cout << "Enter the marks of student " << i + 1 << ": ";
//     cin >> marks[i];
// }
// // cout << sizeof(marks) << endl;
// // cout << sizeof(marks)/sizeof(int) << endl;

// for(int i = 0; i <size ; i++){
//     cout <<  marks[i] << endl;
// }


// //Finding smallest value in array
// int smallest = INT_MAX;
// int value[6] = {5, 15, 22, 1, -15, 24};
// for(int i = 0; i < 6; i++){
    // if(value[i] < smallest){
    //     smallest = value[i];
    // }

    //Instead of using if statement we can also use the min function to find the smallest value in the array.
//     smallest = min(smallest, value[i]);
// }
// cout << "The smallest value in the array is: " << smallest << endl;


// //Finding largest value in array
// int largest = INT_MIN;
// int nums[6] = {5, 15, 22, 1, -15, 24};
// for(int i = 0; i < 6; i++){
//     if(nums[i] > largest){
//         largest = nums[i];
//     }
// //Instead of using if statement we can also use the max function to find the largest value in the array.
// largest = max(largest, nums[i]);
// // }
// cout << "The largest value in the array is: " << largest << endl;

// //printing the index of smallest value
// int smallestIndex = 0;
// int smallest = INT_MAX;
// int value[6] = {5, 15, 22, 1, -15, 24};
// for(int i = 0; i < 6; i++){
//     if(value[i] < smallest){
//         smallest = value[i];
//         smallestIndex = i;
//     }

//    // Instead of using if statement we can also use the min function to find the smallest value in the array.
//    // smallest = min(smallest, value[i]);
// }
// cout << "The smallest value in the array is: " << smallest << endl;
// cout << "The index of the smallest value in the array is: " << smallestIndex << endl;

//Printing the index of largest value
int largestIndex = 0;
int largest = INT_MIN;
int nums[6] = {5, 15, 22, 1, -15, 24};
for(int i = 0; i < 6; i++){
    if(nums[i] > largest){
        largest = nums[i];
        largestIndex = i;
    }

   // Instead of using if statement we can also use the max function to find the largest value in the array.
   // largest = max(largest, nums[i]);
}
cout << "The largest value in the array is: " << largest << endl;
cout << "The index of the largest value in the array is: " << largestIndex << endl;
return 0;
}   
























