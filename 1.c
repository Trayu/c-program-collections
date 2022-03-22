#include<stdio.h>
int main()
{
char name[20];
float units,charge,total;
printf("enter name:");
gets(name);
printf("enter units\n");
scanf("%f",&units);
if(units >=1 && units <=200)
{
charge=0.8*units;
}
else if(units >200 && units <=300)
{
charge =(200*0.8)+((units-200)*0.9);
}
else if(units >300)
{
charge=(200*0.8)+(100*0.9)+((units -300)*1);
}
total= charge+100;
if(total >400)
{
total = total+(0.15*total);
}
printf("electricity bill\n");
printf("use name:%s\n",name);
printf("total charge=%2f\n",total);
return 0;
}
