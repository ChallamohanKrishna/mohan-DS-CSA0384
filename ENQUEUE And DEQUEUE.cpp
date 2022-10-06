#include <stdio.h>
int main()
{
	int a,b,i,c[10],d;
	printf("choose 1.enqueue,2.dequeue=");
	scanf("%d",&a);
	if(a==1)
	printf("enter no of elements in list:");
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
	printf("enter the elements in list:");
	scanf("%d",&c[i]);
	}

	printf("enter the elements enqueue in list:");
	scanf("%d",&d);
	printf("enqueue elements:\n");
	for(i=0;i<b;i++)
	printf("%d",c[i]);
	printf("%d",d);
	printf("\n dequeue elements:");
	for(i=1;i<b;i++)
	
	printf("%d",c[i]);

	
	
}