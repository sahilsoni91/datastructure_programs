/*6.-PROGRAM FOR APPLYING STACK OPERATION IN ARRAY REPRESENTATION*/
#include<stdio.h>
#include<conio.h>
main()
{
	int stack[10],top,item,temp,choice,i,maxstk;
	char code;
	clrscr();
	maxstk=10;
	printf("Maximum Elements In The Stack Can Be 10\n");
	top=0;
	start:
	printf("\nPress 1-Push 2-Pop\n");
	printf("Enter Your Choice=");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: //Push Operation
		{
			if(top==maxstk)
			{
				printf("Overflow");
			}
			else
			{
				top=top+1;
				printf("Enter Value To Be Inserted=");
				scanf("%d",&item);
				stack[top]=item;
			}
			for(i=1;i<=top;i++)
			{				
				printf("Stack[%d]=%d\n",i,stack[i]);
			}
		}
		break;
		case 2: //Pop Operation
		{
			if(top==0)
			{
				printf("Underflow");
			}
			else
			{				
				top=top-1;
			}
			for(i=1;i<=top;i++)
			{
				printf("Stack[%d]=%d\n",i,stack[i]);
			}
		}
		break;
		default: //Choice Not Exist
			printf("Please Enter Right Choice");
	}
	printf("Want To Push Or Pop More Elements Then Press Y=");
	code=getche();
	if(code=='Y'||code=='y')
	goto start;
	getch();
	return 0;
}
	