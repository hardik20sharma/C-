#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool Anagram(string A, string B)
{
	int n1, n2, i;
	n1 = A.length();
	n2 = B.length();
	
	if(n1!=n2)
		return false;
	
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	
	for(i=0; i<n1; i++)
		if(A[i] != B[i])
			return false;
	
	return true;
}

int main()
{
	int t;
	string s1, s2;
	cin >> t;
	while(t--)
	{
		cin >> s1 >> s2;
		if(Anagram(s1, s2))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
