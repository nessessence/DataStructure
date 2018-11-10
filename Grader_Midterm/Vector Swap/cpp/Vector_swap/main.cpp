#include <iostream>
#include <vector>
using namespace std;
void vector_swap(vector<int> &v1,vector<int> &v2,
                 int start1, int end1,
                 int start2, int end2)
{
    vector<int> temp1 ( v1.begin()+start1 ,v1.begin()+end1) ;
    vector<int> temp2 (v2.begin()+start2 , v2.begin()+end2) ;
    v1.erase(v1.begin()+start1 ,v1.begin()+end1) ;
    v1.insert(v1.begin()+start1 , temp2.begin() , temp2.end()) ;
    v2.erase(v2.begin()+start2 , v2.begin()+end2) ;
    v2.insert(v2.begin()+start2 , temp1.begin() , temp1.end()) ;

}
int main()
{
//read input
    int n,c;
    vector<int>v1,v2;
    cin >> n; //number of v1
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        v1.push_back(c);
    }
    cin >> n; //number of v2
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        v2.push_back(c);
    }
    int s1,e1,s2,e2; //position
    cin >> s1 >> e1 >> s2 >> e2;
//call the function
    vector_swap(v1,v2,s1,e1,s2,e2);
//display content of the stack
    cout << "v1 has " << v1.size() << endl;
    for (auto &x : v1)
    {
        cout << x << " ";
    }
    cout << endl;
//display content of the stack
    cout << "v2 has " << v2.size() << endl;
    for (auto &x : v2)
    {
        cout << x << " ";
    }
    cout << endl;
}
//#include <iostream>
//#include <vector>
//using namespace std;
//void vector_swap(vector<int> &v1,vector<int> &v2,
//    int start1, int end1,
//    int start2, int end2) {
//    int s = 0 ;
//    vector<int> temp1(v1) ;
//    vector<int> temp2(v2) ;
//    int j = 0 ;
//    for(int i =  start1 ; i  < end1 ; i++){
//        temp1.erase(temp1.begin()+i-j) ;
//        j++;
//    }
//    j = 0;
//    for(int i = start2 ; i < end2 ; i++){
//        temp1.insert(temp1.begin()+start1+j ,v2[i] ) ;
//        j++ ;
//    }
//    j = 0 ;
//    for(int i =  start2 ; i  < end2 ; i++){
//        temp2.erase(temp2.begin()+i-j) ;
//        j++;
//    }
//    j = 0;
//    for(int i = start1 ; i < end1 ; i++){
//        temp2.insert(temp2.begin()+start2+j ,v1[i] ) ;
//        j++ ;
//    }
//    swap(temp1 , v1) ;
//    swap(temp2 , v2) ;
//}
//int main() {
//  //read input
//  int n,c;
//  vector<int>v1,v2;
//  cin >> n; //number of v1
//  for (int i = 0;i < n;i++) {
//    cin >> c;
//    v1.push_back(c);
//  }
//  cin >> n; //number of v2
//  for (int i = 0;i < n;i++) {
//    cin >> c;
//    v2.push_back(c);
//  }
//  int s1,e1,s2,e2; //position
//  cin >> s1 >> e1 >> s2 >> e2;
//  //call the function
//  vector_swap(v1,v2,s1,e1,s2,e2);
//  //display content of the stack
//  cout << "v1 has " << v1.size() << endl;
//  for (auto &x : v1) { cout << x << " "; }
//  cout << endl;
//  //display content of the stack
//  cout << "v2 has " << v2.size() << endl;
//  for (auto &x : v2) { cout << x << " "; }
//  cout << endl;
//}
////////////////////
////    vector<int> temp1 , temp2 ;
////    for(int i = 0 ; i < start1 ; i++) temp1.push_back(v1[i]) ;
////    for(int i = start2 ; i < end2 ; i++) temp1.push_back(v2[i]) ;
////    for(int i = end1 ; i!=v1.size() ; i++) temp1.push_back(v1[i]) ;
////    for(int i = 0 ; i<start2 ; i++) temp2.push_back(v2[i]) ;
////    for(int i = start1 ; i < end2 ; i++) temp2.push_back(v1[i]) ;
////    for(int i = end2 ; i!=v2.size() ; i++) temp2.push_back(v2[i]) ;
////    swap(temp1 , v1) ;
////    swap(temp2 , v2) ;
////}
