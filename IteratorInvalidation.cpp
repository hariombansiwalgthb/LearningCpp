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
     vector<int> vec{1,2,3,4};
     int* iPtr =&vec[0];
     //vec.insert(vec.begin(),0);
     cout<<*iPtr<<endl;
     return 0;
}
