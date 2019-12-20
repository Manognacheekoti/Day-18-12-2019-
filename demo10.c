/* ASCII demo2- to print ASCII Chart
 */
#include<stdio.h>
main()
{
	int i,count=0;
	for(i=0;i<256;i++,count++)
	{
	printf("\n %d \t %c",i,i);	
	if(count==20)
	{
		printf("\n press any key...\n");
		getch();
		count=0;
	}
	}
	
	
}

























