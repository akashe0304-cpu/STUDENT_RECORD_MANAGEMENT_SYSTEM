#include"header.h"
void show(ST*ptr)
{
	if(ptr==NULL)
	{
		fprintf(stderr,"No Records To Display....\n");
		return;
	}
	printf("-------------------------------------------\n");
	printf("Roll No\t\tName\t\tMark\n");
	while(ptr!=NULL)
	{
		printf("%d\t\t%s\t\t%.2f\n",ptr->roll,ptr->name,ptr->mark);
		ptr=ptr->next;
	}
	printf("-------------------------------------------\n");
}
