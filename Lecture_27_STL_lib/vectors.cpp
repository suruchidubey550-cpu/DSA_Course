/*
C++ STL ----> Standard Template Library

*/

//VECTORS

#include <iostream>
#include <vector>
using namespace std;

int main(){

// vector <int> vec; //0
// vec.push_back(1);
// vec.push_back(2);
// vec.push_back(3);
// vec.push_back(4);
// vec.push_back(5);
// vec.emplace_back(6);
// vec.pop_back();
// cout << vec.at(3) << endl;


// for(int val : vec){
//     cout << val << " ";
// }
// cout << endl;
 
// cout << "val at idx 3 is "<< vec[3] << " or "<< vec.at(3) << endl;
// cout << "Front val " << vec.front() << endl;
// cout << "Back val " << vec.back() << endl;

// cout << vec.size() << endl;
// cout << vec.capacity() << endl;

//vec.pop_back();

//vector<int> vec(3, 10); //Dynamic programming - tabulation DP[][]
 //vector<int> vec1 = {1, 2, 3, 4, 5};
 //vector<int> vec2(vec1);
// for(int val : vec2){
//     cout << val << " ";
// }

 //vector<int> vec = {1, 2, 3, 4, 5};
//vec.erase(vec.begin());
//vec.erase(vec.begin() + 2);
// vec.erase(vec.begin() + 1, vec.begin() + 3);

// for(int val : vec){
//     cout << val << " ";
// }
// cout << endl;

//vec.insert(vec.begin() + 2, 100);
// vec.clear();
// for(int val : vec){
//     cout << val << " ";
// }
// cout << endl;
// cout << "size : " << vec.size() << endl;
// cout << "capacity : "<< vec.capacity() << endl;
// cout << "Is empty : " << vec.empty() << endl;

//ITERATORS in VECTORS
//  vector<int> vec = {1, 2, 3, 4, 5};

//cout << "vec.begin : " << *(vec.begin()) << endl;
//cout << "vec.end : " << *(vec.end()) << endl;

vector<int> vec = {1, 2, 3, 4, 5};

// vector<int>::iterator it;

// for(it = vec.begin(); it!=vec.end(); it++){
//     cout << *(it) << " ";
// }
// cout << endl;

vector<int>::reverse_iterator it; //instead of this line you can only writre auto in for loop
for(auto it = vec.rbegin(); it!=vec.rend(); it++){
    cout << *(it) << " ";
}
cout << endl;

    return 0;
}