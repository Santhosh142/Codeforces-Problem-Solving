/*
PROBLEM STATEMENT :A Square String ?
A string is called square if it is some string written twice in a row. For example, the strings "aa", "abcabc", "abab" and "baabaa" are square. 
But the strings "aaa", "abaaab" and "abcdabc" are not square.

For a given string s determine if it is square.

Input:
The first line of input data contains an integer t (1≤t≤100) —the number of test cases.

This is followed by t lines, each containing a description of one test case. The given strings consist only of lowercase Latin letters and 
have lengths between 1 and 100 inclusive.

Output
For each test case, output on a separate line:

YES if the string in the corresponding test case is square,
NO otherwise.
You can output YES and NO in any case (for example, strings yEs, yes, Yes and YES will be recognized as a positive response).

Example
input
10
a
aa
aaa
aaaa
abab
abcabc
abacaba
xxyy
xyyx
xyxy
output
NO
YES
NO
YES
YES
YES
NO
NO
NO
YES



*/



#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		string s;
		cin >> s;
		int len=s.length();
		if(len%2!=0)
		{
			cout << "NO" << endl;
		}
		else
		{
			string s1=s.substr(0,len/2);
			string s2=s.substr(len/2);
			if(s1==s2)
			cout << "YES" << endl;
			else
			cout << "NO" << endl;
		}
	}
	
	return 0;
	
}
