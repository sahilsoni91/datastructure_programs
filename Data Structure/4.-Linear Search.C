/*4.-PROGRAM OF SEARCHING AN ELEMENT USING LINEAR SEARCH*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],item,f,n,i,loc;
	clrscr();
	f=0;
	printf("How Many Elements Do You Want=");
	scanf("%d",&n);
	printf("Enter Elements=");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter The Item To Be Searched=");
	scanf("%d",&item);
	for(i=1;i<=n;i++)
	{
		if(a[i]==item)
		{
			f=1;
			loc=i;
		}
	}
	if(f==1)
	{
		printf("Search Successful\n");
		printf("Position=%d",loc);
	}
	else
	{
		printf("Search Unsuccessful");
	}
	getch();
	return 0;
}
