/* to print student total & avg  */
#include<stdio.h>
main()
{
	int rno,s1,s2,s3,tot;
	char name[20];
	float avg;
	
	printf("\n enter roll no :");
	scanf("%d",&rno);
	printf("\n enter student name :");
	scanf("%s",&name);
	printf("\n enter marks in 3 subjects :");
	scanf("%d%d%d",&s1,&s2,&s3);
	if(s1>=35 && s2>=35  && s3>=35)
	{
	printf("\n Result : Pass ");
	tot=s1+s2+s3;
	avg=(float)tot/3;
	
	printf("\n Roll no :%d",rno);
	printf("\n Student Name :%s",name);
	printf("\n Total   :%d",tot);
	printf("\n Average :%f",avg);	
	}
	else
	{
	printf("\n Result : Fail");
	printf("\n Roll no :%d",rno);
	printf("\n Student Name :%s",name);
	printf("\n Sub1 :%d",s1);
	printf("\n Sub2 :%d",s2);
	printf("\n Sub3 :%d",s3);
	}
	
}

























