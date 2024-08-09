#include<bits/stdc++.h>
using namespace std; 
int main()
{
	string str;
	cin>>str;
	vector<int>arr;
	int i;
	int num=0;
	for(i=0;i<str.size();i++)
	{
		if(str[i]=='+')
		{
			arr.push_back(num);
            num=0;
		}
        else{
            num=num*10+(str[i]-'0');//考虑多位数字的情况 
        }
	}
	arr.push_back(num);

	sort(arr.begin(),arr.end(),greater<int>());//排序 
	int j;
	for( j=0;j<arr.size()-1;j++)
	{
		cout<<arr[j]<<"+";
	}
	cout<<arr[j]<<endl;
	int sum=0;
	for(int i=0;i<arr.size();i++)
	{
		sum+=arr[i];
	}
	cout<<sum<<endl;
	return 0;
}
