#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int,string> m ;
    m.insert({1,"neung"}) ;
    for(auto p : m) cout<< p.first << " : " << p.second ;
    return 0;
}
