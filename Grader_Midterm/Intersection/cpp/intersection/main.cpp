#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1 , v2 , result ;
    int n , m , x ;
    cin >> n >> m ;
    for(int i = 0 ; i< n ; i++){
        cin >> x ;
        v1.push_back(x) ;
    }
    for(int i = 0 ; i<m ; i++){
        cin >> x ;
        v2.push_back(x);
    }
    sort(v1.begin() , v1.end()) ;
    sort(v2.begin() , v2.end()) ;
    if(v1.size() > v2.size()) swap(v1,v2) ;
    for(auto x : v1){
        for(auto y : v2){
            if(y>x) break;
            if(y==x  && find(result.begin() , result.end() , x ) == result.end() ) result.push_back(x) ;
        }
    }
    for(auto e :result ) cout << e << " " ;

    return 0;
}
