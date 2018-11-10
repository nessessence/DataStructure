#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <vector>

template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last)
{
    std::vector<T> ins (first, last) ;
    std::vector<T> left (begin(),position) ;
    std::vector<T> right (position, end()) ;
    CP::vector<T> result ;
    for(auto x : left)
        result.push_back(x) ;
    for(auto x : ins)
        result.push_back(x) ;
    for(auto x : right)
        result.push_back(x) ;
    std::swap(*this,result) ;
}

#endif
