/*9.-PROGRAM OF SORTING A LIST USING BUBBLE SORT*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],n,i,k,j,temp;
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
		j=1;
		while(j<=n-k)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			j=j+1;
		}
	}
	printf("Sorted List=\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
	return 0;
}
