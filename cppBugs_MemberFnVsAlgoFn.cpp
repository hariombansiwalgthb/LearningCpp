#include <iostream>
#include <vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>

int main() {
    //--------------------------------UnorderedSet--------------------------------//
    std::unordered_set<int> mySet{ 7,8,9,2,1,5,0,4 };
    auto setIter = mySet.find(5);  //Member Function : O(1)
    auto setIter2 = std::find(mySet.cbegin(), mySet.cend(), 5); //Algorithm's Function : O(n)
    std::cout << *setIter << *setIter2 << std::endl;
    //--------------------------------Map--------------------------------//
    std::map<int, int> myMap{ {1,10},{2,20},{3,30},{4,40},{5,50},{6,60} };
    auto mapIter1 = myMap.find(4); //Member Function : O(log(n))
    auto mapIter2 = std::find(myMap.cbegin(), myMap.cend(), std::make_pair(4, 40)); // Algorithm's Function O(n)
    //--------------------------------List--------------------------------//
    std::list<int> myList{ 1,2,3,4,5,6,7,8,9 };
    //myList.remove(7); //member function : O(n)
    //auto listIter = std::remove(myList.begin(), myList.end(), 7); //Algorithm function : O(n)
    // Both looks same from the above but
    /*Member function is very efficient it manipulates the pointers i.e. makes 6's fwd to point to 8 and 8's backward to point to 6 easy removal done.
     *i.e. O(n) find time and O(1) remove time.
     *Algorithm function : is whole lot messier it copies 8 to 7, then 9 to 8, O(n) copying again 
     *i.e. O(n) find time and O(n) copying time. worst part is the last item from which copy was done
     *is still in the container you need to do 1 more step of erase to actually remove the last element form list.
     */
    //myList.erase(listIter, myList.end());
    // consider another example of sort
    //myList.sort(); //Member function Sort ? Guess the complexity
    std::sort(myList.begin(), myList.end());
    std::copy(myList.begin(), myList.end(), std::ostream_iterator<int>(std::cout, " "));

    //--------------------------------Unordered Set--------------------------------//

    return 0;
}
