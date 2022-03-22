#include<stdio.h>
#include<math.h>
#define PI 3.142857
int main()
{
float sum, term, num,den, x, deg;
int i;
printf("enter degree:");
scanf("%f", &deg);
x=deg*(PI/180.0);
num=x;
den=1.0;
term=x;
sum=x;
i=1;
do
{
i=i+2;
num=-num*x*x;
den=den*i*(i-1);
term=num/den;
sum=sum+term;
}
while(fabs(term)>=0.0001);
printf("inbuilt sin(%2f)=%2f\n",deg,sin(x));
printf("user computed sin(%2f)=%2f",deg,sum);
return 0;
}
