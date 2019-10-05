/* 8.-PROGRAM OF APPLYING OPERATIONS ON STRING*/
#include<stdio.h>
#include<conio.h>
int length(char); //Function Declaration
void reverse(char); //Function Declaration
void concat(char,char); //Function Declaration
int length(char a[10]) //Function Definition
{
	int i;
	for(i=0;a[i]!='\0';i++)
	{
	}
	printf("String Length=%d\n",i);
}
void reverse(char a[10]) //Function Definition
{
	int i;
	for(i=0;a[i]!='\0';i++)
	{
	}
	printf("Reverse Of String=");
	for(i=i-1;i>=0;i--)
		printf("%c",a[i]);
	printf("\n");
}
void concat(char a[10],char b[10]) //Function Definition
{
	int i,j;
	char c[20];
	for(i=0,j=0;a[i]!='\0';i++,j++)
		c[i]=a[i];
	for(i=0;b[i]!='\0';i++)
	{
		c[j]=b[i];
		j++;
	}
	printf("String=%s",c);
	printf("\n");
}
main()
{
	char a[10],b[10],code;
	int i,choice;
	
	printf("Enter First String=");
	scanf("%s",&a);
	printf("Enter Second String=");
	scanf("%s",&b);
	start:
	printf("\n1-Length, 2-Reverse 3-Concatenation\n");
	printf("Enter Choice=");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: //Calculating Length
		{
			length(a);
			length(b);
		}
		break;
		case 2: //Reverse The String
		{
			reverse(a);
			reverse(b);
		}
		break;
		case 3: //Concatenation Of String
		{
			concat(a,b);
		}
		break;
		default:
			printf("Enter right choice");
	}
	printf("Want To Do Anything Else Then Press Y=");
	code=getche();
	if(code=='Y'||code=='y')
	goto start;
	getch();
	return 0;
}
