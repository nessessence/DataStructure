#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <set>

template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
    std::set<int> s ;
    CP::vector<int> result ;
    for(auto x : pos) s.insert(x) ;
    for(int i = 0 ; i < size() ; i++){
        if(s.count(i) == 0) result.push_back(this->at(i)) ;
    }
    std::swap(*this , result ) ;

}

#endif
