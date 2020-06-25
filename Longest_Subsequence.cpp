#include<bits/stdc++.h>
using namespace std;

int Longest_Subsequence(vector<int> a)
{
    set<int> s;
    int result = 0;

    for(int i=0; i<a.size(); i++)
        s.insert(a[i]);

    for(int i=0; i<a.size(); i++)
        if(s.find(a[i]+1) != s.end())
        {
            int j = a[i];
            while(s.find(j++) != s.end());
            result = max(result, j - a[i]);
        }
    return result-1;
}

int main()
{
    vector<int> a{1, 9, 3, 10, 4, 20, 2, 5};
    cout << Longest_Subsequence(a);
}