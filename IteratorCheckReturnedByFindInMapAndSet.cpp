#include <iostream>
#include <algorithm>
#include<vector>
#include<deque>
#include<array>
#include<list>
#include<forward_list>
#include<stack>
#include<queue>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<functional>
#include<numeric>

using namespace std;

int main() {
     map<int,int> mySet{{1,10},{2,20},{3,30},{4,40}};
     auto itr = mySet.find(5);
     //Never directly use or dereference the iterator like below
     cout<<(*itr).second<<endl;// this is UB because if element not found, it returns iterator to end()

     //You should check if returned itr by find != end before using it.
     if(auto itr= mySet.find(5); itr!= mySet.end()) {
          cout<<"Element found"<<endl;// do whatever you wanna do with iterator now
     }
     else {
          cout<<"Element not found"<<endl;// don't touch the iterator it points to end()
     }
     //or use contains which returns bool, if you just want to check the existence
     if(mySet.contains(5)) {
          cout<<"Element found";
     }
     else {
          cout<<"Element not found"<<endl;
     }

     return 0;
}
