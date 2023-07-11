#include<stdio.h>

int main()
{
	int arr[10]={4,1,6,5,2,8,7,6,9,3};
	int temp;
	for(int i=0;i<10/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[10-i-1];
		arr[10-i-1]=temp;
	}
	for(int i=0;i<10;i++)
	{
		printf("%d",arr[i]);
	}
}
