/*5.-PROGRAM OF SEARCHING AN ELEMENT USING BINARY SEARCH*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],n,i,item,first,last,mid;
	clrscr();
	printf("How Many Elements Do You Want=");
	scanf("%d",&n);
	printf("Enter Elements In Sorted Way=");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter The Item To Be Searched=");
	scanf("%d",&item);
	first=1;
	last=n;
	mid=(first+last)/2;
	while(first<=last&&a[mid]!=item)
	{
		if(item>a[mid])
		{
			first=mid+1;
		}
		else
		{
			last=mid-1;
		}
		mid=(first+last)/2;
	}
	if(a[mid]==item)
	{
		printf("Search Successful\n");
		printf("Position=%d",mid);
	}
	else
	{
		printf("Search Unsuccessful");
	}
	getch();
	return 0;
}
