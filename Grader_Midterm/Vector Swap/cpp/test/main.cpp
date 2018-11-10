#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    map<vector<int>*,string> m ;
    vector<int> v  = {32423,423,42,34,234,23,423,423,4,32423,4,234,23,423,4,234,23,423,4,234,234,23,423,42,34,234,32,4} ;
    m.insert(make_pair(&v,"kuy"));
    for(auto p : m){
        for(auto e : (p.first)) cout << e << " " ;
    }
    return 0;
}
