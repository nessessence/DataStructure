#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <stack>
using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
  // v[i].first ¡¢’§§Ë∑”‡ªªÁπ 0 · ¥ß«§Ë∑” ‡ªªÁπ operator
  stack<int> s ;
  for(auto p : v){
    if(p.first == 1) s.push(p.second) ;
    else {
        int x = s.top() ;
        s.pop() ;
        int y = s.top() ;
        s.pop() ;
        if(p.second == 0) s.push(x+y) ;
        if(p.second == 1) s.push(y-x) ;
        if(p.second == 2) s.push(x*y) ;
        if(p.second == 3) s.push(y/x) ;
    }
    return s.top() ;
  }
  //WRITE YOUR CODE HERE
  //DON"T FORGET TO RETURN THE RESULT
}

#endif
