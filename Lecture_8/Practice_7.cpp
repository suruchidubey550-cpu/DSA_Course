#include <iostream>
using namespace std;

//     //Q.1 WAF to calculate sum and product of all numbers in an array
// int calculateSum(int arr[], int size){
//     int sum = 0;
//     for(int i = 0; i < size; i++){
//         sum += arr[i]; // Adding each element of the array to sum
//     }
//     return sum; // Returning the total sum
// }

// int calculateProduct(int arr[], int size){
//     int product = 1;
//     for(int i = 0; i < size; i++){
//         product *= arr[i]; // Multiplying each element of the array to product
//     }
//     return product; // Returning the total product
// }


//Q.2 WAF to swap max and min number of an array
//MAX
// int findMaxNum(int arr[], int size){
//     int maxNum = arr[0];
//     for(int i = 1; i < size; i++){
//         if(arr[i] > maxNum){
//             maxNum = arr[i]; // Updating maxNum if a larger number is found
//         }
//     }
//     return maxNum; // Returning the maximum number found
// }

// //MIN
// int findMinNum(int arr[], int size){
//     int minNum = arr[0];
//     for(int i = 1; i < size; i++){
//         if(arr[i] < minNum){
//             minNum = arr[i]; // Updating minNum if a smaller number is found
//         }
//     }
//     return minNum; // Returning the minimum number found
// }

//Q.3 WAF to print all the unique elements of an array
// void printUniqueElements(int arr[], int size){
//     cout << "Unique elements in the array are: ";
//     for(int i = 0; i < size; i++){
//         bool isUnique = true; // Assume the current element is unique
//         for(int j = 0; j < size; j++){
//             if(i != j && arr[i] == arr[j]){
//                 isUnique = false; // Found a duplicate, so it's not unique
//                 break;
//             }
//         }
//         if(isUnique){
//             cout << arr[i] << " "; // Print the unique element
//         }
//     }
//     cout << endl; // New line after printing all unique elements

// }

//Q.4 WAF to print intersection of two arrays
void intersectionOfArrays(int arr1[], int size1, int arr2[], int size2){
    cout << "Intersection of the two arrays is: ";
    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " "; // Print the common element
                break; // Move to the next element in arr1 after finding a match
            }
        }
    }
    cout << endl; // New line after printing all intersection elements
}


 int main(){


    int arr1[] = {1,2, 3, 4, 5};
    int size1 = 5;
    int arr2[] = {2, 6, 7, 9, 1, 3};
    int size2 = 6;
//     cout << calculateSum(arr, size) << endl;
//     cout << calculateProduct(arr, size) << endl;

    // cout << findMaxNum(arr, size) << endl;
    // cout << findMinNum(arr, size) << endl;
    // printUniqueElements(arr, size);
intersectionOfArrays(arr1, size1, arr2, size2);

    return 0;
}




