#include"header.h"
int main()
{
	int op;
	int cnt=101;
	ST*hptr=NULL;
label:
	printf("****STUDENT RECORD MENU*****\n");
	printf("[1]:Add New Record\n[2]:Delete a Record\n[3]:Show the List\n[4]:Modify a Record\n[5]:Save\n[6]:Sort the list\n[7]:Exit\nEnter Your Choice:");
	scanf("%d",&op);
	switch(op)
	{
		case 1:add(&hptr,&cnt);goto label;
		case 2:del(&hptr);goto exit;
		case 3:show(hptr);goto exit;
		case 4:modify(&hptr);goto exit;
	} 
exit:
	printf("Exit:y/n\n");
	scanf(" %c",&op);
	if(('y'==op)||('Y'==op))
		goto label;
	else
		goto exit;
}
