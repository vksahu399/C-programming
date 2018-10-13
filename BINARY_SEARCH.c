# include<stdio.h>
void BS(int b[],int n)
{
	int low,high,mid,num,i,flag=0;
	printf("enter no. to search");
	scanf("%d",&num);
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<=high)
    {
    	if(b[mid]==num)
    	{
    		printf("%d is found of %d location",num,i+1);
    		flag=1;
    		break;
		}
		else if(b[mid]>num)
		{
			high=mid-1;
			mid=(low+high)/2;
		}
		else
		{
			low=mid+1;
			mid=(low+high)/2;
		}
	}
	if(flag==0)
	printf("%d is not found",num);
}
void main()
{
	int a[10],n,i;
	printf("enter no. of element to insert");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	BS(a,n);
}
