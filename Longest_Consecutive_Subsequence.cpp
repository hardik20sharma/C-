// Longest consecutive subsequence
#include<bits/stdc++.h>
using namespace std;

int Longest_Consecutive_Subsequence(vector<int> a)
{
    set<int> s;
    int ans = 0;

    for(int i : a)
        s.insert(i);

    for(int i : a)
    {
        if(s.find(i-1) != s.end())  // i-1 is present before, that means i is not the starting position
            continue;

        int j = i;

        while(s.find(j) != s.end())
            j++;

        ans = max(ans, j-i);
    }

    return ans;
}

int main()
{
    vector<int> a{1, 9, 3, 10, 4, 20, 2};
    cout << Longest_Consecutive_Subsequence(a);
}