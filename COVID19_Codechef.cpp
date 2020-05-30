#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, min=10, max=-1;
        cin >> n;

        vector<int> vec(n);
        for(int i=0; i<n; i++)
            cin >> vec[i];

        for(int i=0; i<n; i++)
        {
            int j=i+1, cnt=1, temp = i;
            while(j<n && vec[j++]-vec[temp++] <=2)
                cnt++;

            j=i-1, temp = i;
            while(0 <= j && vec[temp--]-vec[j--] <=2)
                cnt++;

            if(cnt < min)
                min = cnt;
            else if(max < cnt)
                max = cnt;
        }
        cout << min << " " << max << "\n";
    }
}