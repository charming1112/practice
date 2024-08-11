#include<bits/stdc++.h>
using namespace std;
int solve(int a1,int a2,int b1,int b2)
{
	int s=0;
	int s1=0,s2=0;
			if(a1>b1) s1++;
			if(a1<b1) s2++;
			if(a2>b2) s1++;
			if(a2<b2) s2++;
			if(s1>s2) s+=2;
			s1=0,s2=0;
		if(a1>b2) s1++;
		if(a1<b2) s2++;
		if(a2>b1) s1++;
		if(a2<b1) s2++;
		if(s1>s2) s+=2;
		return s;
}
int main()
{
	int a1,a2,b1,b2;
	int T;
	cin>>T;
	vector<int>arr;
	for(int i=0;i<T;i++)
	{
		cin>>a1>>a2>>b1>>b2;
		arr.push_back(solve(a1,a2,b1,b2));
	}
	for(int i=0;i<T;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
 } 
