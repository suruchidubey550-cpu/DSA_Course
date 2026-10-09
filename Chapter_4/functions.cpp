#include <iostream>
using namespace std;

/*  Syntax of functions in c++
returnType printHello(){
    cout << "Hello";
}
    */
    //Function defintion   
// void printHello(){
//     cout << "hello\n";
// }
//  int printHello(){
//     cout << "hello\n";
//     return 3;
//  }

//Parameters 
/*returnType(Type p1, Type p2,.... ){
    do some work
}
*/

//Sum of two numbers 
// int sum(int a , int b){
//     int s = a+b;
//     return s;
// }

//Min of two numbers 
// int minOfTwo(int a , int b){ //parameters 
//     if(a<b){
//             return a;
//     }else {
//         return b;
//     }
// }

//Calculate sum of numbers from 1 to n
// int sumN(int n){
//     int sum = 0;
//     for(int i =0; i<=n; i++){
//         sum +=i;
//    }
//      return sum;
// }

// //calculate n factorial
// int calFact(int n){
//     int fact = 1;
//     for(int i = 1; i <= n; i++){
//         fact = fact * i;
//     }
//     return fact;
// }
 
//Pass by value
// int sum(int a , int b){
//     a = a+10;//15
//     b = b+10;//14
//      return a+b;//29
// }

//  void changeX(int x){
//     x = 2*x;
//     cout << "x = "<< x<< endl;
//   }

//Calculate sum of digits of a number
// int sumOfDigits(int num){
// int digitSum = 0;
// while(num > 0){
//     int lastDig = num % 10;
//     num = num/10; 
     
//     digitSum += lastDig;
// }
// return digitSum;
// }

// int binoFactCoefficient(int n){
//     int fact = 1;
//     for(int i = 1; i<= n; i++){
//         fact *= i;
//     }
//     return fact;
// }
// int nCr(int n , int r){
// int fact_n = binoFactCoefficient(n);
// int fact_r = binoFactCoefficient(r);
// int fact_nmr = binoFactCoefficient(n-r);

// return fact_n / (fact_r * fact_nmr);
// }

//Prime number 
// int primeNum(int n){
//     for(int i = 2; i < n; i++){
//        if(n%i == 0)
//          return 0;
//     }
//     return n;
// }

bool isPrimeNum(int n){
    if (n < 2){
        return false;
    }
    for(int i = 2; i < n; i++){
       if(n%i == 0)
             return false;
    }
    return true;
}

//nth Fibonacci series
// void fibonacci(int n){
//     int a = 0, b = 1,c;
//     for(int i = 1; i <= n; i++){
//         cout << a << " ";
//         c = a+b;
//         a = b;
//         b = c;
//     }
// }
int main(){
    //Function Call
    // printHello();
    // int val = printHello();
    // cout << "val = " << val <<endl;
   // cout << sum(10,5);
// cout << "minimum = " << minOfTwo(4,3) << endl; //Arguments---> actual values

// cout << sumN(5)<< endl;

// cout << calFact(5)<< endl;
// int x = 4;
// // int y = 5;
// int a = 4;
// int b = 5;
// cout << sum(a, b)<< endl;
// cout << a << endl;
// cout << b << endl;
// int x = 5;
// changeX(x);
//  cout << "x = "<< x<< endl;

// cout << "Sum of digits = "<< sumOfDigits(2356)<< endl;

// int n = 8, r = 2;
//  cout << nCr(n, r)<< endl;
//  int n ;
//  cout << "Enter n: "<< endl;
//  cin>> n; 
//  for(int i = 1; i <=n; i++){
//     if(isPrimeNum(i))
//     cout<< i << " ";
//  }
cout << isPrimeNum(7) << endl;

// int n ;
// cout << "Enter number of terms: ";
// cin>> n;
// fibonacci(n);
    return 0;
}