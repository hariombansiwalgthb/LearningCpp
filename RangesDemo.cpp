#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <array>
#include <cassert>
#include <chrono>
#include <list>
#include <forward_list>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <functional>
#include <numeric>
#include <ranges>
using namespace std;

int main() {
     vector<int> vec{7,8,6,2,9,3,4,0,5,1};
     std::ranges::sort(vec);
     std::ranges::copy(vec, ostream_iterator<int>(cout,", "));

     struct PossibleValues{bool flag; int value;};
     std::vector<PossibleValues> values{{true,1},{false,2},{true,3},{false,4},{true,5},{false,6}};
     auto flagged = [](PossibleValues pv){return pv.flag;};
     auto members = values
     |std::views::filter(flagged)
     |std::views::transform([](PossibleValues pv){return pv.value;})
     |std::views::reverse
     //|std::views::drop(2)
     ;

     cout<<endl;

     std::ranges::copy(members,ostream_iterator<int>(cout, " "));
     return 0;
}
