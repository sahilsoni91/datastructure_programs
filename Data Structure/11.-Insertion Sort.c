/*11.-PROGRAM OF SORTING A LIST USING INSERTION SORT*/
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
	a[0]=0;
	for(k=2;k<=n;k++)
	{
		temp=a[k];
		j=k-1;
		while(temp<a[j])
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	printf("Sorted List=\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
	return 0;
}
