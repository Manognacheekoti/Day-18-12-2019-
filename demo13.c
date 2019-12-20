/* switch demo1- simple calc */
#include<stdio.h>
main()
{
	int a,b,ch;
	printf("\n enter two values :")	;
	scanf("%d%d",&a,&b);
	printf("\n 1. Addition \n 2. Subtraction ");
	printf("\n enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("\n Sum :%d",a+b);break;
		case 2:printf("\n Difference :%d",a-b);break;
		default:printf("\n Invalid choice...!");
	}
}
























