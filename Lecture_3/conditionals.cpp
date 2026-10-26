#include <iostream>
using namespace std;

int main(){
    // cout << "Hello DSA!"<<endl;
    // int age;
    // cout << "Enter your age "<< endl;
    // cin >> age;
    // if(age>=18){
    //     cout<<"eligible to vote\n";
    // }else{
    //     cout<<"not eligible to vote\n";
    // }

    // int num ;
    // cout<<"Enter number\n";
    // cin>>num;
    // if(num%2==0){
    //     cout<<"even";
    // }else{
    //     cout<<"Odd";
    // }

    // //Else - if
    // int marks;
    // cout << "Enter marks"<< endl;
    // cin >> marks;

    // if(marks>=90){
    //     cout<<"A\n";
    // }
    // else if(marks>=80 && marks<90){
    //     cout<<"B\n";
    // }
    // else if(marks<80 && marks>=30){
    //     cout<<"C\n";
    // }
    // else{
    //     cout<<"Fail";
    // // }
    // char ch;
    // cout<<"enter character\n";
    // cin>> ch;
    // if(ch>='a'&& ch<='z'){
    //     cout<<"Lowercase";
    // }else{
    //     cout<<"uppercase";
    // // }
    
    // if(ch>=65 && ch<=90){
    //     cout<<"uppercase\n";
    // }else{
    //     cout<<"lowercase\n";
    // }
//Ternary statement
// int n = -45;
// cout<<(n>=0? "positive" : "Negative")<<endl;

//LOOPS----> While loop
// int n = 20;
// int count = 1;
// while(count <= n){
//     cout << count << " ";
//     count++;
// }
//    cout<<endl;

//For loop
// int n = 5;
// int sum = 0;
// for(int i = 0; i<=n;i++){
//     sum = sum + i;
// }
// cout<< sum << endl;
  

//While loop 
// int n = 5;
// int sum = 0;
// int i = 1;
// while(i<=n){
//     sum = sum + i;
//     i++;
// }
// cout<<sum<<endl;

// //use of break
// int n = 50;
// int sum = 0;
// for(int i = 0;i<=n;i++){
//     sum += i;
//     if(i == 5){
//         break;
//     }
// }

// cout << "sum = " << sum << endl;

// //Sum of all odd numbers from 1 to N
// int N;
// cout << "Enter N :"<< endl;
// cin >> N;
// int oddSum = 0;
// for(int i = 1; i<=N; i++){
//     if(i % 2 != 0){
//          oddSum += i;
//     }
// }
//  cout << "OddSum = "<< oddSum << endl;

// int n ;
// cout << " Enter n" << endl;
// cin >> n;
// int i = 1;
// int sum = 0;
// while(i<=n){
//     if(i % 2 != 0 ){
//         sum += i;
//     }
//       i++;
// }
//  cout << "Sum = "<< sum << endl;


// int n ;
// cout << " Enter n" << endl;
// cin >> n;
// int evenSum = 0;
// for(int i = 0; i <= n; i++){
//     if(i % 2 == 0){
//         evenSum += i;
//     }
// }
//  cout << "Sum = "<< evenSum << endl;

// int n = 10;
// int i = 1;  

// do{
//     cout << i << " ";
//     i++;
// }while(i<=n);

// cout << endl;

// //Check if a number is prime or not
// int n;
// cout<<"Enter n"<< endl;
// cin >> n;
// bool isPrime = true;

// for(int i = 2; i <= n-1; i++){
//     if(n%i == 0){ // non prime 
//         isPrime = false;
//         break;
//     }
// }

// if(isPrime == true){
//     cout << "Prime no\n";
// }else{
//     cout << "Non prime no\n";
// }

// int n = 5;
// for(int i = 0 ; i < 5; i++ ){
//     cout << "*****" << endl;
// }
// int n;
// cout << "Enter n"<< " ";
// cin>> n;
// for(int i = 0; i <= n; i++){
//     cout<<"*";
// }
// cout << endl;
int n = 5;
for(int i  = 1; i<=n; i++){ // Outer loop ---> DEcides number of lines 
     int m = 10;
    for(int j =1; j <= m; j++){ /* 
       Inner loop ----> decides how many times you have to print star in one line 
        */ 
        
        cout<< "*";
    }
    cout << endl;
}
 return 0;
}