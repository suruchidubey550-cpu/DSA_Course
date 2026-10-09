#include <iostream>
using namespace std;
int main(){
// int n = 4;
// for(int i = 1; i <= n; i++){
//    // int m = 4;
//     for(int j = 1 ; j <= n; j++){
//         cout << j ;
//     }
//     cout << endl;
// }

// int n = 5;
// for(int i = 1; i<= n; i++){
//     for(int j = 1 ; j <= n ; j++){
//         cout << "*";
//     }
//     cout << endl;
// }

// int n = 6;
// for(int i = 0; i <= n-1; i++){
//     char ch = 'A';
//     for(int j = 0; j<= n-1; j++){
//         cout << ch << " ";
//         ch += 1;
//     }
//     cout << endl;
//}

// int n = 3;
//  int num = 1;
// for(int i = 0; i < n; i++){
//     for(int j = 0; j < n; j++){
//         cout << num << " ";
//         num++;
//     }
//     cout << endl;
// }


// int n = 3;
// char ch = 'A';
// for(int i = 0; i < n; i++){
//     for(int j = 0; j < n; j++){
//         cout << ch << " ";
//         ch++;
//     }
//     cout << endl;
// }


// int n = 4;
// for(int i = 0; i < n; i++){
//     for(int j = 0; j < i+1; j++){ 
//         /* i = 0 * ----> i + 1
//            i = 1 ** ---> i + 1
//            i = 2 *** ----> ,,
//            i = 3 **** ----> ,,
//         */
//         cout << "*" << " ";
        
//     }
    //cout << endl;
//}


// int n = 4;
// for(int i = 0; i < n; i++){
//     for(int j = 0; j < i+1; j++){ 
//         /* i = 0 1 ----> i + 1
//            i = 1 22 ---> i + 1
//            i = 2 333 ----> ,,
//            i = 3 4444 ----> ,,
//         */
//         cout << i+1 << " ";
//     }
//     cout << endl;
// }

// int n = 4;
// for(int i = 0; i < n; i++){
//     for(int j = 0; j < i+ 1; j++){ 
//         /* A + 0 = A, A + 1 = B, etc */
//         cout << char('A'+ i) << ' ' ;   
//     }
//      cout << endl;
// // }

// int n = 5;
// for(int i = 0; i < n; i++){
//     for(int j = 1; j<=i+1; j++){
//  cout << j ;
//     }
//     cout << endl;
// }

// int n = 4;
// for(int i = 0; i < n ; i++){
//     for(int j = i+1; j > 0; j--){
//         cout << j;
//     }
//     cout << endl;
// }


// int n = 5;
// for(int i = 0; i < n ; i++){
//     for(int j = 1; j < i+1; j++){
//         cout << char('A'+(i-j));
//     }
//     cout << endl;
// }

// int n = 4;
// int num = 1;
// for(int i = 0; i < n ; i++){
//     for(int j = 0; j < i+1; j++){
//         cout << num;
//     num+=1;
//     }
//     cout << endl;
// }


// int n = 4;
//  char ch = 'A';
// for(int i = 0; i < n ; i++){
//     for(int j = 0; j < i+1; j++){
//         cout << ch ;
//     ch+=1;
//     }
//     cout << endl;
// }

// int n = 4;
// for(int i = 0; i < n; i++){

//     //Space
//     for(int j = 0; j<i ; j++){ // i times spaces
//         cout << " ";
//           }

//     //nums 
//         for(int j = 0; j< n-i; j++){
//             cout << i+1;
//         }
//     cout << endl;
// }


// int n = 4;
// for(int i = 0; i < n; i++){

//     //Space
//     for(int j = 0; j<i ; j++){ // i times spaces
//         cout << " ";
//           }

//     //nums 
//         for(int j = 0; j< n-i; j++){
//             cout << char('A'+ i);
//         }
//     cout << endl;
// }



//int n = 4;
// for(int i = 0; i < n; i++){
 
//     //spaces: n-i-1
//         for(int j = 0; j< n-i-1; j++){
//             cout << " ";
//         }

//     //nums1: i+1 times
//         for(int j = 1; j<= i+1; j++){
//             cout << j;
//         }
         
//     //nums2: i times
//     for(int j = i; j > 0; j--){
//         cout << j;
//     }
//     cout << endl;
// }


int n = 4;

//top
for(int i = 0; i < n; i++){
    //outer spaces: n-i-1
        for(int j = 0; j< n-i-1; j++){
            cout << " ";
        }


 cout << "*";

 if(i != 0){
 //inner spaces : 2*i-1
        for(int j = 0; j < 2*i-1; j++){
            cout << " ";
        }
cout << "*";
    }
    cout << endl;
}
    return 0;
}
