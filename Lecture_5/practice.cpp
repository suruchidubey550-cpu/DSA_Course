#include <iostream>
using namespace std;

//1.
// void greet(){
//     cout << "Hello, C++!";
// }

//2.
// int add(int a , int b){
//     return a+b;
// }

//3.
// int square(int n){
//     return n*n;
// }

//4.
// bool isEven(int n){
//     if(n % 2 == 0){
//         return true;
//     }
//     return false;
// }

// //5.
// int maximum(int a, int b){
//     if(a> b){
//         return a;
//     }else{
//         return b;
//     }
// }

//6. Positive , negative or zero
//  int posNegZero(int n){
// if(n > 0){
//     cout << "Positive"<< endl;
//     return n;
// }

// else if(n < 0){
// cout << "Negative" << endl;
// return n;
//       }
// else {
//     cout << "Zero"<< endl;
//     return n;
//       }
//  }

//7. Maximum of three numbers 
// int largestOfThree(int a, int b, int c){
//     if(a>b && a> c){
//         return a;
//     }
//     else if(b> a && b > c){
//         return b;
//     }
//     else{
//         return c;
//     }
// }

// //8.Calculate Factorial
// int factorial(int n){
//     int fact = 1;
//     for(int i = 1; i < n+1; i++){
//         fact *= i;
//     }
//     return fact;
// }

//9.Check prime number
// bool isPrime(int n){
//     for(int i = 2; i < n; i++){
//         if(n % i == 0){
//             return false;
//         }
//     }
//     return true;
// }

//10. Print multiplication Table
// void table(int n){
//     for(int i = 1; i < 11; i++){
// cout << n * i << endl;;
//     }

// }

//11. Sum of digits
// int sumOfDig(int n){
//     int digSum = 0;
//   while(n > 0){
//     int lastDig = n % 10;

//     digSum += lastDig;
//     n = n /10;
//   }
// return digSum;
// }

//12. Reverse a number
// int reverseNum(int n){
//           int rev = 0;
//     while(n > 0){
// int last = n % 10;
//      rev = rev * 10 + last;
//     n = n/10;
//     }
//     return rev;
// }

/*
| Round |  `n` | `digit = n % 10` | `rev = rev*10 + digit` | New `n` |
| ----- | ---- | ---------------- | ---------------------- | ------- |
| 1     | 1234 |                4 |           `0×10+4 = 4` |     123 |
| 2     |  123 |                3 |          `4×10+3 = 43` |      12 |
| 3     |   12 |                2 |        `43×10+2 = 432` |       1 |
| 4     |    1 |                1 |      `432×10+1 = 4321` |       0 |


*/

//13. Count digit
// void countDig(int n){
//     int count = 0;
//     while(n > 0){
//         n = n/ 10;
//         count++;
//     }
//     cout << count;
// }

//14. power of a number
int powOfNum(int n, int p){
    int pow = 1;

    while(p > 0){
        pow = pow * n;
        p--;
    }
    return pow;
}

int main(){

//greet();
// cout << "Sum = " << add(4, 5)<< endl;
// cout << "Square = " << square(4)<< endl;
// cout << isEven(5)<< endl;
// cout << boolalpha << isEven(5) << endl;

// cout << maximum(3, 4) << endl;

//cout<< posNegZero(4);
// cout << largestOfThree(3, 4, 8);

// cout << factorial(5)<< endl;

// cout << boolalpha<< isPrime(7) << endl;
// table(6);

// cout << sumOfDig(12345) << endl;

// cout << reverseNum(1234) << endl;
// countDig(1234);

cout << powOfNum(2, 5) << endl;
    return 0;
}