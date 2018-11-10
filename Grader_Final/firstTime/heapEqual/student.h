#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {
    if( this->mSize != other.mSize) return false ;
    CP::priority_queue<T,Comp>  pq1 = *this , pq2 = other ;  //assignment constructor
    while(!pq1.empty()){
        if(pq1.top()!= pq2.top()) return false ;
        pq1.pop() ;
        pq2.pop() ;
    }

    return true;
}

#endif
