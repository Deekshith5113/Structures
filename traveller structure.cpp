#include<stdio.h>
#include<string.h>
struct traveller
{
	int age,seat_number,train_no;
	char name[10],coachno[2],reservation_class[10];
};
main()
{
	struct traveller s[3];
	int i;
	printf("age,seat number,train no,name,coach no,reservation class:\n");
	for(i=0;i<1;i++)
	{
		scanf("%d%d%d%s%s%s",&s[i].age,&s[i].seat_number,&s[i].train_no,&s[i].name,&s[i].coachno,&s[i].reservation_class);
	}
	for(i=0;i<1;i++)
	{
		printf("Traeller 1 : age is %d\nseat number %d\ntrain no %d\nname %s\ncoach no %s\nreservation class %s\n",s[i].age,s[i].seat_number,s[i].train_no,s[i].name,s[i].coachno,s[i].reservation_class);
	}
}

