#include <stdio.h>
int main()
{
	int a,b[10],n,c,i,d,key,index;
	int h[n]={NULL};
	printf("enter the no.of elements in list :");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
	printf("enter the elements in list :");
	scanf("%d",&b[i]);
	}
	printf("enter the size of the table :");
	scanf("%d",&n);
	printf("enter the mod value :");
	scanf("%d",&c);
	key=b[i]%c;  
	for(i=0;i<n;i++)  
   {  
    	index=(key+i)%n; 
    	if(h[index] == NULL)  
    	{	  
     		h[index]=b[i];  
      		break;  
    	}   
		if(i == n)  
    	printf("\nelement cannot be inserted\n");  
	} 
	printf("\nelements in the hash table are \n");  
  	for(i=0;i<n; i++)  
  	printf("\nat index %d \t value = %d",i,h[i]);  
	            
}