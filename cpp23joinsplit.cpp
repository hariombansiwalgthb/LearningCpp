#include<ranges>
#include<vector>
#include<string>
#include<string_view>
#include<iostream>
using namespace std;

int main() {
    //let's join some strings 
    vector<string> randomStrings = { "R2", "D2", "Is", "Robot" };
    auto joinedRandomStrings = std::views::join(randomStrings);
    string str = joinedRandomStrings | ranges::to<string>();
    cout << str << endl;

    //join string with space or any delimiter, space is the delimiter i have used here
    auto joinRandomStringsWithspace = std::views::join_with(randomStrings, " ");
    str = joinRandomStringsWithspace | ranges::to<string>();
    cout << str << endl;

    //let's split some strings
    string largeParagraph = "Imagine this is a large paragraph and I want to split this with something that cpp library can provide off the shelf";

    auto wordTokens = std::views::split(largeParagraph, ' ');
    for (const auto& word :  wordTokens)
    {
        cout << string_view(word) << endl;
    }
    return 0;
}
