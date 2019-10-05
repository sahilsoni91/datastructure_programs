/*10.-PROGRAM OF SORTING A LIST USING SELECTION SORT*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],n,i,k,j,temp,min,loc;
	clrscr();
	printf("How Many Elements Do You Want=");
	scanf("%d,&n");
	printf("Enter Elements=");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(k=1;k<=n-1;k++)
	{
		min=a[k];
		loc=k;
		for(j=k+1;j<=n;j++)
		{
			if(min>a[j])
			{
				min=a[j];
				loc=j;
			}
		}
		temp=a[k];
		a[k]=a[loc];
		a[loc]=temp;
	}
	printf("Sorted List=\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
	return 0;
}
