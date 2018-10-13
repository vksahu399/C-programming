# include<stdio.h>
void main()
{
	int a,b;
	char ch;
	printf("enter the opereter");
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':
		printf("enter the values of a & b");
		scanf("%d%d",&a,&b);
		printf("%d",a+b);
		break;
	case '-':
		printf("enter the values of a & b");
		scanf("%d%d",&a,&b);
		printf("%d",a-b);
		break;
	case '*':
	    printf("enter the values of a & b");
		scanf("%d%d",&a,&b);
		printf("%d",a*b);
		break;
    case '/':
    	printf("enter the values of a & b");
		scanf("%d%d",&a,&b);
	    printf("%f",(float)a/b);
	}
}
