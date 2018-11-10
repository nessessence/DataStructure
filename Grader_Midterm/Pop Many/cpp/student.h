#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <stack>

template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  if(K > size()) K = size() ;
  for(int i = 0 ; i < K ; i++) pop() ;
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
    if(K > size()) K = size() ;
    std::stack<int> result , temp ; // stack 1 time -> reverse ordering
    for(int i = 0 ; i < K ; i++) {
        temp.push(top()) ;
        pop() ;
    }
    while(!temp.empty()){
        result.push(temp.top()) ;
        temp.pop() ;
    }
}

#endif
