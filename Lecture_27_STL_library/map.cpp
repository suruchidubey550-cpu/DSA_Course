#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main(){

  //MAP
// map<string, int> m;
// m["TV"] = 100;
// m["Laptop"] = 100;
// m["Headphone"] = 50;
// m["Tablet"] = 120;
// m["Watch"] = 50;

// m.emplace("tv", 100);
// m.emplace("tv", 100);
// m.emplace("tv", 100);
// m.emplace("tv", 100); // tv 100

// // m.insert({"camera", 25});
// m.emplace("camera", 25);
// m.erase("TV");

// for(auto p : m){
//     cout << p.first << " " << p.second << endl;
// }

// if(m.find("camera") != m.end()){
//     cout << "found\n";
// }else{
//     cout << "not found\n";
// }

// cout << "count= " << m.count("Laptop") << endl;
// cout << m["Laptop"] << endl;
/*---------------------------------------------------*/

//MULTI MAP
// multimap<string, int> m;
 
// m.emplace("tv", 100); //tv 100
// m.emplace("tv", 100); //tv 100
// m.emplace("tv", 100); //tv 100
// m.emplace("tv", 100); //tv 100

// //m.erase("tv");
// m.erase(m.find("tv"));

// for(auto p : m){
//     cout << p.first << " " << p.second << endl;
// }

/*---------------------------------------------------*/

//UNORDERED MAP
unordered_map<string, int> m;\

// m.emplace("tv", 100); 
// m.emplace("tv", 100); 
// m.emplace("tv", 100);
// m.emplace("tv", 100);

m.emplace("tv", 100); 
m.emplace("laptop", 100); 
m.emplace("fridge", 100);
m.emplace("watch", 100);

for(auto p : m){
    cout << p.first << " " << p.second << endl;
}
    return 0;
}