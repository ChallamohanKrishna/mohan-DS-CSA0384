#include <stdio.h>
int main()
{
	int a,b,i,c[10],d[10],e,n;
	printf("choose 1.push,2.pop,3.peek=");
	scanf("%d",&a);
	if(a==1)
	printf("enter no of elements in list:");
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
	printf("enter the elements in list:");
	scanf("%d",&c[i]);
	}
	printf("enter the  no.of elements push in list:");
	scanf("%d",&e);
	for(i=0;i<=e;i++)
	{
	printf("enter the elements push in list:");
	scanf("%d",&d[i]);
	}
	for(i=0;i<=e;i++)
	printf("%d\n",d[i]);
	for(i=0;i<b;i++)
	printf("%d\n",c[i]);
	printf("pop elements:\n");
	printf("enter the no.of pop to be done:");
	scanf("%d",&n);
	for(i=n;i<b;i++)
	
	printf("%d\n",c[i]);
}