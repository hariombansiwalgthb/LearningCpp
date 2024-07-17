#include <iostream>
#include "headers.h"
#include <coroutine>
using namespace std;

generator<int> produce_nums() {
     int i{-1};
     while(true) {
          i++;
          cout<<"generated"<< i <<endl;
          co_yield i;
     }
}
void print_nums(int n) {
     int count{1};
     for(auto const& num: produce_nums()) {
          cout<<"consumed"<<num<<endl;
          cout<<num<<endl;
          if(++count>n) break;
     }
}

int main() {
     print_nums(4);
     return 0;
}
