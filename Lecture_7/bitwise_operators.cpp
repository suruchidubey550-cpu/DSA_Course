#include <iostream>
using namespace std;


// bool isPowerOfTwo(int n)
// {
//     if(n <= 0)
//         return false;
    
//     while(n % 2 == 0)
//     {
//         n = n / 2;
//     }
    
//     return true;
// }

int reverseInt(int dig){
    int rev = 0;
       while(dig > 0){
    int lastDig = dig % 10;
    rev = rev * 10 + lastDig;
    dig /= 10;
       }
 return rev;
}
int main(){
//     int a = 4, b = 8;
//     cout << (a & b) << endl;
//     cout << (a | b) << endl;
// cout << (a ^ b) << endl;
// cout << (4 << 1) << endl;
// cout << (10 << 2) << endl;
// cout << (10 >> 1) << endl;
// cout << (8 >> 2) << endl;

// cout << (6 & 10) << endl;
// cout << (6 | 10) << endl;
// cout << (6 ^ 10) << endl;
// cout << (10 << 2) << endl;
// cout << (10 >> 1) << endl;

// //Scope ----> Local and Global
// if(3 > 1){
//     int x = 10;
// }
// cout << x << endl;// ----> Gives error

//cout << sizeof(int) << endl;
// cout << sizeof(long long int) << endl;
// cout << sizeof(short int) << endl;
// cout << sizeof(signed int) << endl;
// unsigned int x = -10;
// cout << x << endl;
 
// cout << isPowerOfTwo(16) << endl;

cout << reverseInt(125) << endl;
    return 0;
}