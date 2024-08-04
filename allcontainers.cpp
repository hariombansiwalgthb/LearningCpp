#include <iostream>
//sequence containers
#include<array>
#include <vector>
#include<list>
#include<deque>
//Associative containers// Binary Tree
#include<set>
#include<map>
//Unordered_containers//Hash Table
#include<unordered_set>
#include<unordered_map>
//Algorithms
#include<algorithm>
//Others
#include <forward_list>
#include <numeric>
#include<functional>
#include <ostream>
#include <queue>
#include<ranges>
#include <stack>

using namespace  std;
class test1 {
public:
    int x{ 0 };
    void printRandomShit() { cout << "printing random shit" << endl; }
    void printDataMemberX() { cout << "printing data member x = " << x << endl; }
};

//class test
//{
//public:
//    int a;
//
//    friend std::ostream& operator<<(std::ostream& os, const test& obj)
//    {
//        return os << "a: " << obj.a;
//    }
//};
void takeArray(std::array<int, 5>& array) {}

int main() {
    test1* testObj{ nullptr };
    testObj->printRandomShit();
    testObj->printDataMemberX();


 //   //   //--------------------------------Vectors--------------------------------//
 //   std::map<int, std::string> mymap = {
 //        {1, "one"},
 //        {2, "two"},
 //        {3, "three"},
 //        {4, "four"},
 //        {5, "five"}
 //   };

 //   // Pre C++20 way to print elements of a map
 //   //std::copy(mymap.begin(), mymap.end(), std::ostream_iterator<std::pair<const int, std::string>>(std::cout, "\n"));
 //   //--------------------------------------------------------------------------------------------------------------------------------------
 //   queue<int> myvec{ 0,1,2,3,4,5,6,7,8,9 };
 //   std::copy(myvec.begin(), myvec.end(), std::ostream_iterator<int>(std::cout, " "));



 //   //vector<int>::iterator itrBegin = myvec.begin();
 //   //vector<int>::iterator itrEnd = myvec.end();

 //   /*sort(myvec.begin(), myvec.end());
 //   copy(myvec.begin(), myvec.end(), std::ostream_iterator<int>(std::cout, " "));
 //   
 //   cout << endl;
 //   cout << "Size :"<<myvec.size()<<endl;
 //   cout << "Max Size :" << myvec.max_size() << endl;
 //   cout << "capacity :" << myvec.capacity() << endl;
 //   myvec.clear();
 //   cout << "Size :" << myvec.size() << endl;
 //   cout << "Max Size :" << myvec.max_size() << endl;
 //   cout << "capacity :" << myvec.capacity() << endl;
 //   */

 //   //   //--------------------------------Array--------------------------------//

 //       //std::array<int, 5> iArr{ 1,2,3,4,5 };
 //       //std::array<int, 6> iArr2{ 1,2,3,4,5,6 };
 //       ////print the std::array<int, 5>
 //       //std::copy(iArr.begin(), iArr.end(), std::ostream_iterator<int>(std::cout, " "));
 //       ////pass both iArr and iArr2 to function.
 //       //takeArray(iArr);
 //       ////takeArray(iArr2);
 //       //std::array<int, 0> iArr3{};
 //       //iArr3.front();

 //   //   //--------------------------------List--------------------------------//
 ////   std::list<int> myList{ 1,2,3,4,5,6,7,8,9 };
 ////   //myList.remove(7); //member function : O(n)
 ////   //auto listIter = std::remove(myList.begin(), myList.end(), 7); //Algorithm function : O(n)
 ////   // Both looks same from the above but
 ////   /*Member function is very efficient it manipulates the pointers i.e. makes 6's fwd to point to 8 and 8's backward to point to 6 easy removal done.
 ////    *i.e. O(n) find time and O(1) remove time.
 ////    *Algorithm function : is whole lot messier it copies 8 to 7, then 9 to 8, O(n) copying again 
 ////    *i.e. O(n) find time and O(n) copying time. worst part is the last item from which copy was done
 ////    *is still in the container you need to do 1 more step of erase to actually remove the last element form list.
 ////    */
 ////    //std::copy(listIter, myList.end(), std::ostream_iterator<int>(std::cout, " "));
 //   //myList.erase(std::remove(myList.begin(), myList.end(), 7), myList.end());
 ////   std::copy(myList.begin(), myList.end(), std::ostream_iterator<int>(std::cout, " "));
 //   //// consider another example of sort
 ////   //myList.sort(); //Member function Sort ? Guess the complexity
 ////   //std::sort(myList.begin(), myList.end());
 ////   //std::copy(myList.begin(), myList.end(), std::ostream_iterator<int>(std::cout, " "));

 //   //   //--------------------------------UnorderedSet--------------------------------//
 ////   std::unordered_set<int> mySet{ 7,8,9,2,1,5,0,4 };
 ////   auto setIter = mySet.find(5);  //Member Function : O(1)
 ////   auto setIter2 = std::find(mySet.cbegin(), mySet.cend(), 5); //Algorithm's Function : O(n)
 ////   std::cout << *setIter << *setIter2 << std::endl;
 ////   //--------------------------------Map--------------------------------//
 ////   std::map<int, int> myMap{ {1,10},{2,20},{3,30},{4,40},{5,50},{6,60} };
 ////   auto mapIter1 = myMap.find(4); //Member Function : O(log(n))
 ////   auto mapIter2 = std::find(myMap.cbegin(), myMap.cend(), std::make_pair(4, 40)); // Algorithm's Function O(n)
 //
 //   //--------------------------------Unordered Set--------------------------------//
 //   

    return 0;
}
