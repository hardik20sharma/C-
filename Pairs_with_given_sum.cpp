// 4.Find all pairs on integer array whose sum is equal to given number.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 17, temp;
    vector<int> a {1,2,3,4,5,6,7,8,9};
    unordered_set<int> s;

    for(int i=0; i<a.size(); i++)
    {
        temp = sum - a[i];
        if(s.find(temp) != s.end())
            cout << "(" << temp << ", " << a[i] << ")\t";
        s.insert(a[i]);
    }
}