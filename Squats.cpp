/*
Pasha has many hamsters and he makes them work out. Today, n hamsters (n is even) came to work out. 
The hamsters lined up and each hamster either sat down or stood up.

For another exercise, Pasha needs exactly  hamsters to stand up and the other hamsters to sit down. In one minute, 
Pasha can make some hamster ether sit down or stand up.
How many minutes will he need to get what he wants if he acts optimally well?

Input
The first line contains integer n (2 ≤ n ≤ 200; n is even). The next line contains n characters without spaces.
These characters describe the hamsters' position: the i-th character equals 'X', if the i-th hamster in the row is standing, and 'x', if he is sitting.

Output
In the first line, print a single integer — the minimum required number of minutes. In the second line, 
print a string that describes the hamsters' position after Pasha makes the required changes. If there are multiple optimal positions, print any of them.

Examples

input 1:
4
xxXx
output 1:
1
XxXx

input 2:
2
XX
output 2:
1
xX

input 3:
6
xXXxXx
output 3:
0
xXXxXx



*/


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
