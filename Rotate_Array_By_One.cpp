#include<bits/stdc++.h>
using namespace std;

void Rotate_Array_By_One(vector<int> &a)
{
    int temp = a[0];
    for(int i=1; i<a.size(); i++)
        a[i-1] = a[i];
    
    a[a.size()-1] = temp;
}

void PrintArray(vector<int> &a)
{
    for(int i=0; i<a.size(); i++)
        cout << a[i] << " ";
    cout << "\n";
}

int main()
{
    vector<int> a{1,2,3,4,5,6,7,8,9};
    PrintArray(a);
    Rotate_Array_By_One(a);
    PrintArray(a);
}