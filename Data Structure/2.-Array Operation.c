/*2.-PROGRAM OF APPLYING ARRAY OPERATION ON ONE DIMENTIONAL ARRAY*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],i,n,p,choice;
	clrscr();
	printf("How Many Elements Do You Want To Enter=");
	scanf("%d",&n);
	printf("Enter Elements=");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	start:
	printf("Press 1-Insertion, 2-Deletion, 3-Traversing\n");
	printf("Enter Your Choice=");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: //Insertion
		{
			printf("Enter Position Of New Element To Be Inserted=");
			scanf("%d",&p);
			for(i=n;i>=p;i--)
			{
				a[i+1]=a[i];
			}
			printf("Enter New Data=");
			scanf("%d",&a[p]);
			n=n+1;
			for(i=1;i<=n;i++)
			{
				printf("\na[%d]=%d",i,a[i]);
			}
		}
		break;
		case 2: //Deletion
		{
			printf("Enter Position Of Element To Be Deleted=");
			scanf("%d",&p);
			for(i=p;i<=n-1;i++)
			{
				a[i]=a[i+1];
			}
			n=n-1;
			for(i=1;i<=n;i++)
			{
				printf("\na[%d]=%d",i,a[i]);
			}
		}
		break;
		case 3:  //Traversing
		{
			for(i=1;i<=n;i++)
			{
				printf("\na[%d]=%d",i,a[i]);
			}
		}
		break;
		default: //Choice Not Exist
			printf("Please Enter Right Choice");
	}
	getch();
	return 0;
}
