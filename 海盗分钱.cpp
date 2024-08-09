#include<bits/stdc++.h>
using namespace std;
int function(int money,int num)//5需要同意5/2=2；6需要6/2= 3（算上老大） 7需要7/2=3 
{
	if(num%2==0)
	{
		return money-(num/2-1);
	 } 
	 else
	 {
	 	return money-num/2;
	 }
}
int main()
{
	int a;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		int money,num;
		cin>>money;
		cin>>num;
		cout<<function(money,num)<<endl;
	}
	return 0;
 } 
