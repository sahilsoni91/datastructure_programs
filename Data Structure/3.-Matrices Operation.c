/*3.-PROGRAM OF APPLYING MATRICES OPERATION ON TWO DIMENTIONAL ARRAY*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a[10][10],b[10][10],c[10][10],d[10][10];
	int i,j,p,q,m,n,k,choice;
	clrscr();
	printf("Enter Rows Of First Matrix=");
	scanf("%d",&p);
	printf("Enter Columns Of First Matrix=");
	scanf("%d",&q);
	printf("Enter Rows Of Second Matrix=");
	scanf("%d",&m);
	printf("Enter Columns Of Second Matrix=");
	scanf("%d",&n);
	printf("Enter Elements Of First Matrix=");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter Elements Of Second Matrix=");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("1-Addition 2-Subtraction 3-Transpose 4-Multiplication\n");
	printf("Enter Your Choice=");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1: //Addition
		{
			printf("Matrix Addition\n");
			if(p==m&&q==n)
			{
				for(i=0;i<p;i++)
				{
					for(j=0;j<q;j++)
					{
						c[i][j]=a[i][j]+b[i][j];
						printf("%d\t",c[i][j]);
					}
					printf("\n");
				}
			}
			else
			{
				printf("Rows Or Columns Are Not Equal");
			}
		}
		break;
		case 2: //Subtraction
		{
			printf("Matrix Subtraction\n");
			if(p==m&&q==n)
			{
				for(i=0;i<p;i++)
				{
					for(j=0;j<q;j++)
					{
						c[i][j]=a[i][j]-b[i][j];
						printf("%d\t",c[i][j]);
					}
					printf("\n");
				}
			}
			else
			{
				printf("Rows Or Columns Are Not Equal");
			}
		}
		break;
		case 3: //Transpose
		{
			printf("Transpose Of First Matix\n");
			for(i=0;i<p;i++)
			{
				for(j=0;j<q;j++)
				{
					c[i][j]=a[j][i];
					printf("%d\t",c[i][j]);
				}
				printf("\n");
			}
			printf("Transpose Of Second Matix\n");
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					d[i][j]=b[j][i];
					printf("%d\t",d[i][j]);
				}
				printf("\n");
			}
		}
		break;
		case 4: //Multiplication
		{
			if(q==m)
			{
				for(i=0;i<p;i++)
				{
					for(j=0;j<n;j++)
					{
						c[i][j]=0;
						for(k=0;k<q;k++)
						{
							c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
						}
					}
				}
				printf("Product Of Matrices\n");
				for(i=0;i<p;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("%d\t",c[i][j]);
					}
					printf("\n");
				}
			}
			else
			{
				printf("Multiplication Of Matrices Not Exist");
			}
		}
		break;
		default: //Choice Not Exist
			printf("Please Enter Right Choice");
	}
	getch();
	return 0;
}
