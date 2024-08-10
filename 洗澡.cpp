#include<bits/stdc++.h>
using namespace std;
void fun()
{
	int n,s,m;//任务个数，洗澡时间，总时间 
	cin>>n>>s>>m;
	int l[200005],r[200005];
	l[0]=0;
	r[0]=0; 
	for(int i=1;i<=n;i++)
	{
		cin>>l[i];
		cin>>r[i];
	 } 
	 l[n+1]=m;
	 int flag=0;
	 for(int j=0;j<=n;j++)
	 {
	 	if(l[j+1]-r[j]>=s)
	 	{
	 		cout<<"YES"<<endl;
	 		flag=1;
		 }
	 }
	 if(flag==0)
	 {
	 	cout<<"NO"<<endl;
	 }
	 
}
int main()
{
	int a;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		fun();
	}
	return 0;
 } 
