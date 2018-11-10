#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <math.h>
template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
    // note : height  =  flooring [log2(n)]
    if( this->mSize == 0 ) return -1 ;
    if( this->mSize == 1 ) return 0 ;
    int h = 0 ;
    float p = 0 ;
    while(p < mSize){   // log2
        h++;
        p = pow( 2 , h);
    }
    if(p!= mSize) h-- ; // Flooring
    return h ;

}




#endif

