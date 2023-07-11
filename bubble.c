#include<stdio.h>

main()
{
	int i,j,y;
	int b[10]={3,6,7,2,7,2,8,3,10,5};
	for(i=0;i<=9;i=i+1)
	{
		for(j=0;j<=9;j=j+1)
		{
			if(b[j]>b[j+1])
			{
				y=b[j];
				b[j]=b[j+1];
				b[j+1]=y;
			}
		}
	}
	
	for(i=0;i<=9;i=i+1)
	{
		printf("\n %d",b[i]);
	}
}
