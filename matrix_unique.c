# include<stdio.h>
void main()
{
	int i,a[100];
	static freq[100];
	printf("enter the element into array");
	for(i=0;i<100;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>=1&&a[i]<=100)
		freq[a[i]]=freq[a[i]]+1;	
	}
	printf("\n");
	printf("frequency is \n");
	for(i=0;i<100;i++)
	{
		if(freq[i]!=0)
		printf("%d - %d\n",i,freq[i]);
	}	
}  
