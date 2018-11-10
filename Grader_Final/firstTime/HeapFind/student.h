#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <math.h>
template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
    for(int i = 0 ; i < mSize ; i++) {
        if(mData[i] == k) return true ;
    }
    return false ;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
    if(!find(k)) return -1 ;
    int n = 0 , max_idx = 0;
    for(int i = 0 ; i < mSize ; i++) {
        if ( mData[i] == k) max_idx = i ;
    }
    if( max_idx == 0) return 0 ; // Note : NO LOG(0) !!!!
    //std::cout << log2(max_idx) <<" "<<(int)log2(max_idx) ;
    return (int)log2(max_idx) ;
}

#endif

