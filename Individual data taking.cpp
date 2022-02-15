#include<stdio.h>
int individual_data (int x);
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
	int a[100],n,i,m;
	printf("How many people data would you like to enter: ");
	scanf("%d",&n);
	struct person p[n];
	for (i=0;i<n;i++)
	{
		printf("Enter the data of person %d :",i+1);
		scanf("%s%d%d%d%s",&p[i].name,&p[i].dob.dd,&p[i].dob.mm,&p[i].dob.yy,&p[i].city);
	}
	/*printf("Details are as follows : \n");
	for (i=0;i<n;i++)
	{
		printf("Person %d:\nname is: %s\nDate of birth: %d-%d-%d\ncity is: %s\n",i+1,p[i].name,p[i].dob.dd,p[i].dob.mm,p[i].dob.yy,p[i].city);
	}*/
	printf("Enter the number of person whose data is required: ");
	scanf("%d",m);
	for(i=0;i<n;i++)
	{
		if(i==m-1)
		{
			printf("Person %d:\nname is: %s\nDate of birth: %d-%d-%d\ncity is: %s\n",i+1,p[i].name,p[i].dob.dd,p[i].dob.mm,p[i].dob.yy,p[i].city);
		}	
	}
	
}
/*int individual_data(int x)
{
	int i,n;
	struct person p[n];
	
}*/
