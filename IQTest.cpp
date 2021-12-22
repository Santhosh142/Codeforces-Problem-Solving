//IQ Test
/*
PROBLEM STATEMENT:
Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one of the given n numbers differs from the others. Bob observed that one number usually differs from the others in evenness. Help Bob — to check his answers, he needs a program that among the given n numbers finds one that is different in evenness.

Input
The first line contains integer n (3?=?n?=?100) — amount of numbers in the task. The second line contains n space-separated natural numbers, not exceeding 100. It is guaranteed, that exactly one of these numbers differs from the others in evenness.

Output
Output index of number that differs from the others in evenness. Numbers are numbered from 1 in the input order.

Examples
input 1:
5
2 4 7 8 10
output 1:
3

input 2:

4
1 2 1 1
output 2:
2



*/
#include<bits/stdc++.h>
using namespace std;

int findOdd(int ar[],int n)
{
	int ele;
	for(int i=0;i<n;i++)
	{
		if(ar[i]%2!=0)
		{
			ele=i;
			break;
		}
	}
	return ele+1;
}
int findEven(int ar[],int n)
{
	int ele;
	for(int i=0;i<n;i++)
	{
		if(ar[i]%2==0)
		{
			ele=i;
			break;
		}
	}
	return ele+1;
}

int main()
{
	int n;
	cin >> n;
	int ar[n];
	
	int even_count=0,odd_count=0;
	for(int i=0;i<n;i++)
	{
		cin >> ar[i];
		if(ar[i]%2==0)
		even_count++;
		else
		odd_count++;
	}
	if(even_count>odd_count)
	{
		int ele = findOdd(ar,n);
		cout << ele;
		
	}
	else
	{
		int ele = findEven(ar,n);
		cout << ele;
	}
	return 0;
}

















