#include<stdio.h>
#include<conio.h>
create(int a[3][3]);
display(int a[3][3]);
addition(int a[3][3],int b[3][3],int c[3][3]);

void main()
{
int a[3][3],b[3][3],c[3][3],i,j;
clrscr();
printf("enter the first array");
create(a);

display(a);
printf("enter the second array");
create(b);

display(b);
printf("matrix addition\n");
addition(a,b,c);
display(c);
getch();
}
create(int a[3][3])
{
int i,j;
printf("enter the first matrix elemnet");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
}
display(int a[3][3])
{
int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
}
addition(int a[3][3],int b[3][3],int c[3][3])
{
int i,j;
//int c[3][3];
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]+b[i][j];
//printf("\n");
}


}}