#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	int arr[100];
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	for(int i=0;i<a;i++)
	{
		int flag=0;
		for(int j=2;j<=sqrt(arr[i]);j++)
		{
			if(arr[i]%j==0)
			{
				flag=1;
				}	
		}
		if(flag==0)
		{
			printf("Yes\n");
		}
		else
		printf("No\n");
	}
	return 0;
 } 
