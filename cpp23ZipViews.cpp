#include<ranges>
#include<vector>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    vector<int> employeeId {1, 2, 3, 4, 5};
    vector<string> employeeLocation {"INDIA", "USA", "UAE", "JAPAN", "AUS", };
    auto employeeWithLocationView =std::views::zip( employeeId, employeeLocation );
    for(const pair<int, string>& elem : employeeWithLocationView)
    {
        cout<<"employeeId: " << elem.first << ", employeeLocation: " << elem.second << endl;
    }
    //or use structured bindings
    cout<<endl;
    for(const auto& [empId, empLoc] : std::views::zip(employeeId, employeeLocation ))
    {
        cout<<"employeeId: " << empId << ", employeeLocation: " << empLoc << endl;
    }
    return 0;
}
