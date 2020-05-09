#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a{1,2,3,4,5,6,6,6,6,7,8,9};
    unordered_set<int> s, found_numbers;

    for(int i=0; i<a.size(); i++)
        if(s.find(a[i]) != s.end())
            found_numbers.insert(a[i]);
        else
            s.insert(a[i]);
    
    for(int i : found_numbers)
        cout << i << " ";
}