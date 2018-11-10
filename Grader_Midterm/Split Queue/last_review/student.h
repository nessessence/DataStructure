#ifndef _CP_STUDENT_QUEUE_INCLUDED_
#define _CP_STUDENT_QUEUE_INCLUDED_

#include <stdexcept>
#include <iostream>
//#pragma once
#include <vector>
#include <queue>
#include "queue.h"

template <typename T>
std::vector< CP::queue<T> > CP::queue<T>::split_queue(int k) {
    std::vector<CP::queue<T> > qs(k);
    for(int i = 0 ; i<size() ; i++){
        int idx = i%k ;
        qs[idx].push(mData[(mFront+i)%mCap]) ;
    }
    while(!empty()) pop() ;
    return qs;
}

#endif

