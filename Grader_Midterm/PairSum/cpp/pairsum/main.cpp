#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int  n , m , x;
    cin >> n >>m;  //Dont forget pls
    vector<int> sum ;
    set<int> num ;
    for(int i = 0 ; i < n ; i++){
        cin >> x ;
        num.insert(x) ;

    }
    for(int i = 0 ; i < m ; i++){
        cin >> x ;
        sum.push_back(x) ;
    }
    for(auto e : sum) {
        bool check = true ;
        for(auto x : num){
            if (num.count(e-x) != 0){
                cout << "YES" <<endl;
                check = false ;
                break;
            }
        }
        if(check) cout <<"NO"<<endl;
    }
    return 0;
}
//#include <iostream>
//#include <vector>
//#include <set>
//using namespace std;
//
//int main()
//{
//    int  n , m , x ;
//    cin >> n >> m ;
//    set<int> snum ;
//    vector<int> num ,sum;
//    for(int i = 0 ; i< n ; i++) {
//        cin >> x ;
//        num.push_back(x) ;
//        snum.insert(x) ;
//    }
//    for(int i = 0 ; i< m ; i++) {
//        cin >> x ;
//        sum.push_back(x) ;
//    }
//
//    for(auto e : sum){
//        bool check = true ;
//        for(auto p : num ) {
//            if( snum.count(e-p) != 0 ){
//                cout << "YES" <<endl;
//                check = false ;
//                break;
//
//            }
