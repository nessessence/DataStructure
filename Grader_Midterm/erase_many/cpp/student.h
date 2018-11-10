#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <set>

template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
    std::set<T> s ;   // set is good for search by value
    vector<T> result ;
    for(auto e : pos) s.insert(e) ;
    for(int i = 0 ; i<size() ; i++){
        if(s.count(i) == 0) {  // use set to check
            result.push_back(this->at(i)) ;
        }
    }
    std::swap(*this , result) ;
}

#endif
//#ifndef __STUDENT_H_
//#define __STUDENT_H_
//#include <set>
//using namespace std ;
//template <typename T>
//void CP::vector<T>::erase_many(const std::vector<int> &pos) {
//    CP::vector<T> temp ;
//    set<int> check ;
//    for(auto x : pos) check.insert(x) ;
//    for(int i = 0 ; i<this->size() ; i++){
//        if(check.count(i) != 1) temp.push_back(this->at(i) );
//    }
//    *this = temp;
//}
//
//#endif
