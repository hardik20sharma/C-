#include<bits/stdc++.h>
using namespace std;

void Union(vector<int> a, vector<int> b)
{
    int i=0, j=0;
    while(i<a.size() && j<b.size())
        if(a[i] < b[j])
            cout << a[i++] << " ";
        
        else if(a[i] > b[j])
            cout << b[j++] << " ";
        
        else
        {
            cout << a[i++] << " ";
            j++;
        }

    while(i < a.size())
        cout << a[i++] << " ";

    while(j < b.size())
        cout << b[j++] << " ";

    cout << "\n";
}

void Intersection(vector<int> a, vector<int> b)
{
    int i=0, j=0;
    while(i<a.size() && j<b.size())
        if(a[i]==b[j])
        {
            cout << a[i++] << " ";
            j++;
        }
        else if(a[i] < b[j])
            i++;
        else
            j++;
}

int main()
{
    vector<int> a {1,2,3,4,5}, b {0,1,2,3,4,5,6,7,8,9};
    Union(a, b);
    Intersection(a, b);
}