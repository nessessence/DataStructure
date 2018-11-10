#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::queue<T>::operator==(const CP::queue<T> &other) const {
    if(size() != other.size()) return false ;
    int origin_size = size() ;   //  not necessary , it use array , not pop for queue
    for(int i = 0 ; i < origin_size ; i++){  // i  < size() ;
        if(mData[(mFront+i)%mCap] != other.mData[(other.mFront+i)%other.mCap]) return false ;
    }
    return true ;

}

#endif
