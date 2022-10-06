#include <stdio.h>
int main()
{
	int a,i,j,b[10],c;
	printf("enter the  no.of elements in list ");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		printf("enter the elements in list");
		scanf("%d",&b[i]);
	}
		for(i=0;i<=a;i++)
	{
		for(j=i+1;j<a;++j)
		{
			{
				if(b[i]<b[j])
				{
				c=b[j];
				b[j]=b[i];
				b[i]=c;
				}
				if(b[i]>b[j])
				{
				c=b[i];
				b[i]=b[j];
				b[j]=c;
				}
				
			}
		}
	}
	printf("the quick sorting=");
	for(i=0;i<a;++i)
	printf("%d  ",b[i]);
}