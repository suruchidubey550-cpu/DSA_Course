#include <iostream>
 #include <vector>
 #include <list>
#include <deque>
using namespace std;

int main(){
// deque<int> d = {1, 2, 3, 4, 5};

// for(int val : d){
//     cout << val << " ";
// }
// cout << endl;

// cout << d[2] << endl;

//PAIR
//pair<int, int>p = {1, 5};//pairs can be of different data types
// //pair<string, int> p = {"Suruchi", 5};
// pair<int, pair<char, int>>p = {1,{'a',3}}; //pair of pairs

// cout << p.first << endl;//1
// cout << p.second.first<< endl; //a
// cout << p.second.second<< endl;//3

vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {3, 4}};

// for(pair<int, int> p : vec){
//     cout << p.first << " " << p.second << endl;
// }
vec.push_back({4, 5}); //insert
vec.emplace_back(4, 5); //in-place objects create


for(auto p : vec){
    cout << p.first << " " << p.second << endl;
}
    return 0;
    
}