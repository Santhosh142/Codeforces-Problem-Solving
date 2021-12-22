/*
PROBLEM STATEMENT: 58A - Chat room

Vasya has recently learned to type and log on to the Internet. He immediately entered a chat room and decided to say hello to everybody.
Vasya typed the word s. It is considered that Vasya managed to say hello if several letters can be deleted from the typed word 
so that it resulted in the word "hello". For example, if Vasya types the word "ahhellllloou", it will be considered that he said hello,
and if he types "hlelo", it will be considered that Vasya got misunderstood and he didn't manage to say hello. 
Determine whether Vasya managed to say hello by the given word s.

Input
The first and only line contains the word s, which Vasya typed. This word consisits of small Latin letters, its length is no less that 1 and no more than 100 letters.

Output
If Vasya managed to say hello, print "YES", otherwise print "NO".

Examples
input
ahhellllloou
output
YES

input
hlelo
output
NO



*/




#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	string s;
	cin >> s;
	
	int len = s.length();
	string comp = "hello";
	int ind=0;
	for(int i=0;i<len;i++)
	{
		if(s[i]==comp[ind] and ind<5)
		{
			ind++;
		}
		if(ind==5)
		{
			cout << "YES" ;
			return 0;
		}
	}
	cout << "NO" ;
	
	return 0;
}
