#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
T CP::queue<T>::operator[](int idx) {
    if (idx < 0 ) idx += size() ;  // analysis
    return mData[(mFront+idx)%mCap] ; // don't forget it  : q.pop() return q[front]
    // this patterm mData[(mFront+index)%mCap] is fucking useful
}

#endif
