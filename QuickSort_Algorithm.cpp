#include<bits/stdc++.h>
using namespace std;

int Partition(vector<int> &a, int low, int high)
{
    int pivot = a[high], i = low - 1;

    for(int j = low; j<=high; j++)
        if(a[j] < pivot)
            swap(a[++i], a[j]);

    swap(a[i+1], a[high]);
    return (i+1);
}

void QuickSort(vector<int> &a, int low, int high)
{
    if(low >= high)
        return;

    int pi = Partition(a, low, high);
    QuickSort(a, low, pi - 1);
    QuickSort(a, pi + 1, high);
}

void PrintVector(vector<int> a)
{
    for(int i=0; i<a.size(); i++)
        cout << a[i] << " ";
    cout << "\n";
}

int main()
{
    vector<int> a{7,4,1,5,8,9,2,3,0,6};
    PrintVector(a);
    QuickSort(a, 0, a.size() - 1);
    PrintVector(a);
}