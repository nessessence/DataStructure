#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <vector>

template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
    vector<T> temp1 , temp2 , mid , result;
    for(auto it = begin() ; it != position ; it++) temp1.push_back(*it) ;
    for(auto it = position ; it != end() ; it++) temp2.push_back(*it) ;
    for(auto it = first ; it != last ; it ++) mid.push_back(*it) ;
    for(auto x : temp1) result.push_back(x) ;
    for(auto x : mid) result.push_back(x) ;
    for(auto x : temp2) result.push_back(x) ;
    std::swap(result , *this) ;

    }

#endif
