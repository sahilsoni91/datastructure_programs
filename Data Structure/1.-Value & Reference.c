/*1.-PROGRAM OF SWAPPING VALUES USING CALL BY VALUE AND REFERENCE*/
#include<stdio.h>
#include<conio.h>
int swap_value(int,int);  //Function Declaration
int swap_value(int,int);  //Function Declaration
int swap_value(int a,int b) //Function Definition
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("Swaping Through Value\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}
int swap_reference(int *a,int *b) //Function Definition
{
	int *c;
	*c=*a;
	*a=*b;
	*b=*c;
	printf("Swaping Through Reference\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}
main()
{
	int a,b;
	clrscr();
	a=10;
	b=20;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	swap_value(a,b); //Function Calling
	swap_reference(&a,&b); //Function Calling
	getch();
	return 0;
}
