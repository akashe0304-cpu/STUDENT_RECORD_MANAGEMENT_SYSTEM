#include"header.h"
void save(ST*ptr)
{
	if(ptr==NULL){
		fprintf(stderr,"No Record....\n");
		return;
	}
	FILE*fs=fopen("student","w");
	fprintf(fs,"--------------------------------------------------\n");
	fprintf(fs,"Roll\t\tName\t\tMark\n");
	fprintf(fs,"--------------------------------------------------\n");
	while(ptr!=NULL)
	{
		fprintf(fs,"%d\t\t%s\t\t%.2f\n",ptr->roll,ptr->name,ptr->mark);
		ptr=ptr->next;
	}
	fclose(fs);
	printf("successfully saved...\n");
}
