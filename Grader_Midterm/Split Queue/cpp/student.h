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
     // for(int i = 0 ; i<size() ; i++ ) {    // size is change when pop() ;
    size_t origin_size = size() ;
    for(int i = 0 ; i < origin_size ; i++ ) {
        qs[i%k].push(front()) ;
        this->pop() ;
    }
    return qs;
}
//vector< CP::queue<T> > CP::queue<T>::split_queue(int k) {
//    vector<CP::queue<T> > qs(k);
//    unsigned ms = size() ;
//    while(!empty()){
//        int i =  (ms - size())%k ;
//        qs[i].push(front()) ;
//        pop() ;
//
//    }
//
//    return qs;
//}

#endif

