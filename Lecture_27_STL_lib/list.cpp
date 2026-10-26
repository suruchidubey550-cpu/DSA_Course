#include <iostream>
//#include <vector>
#include <list>
using namespace std;

int main(){
// list<int> l;

//Initialize a list
list<int> l = {1, 2, 3, 4, 5};

// //l.push_back(1);
// l.emplace_back(1);

l.push_back(2);
l.emplace_front(3);
//l.push_front(3);
l.push_front(5);
l.pop_back();//2
l.pop_front(); //5

for(int val : l){
    cout << val << " ";
}
cout << endl;

// cout << l[2] << endl;//error because list index cannot be accessed randomly
    return 0;
}