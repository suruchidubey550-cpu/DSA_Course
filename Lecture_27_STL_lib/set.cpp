#include <iostream>
#include <set>
using namespace std;

int main(){
   set<int> s;

   s.insert(1);
   s.insert(2);
   s.insert(3);

   //s.insert(4);
//    s.insert(5);
//    s.insert(6);

/*   
if set has 4 then o/p is 4. 
if it has no 4 but just a greater number than 4 then o/p is the number.
and if the set has neither 4 nor a number greater than 4 then ths 
o/p is 0 or s.end()
*/

//    s.insert(1);
//    s.insert(2);
//    s.insert(3);
 
// cout << s.size() << endl;

cout << "lower bound = " << *(s.lower_bound(4)) << endl; // output is 0 or s.end() because 4 is not present in the set and there is no greater number than 4 in the set.

   for(auto val : s){
    cout << val << " ";
   }
   cout << endl;

    return 0;
}