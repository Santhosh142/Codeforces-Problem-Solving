#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	
	int count =0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='X')
		count++;
	}
	int half=n/2;
	if(count>half)
	{
		cout << count-half << endl;;
		
			for(int i=0;i<n;i++)
			{
				if(count==half)
				break;
				if(s[i]=='X')
				{
					s[i]='x';
					--count;
				}
			}
		
		cout << s << endl;
	}
	
	else if(count < half)
	{
		cout << half-count << endl;
		
			for(int i=0;i<n;i++)
			{
				if(count==half)
				break;
				if(s[i]=='x')
				{
					s[i]='X';
					count++;
				}
			}
		
		cout << s;
	}
	else
	{
		cout << count-half << endl;
		cout << s;
	}
	
	return 0;
}
