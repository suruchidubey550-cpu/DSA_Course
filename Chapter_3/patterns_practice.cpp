#include <iostream>
using namespace std;

int main(){

//level1: Basic patterns
// //Solid Square
// int n = 5;
// for(int i = 0; i < n; i++){
//     for(int j = 0; j < n; j++){
//         cout << "*";
//     }
//     cout << endl;
// }

//Right Triangle

// int n = 5;
// for(int i=0; i<n; i++){
//     for(int j=0; j<i+1; j++){
//         cout << "*";
//     }
//     cout << endl;
// }

//Inverted right triangle
// int n = 5;
// for(int i = 0; i < n; i++){
//     for(int j = 0; j < n-i; j++){
//         cout << "*";
//     }
//     cout << endl;
// }
 
//Number triangle
// int n = 5;
// for(int i = 0; i < n; i++){
//     for(int j = 1; j < i+1; j++){
//         cout << j;
//     }
//     cout << endl;
// }

//repeated number triangle
// int n = 5;
// for(int i = 0; i < n; i++){
//     for(int j = 0; j < i+1; j++){
//         cout << i+1;
//     }
//     cout << endl;
// }

//Level2: Spaces + patterns 
//Right-Aligned Triangle
// int n = 5;
// for(int i =0; i < n ; i++){

//     //Spaces
//     for(int j = 0; j < n-i;j++){
//         cout << " ";
//     }

//     //stars 
//     for(int j = 0; j < i+1; j++){
//         cout << "*";
//     }
//     cout<< endl;
// }

//Inverted Right-Aligned Triangle
// int n = 5;
// for(int i =0; i < n ; i++){

//     //Spaces
//     for(int j = 0; j < i; j++){
//         cout << " ";
//     }
//      //Stars
//       for(int j = 0; j < n-i;j++){
//         cout << "*";
//     }
//     cout<< endl;
// }

//Pyramid
// int n = 5;
// for(int i =0; i < n ; i++){

//     //Spaces
//     for(int j = 0; j < n-i; j++){
//         cout << " ";
//     }
//      //Stars
//       for(int j = 0; j < i+1 ;j++){
//         cout << "*";
//     }
//     for(int j = 0; j < i; j++){
//         cout << "*";
//     }
//     cout<< endl;
// }

// //Inverted pyramid
// int n = 5;
// for(int i =0; i < n ; i++){

//     //Spaces
//     for(int j = 0; j < i; j++){
//         cout << " ";
//     }
//      //Stars
//       for(int j = 1; j < n-i ;j++){
//         cout << "*";
//     }
//      for(int j = 0; j < n-i; j++){
//          cout << "*";
//      }
//     cout<< endl;
// }

//Number pyramid

// int n = 6;
// for(int i =0; i < n ; i++){

//     //Spaces
//     for(int j = 1; j < n-i; j++){
//         cout << " ";
//     }
//      //Stars
//       for(int j = 1; j < i+1 ;j++){
//         cout << j;
//     }
    
//      for(int j = 1; j < i; j++){
//          cout << i+j;

//      }
//     cout<< endl;
// }

//Level3: Interesting patterns

int n = 5;
int num = 1;
for(int i =0; i < n ; i++){
      for(int j=0; j<i+1; j++){
        cout << num <<" ";
        num+=1;
      }
    cout<< endl;
}
    return 0;
}