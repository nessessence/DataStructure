#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,int a,int b)
{
    vector<int> temp(v.begin()+a , v.begin() +b+1) ;
    vector<int> rtemp ;
    for(int i = temp.size() -1 ; i>=0 ; i-- ) rtemp.push_back(temp[i]) ;
    v.erase(v.begin()+a,v.begin()+b+1) ;
    v.insert(v.begin()+a ,rtemp.begin() , rtemp.end()) ;
}
int main()
{
//read input
    int n,a,b;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        v.push_back(c);
    }
    cin >> a >> b;
//call function
    reverse(v,a,b);
//display content of the vector
    for (auto &x : v)
        cout << x << " ";
    cout << endl;
}
