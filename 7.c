#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],p,q,n,m,i,j,k;
printf("enter order of first matrix:");
scanf("%d%d",&p,&q);
printf("enter order of second matrix:");
scanf("%d%d",&n,&m);
if(q!=n)
{
printf("multiplication not possible\n");
return-1;
}
printf("enter first matrix\n");
for(i=0; i<p; i++)
{
for(j=0; j<q; j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter second matrix\n");
for(i=0; i<n; i++)
{
for(j=0; j<m; j++)
{
scanf("%d",&b[i][j]);
}
}
printf("first matrix\n");
for(i=0; i<p; i++)
{
for(j=0; j<q; j++)
{
printf("%dlt",a[i][j]);
}
printf("\n");
}
printf("second matrix\n");
for(i=0; i<p; i++)
{
for(j=0; j<q; j++)
{
printf("%dlt",b[i][j]);
}
printf("\n");
}
printf("resultant matrix\n");
for(i=0; i<p; i++)
{
for(j=0; j<q; j++)
{
printf("%dlt",c[i][j]);
}
printf("\n");
}
return 0;
}

