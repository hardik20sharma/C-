#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(vector<int> a)
{
	int max_so_far = a[0], max_ending_here = a[0];

	for (int i : a)
	{
        max_ending_here = max(i, max_ending_here + i);
        max_so_far = max(max_so_far, max_ending_here);
	}
	return max_so_far;
}

int main()
{
	vector<int> a {-2, -3, 4, -1, -2, 1, 5, -3};
	int max_sum = maxSubArraySum(a);
	cout << max_sum << "\n";
}