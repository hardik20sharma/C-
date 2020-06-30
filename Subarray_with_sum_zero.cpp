#include<bits/stdc++.h>
using namespace std;

bool func(vector<int> a)
{
    int sum = 0;
    set<int> s;
    for(int i=0; i<a.size(); i++)
    {
        sum += a[i];
        if(s.find(sum) != s.end())
            return true;
        s.insert(sum);
    }
    return false;
}

int main()
{
    vector<int> a{4, 2, -3, 1, 6};
    func(a) ? cout << "Yes" : cout << "No";
}