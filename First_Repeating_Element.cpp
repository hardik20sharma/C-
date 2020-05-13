#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a{1,2,3,4,5,6,6};
    set<int> s;

    for(int i=0; i<a.size(); i++)
        if(s.find(a[i]) != s.end())
        {
            cout << a[i]; break;
        }
        else
            s.insert(a[i]);
}