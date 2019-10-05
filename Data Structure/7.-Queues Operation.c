/*6.-PROGRAM FOR APPLYING QUEUE OPERATIONS IN ARRAY REPRESENTATION*/
#include<stdio.h>
#include<conio.h>
main()
{
	int queue[10],front,rear,item,temp,choice,i;
	char code;
	printf("Maximum Elements In The Queue Can Be 10");
	rear=0;
	front=0;
	start:
	printf("\nPress 1-Insertion, 2-Deletion\n");
	printf("Enter Your Choice=");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: //Insertion
		{
			if(rear==10)
			{
				printf("Overflow");
			}
			else if(front==0)
			{   
				front=1;
				rear=rear+1;
				printf("Enter Value To Be Inserted=");
				scanf("%d",&item);
				queue[rear]=item;
			}
			else
			{
				rear=rear+1;
				printf("Enter Value To Be Inserted=");
				scanf("%d",&item);
				queue[rear]=item;
			}
			for(i=front;i<=rear;i++)
			{				
				printf("Queue[%d]=%d\n",i,queue[i]);
			}
		}
		break;
		case 2: //Deletion
		{
			if(front==0)
			{
				printf("Underflow");
			}
			else
			{
				
				front=front+1;
			}
			for(i=front;i<=rear;i++)
			{
				printf("Queue[%d]=%d\n",i,queue[i]);
			}
		}
		break;
		default: //Choice Not Exist
			printf("Please Enter Right Choice");
	}
	printf("Want To Insert Or Delete More Elements Then Press Y=");
	code=getche();
	if(code=='Y'||code=='y')
	goto start;
	getch();
	return 0;
}
	