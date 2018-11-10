#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const
{
    std::vector<T> res;
    if(k > size()) k = size() ;
    for(int i = 0 ; i<k ; i++) res.push_back(mData[(mFront+i)%mCap]) ;
    return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to)
{
    std::vector<T> v (from,to) ;
    T * mData = new T[v.size()] ;
    for(int i = 0 ; i<v.size() ; i++) mData[i] = v[i] ;
    mSize = v.size();
    mCap =  v.size();
    mFront = 0 ;
}

#endif
