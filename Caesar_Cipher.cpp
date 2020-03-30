#include<iostream>
using namespace std;
#include<string.h>

void Caesar_Cipher(char str[1000], int k)
{
	for(int i=0; i<strlen(str); i++)
	{
		if (isupper(str[i]))
			str[i] = char( int(str[i] + k - 65) % 26 + 65);
		else if (islower(str[i]))
			str[i] = char( int(str[i] + k - 97) % 26 + 97);
		else if (isdigit(str[i]))
			str[i] = char( int(str[i] + k - 48) % 10 + 48);
		cout << str[i];
	}
}

int main()
{
	char str[1000];
	int k;
	gets(str);
	cin >> k;
	
	Caesar_Cipher(str, k);
}
