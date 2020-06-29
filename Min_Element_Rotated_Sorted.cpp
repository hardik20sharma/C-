// Find the minimum element in a rotated and sorted array.
#include<bits/stdc++.h>
using namespace std;

int minElement(vector<int> vec)
{
    for(int i=0; i<vec.size()-1; i++)
        if(vec[i] > vec[i+1])
            return vec[i+1];
}

int main()
{
    vector<int> vec{4,5,6,7,8,9,1,2,3};
    cout << minElement(vec) << "\n";
}