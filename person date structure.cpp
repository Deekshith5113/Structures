#include<stdio.h>
struct date
{
	int dd,mm,yy;
};
struct person
{
	char name[20],city[20];
	struct date dob;
};
main()
{
	struct person p;
	scanf("%s%d%d%d%s",&p.name,&p.dob.dd,&p.dob.mm,&p.dob.yy,&p.city);
	printf("Details are as follows : \n");
	printf("name is %.10s\nDate of birth %d-%d-%d\n city is %s",p.name,p.dob.dd,p.dob.mm,p.dob.yy,p.city);
}
