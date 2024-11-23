#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char x[25];
int a,b,c,y,z,u,v,w;
do
{
clrscr();
printf("\n\t\t\t\tPAY SLIP");
printf("\nEnter the employee name  :");
scanf("%s",&x);
printf("\nEnter the month(1-12)    :");
scanf("%d",&a);
printf("\nEnter year (2019 or 2020):");
scanf("%d",&b);
printf("\nEnter the basic salary   :");
scanf("%d",&c);
if(a<=10000)
{
y=c*0.2;
z=c*0.05;
u=c*0.1;
v=c*0.12;
w=c+y+z-u-v ;
}
else if((a>10000) && (a<=25000))
{
y=c*0.25;
z=c*0.05;
u=c*0.1;
v=c*0.15;
w=c+y+z-u-v;
}
else
{
y=c*0.3;
z=c*0.05;
u=c*0.1;
v=c*0.18;
w=c+y+z-u-v;
}
printf("\n\t\t\t\tPAYSLIP");
printf("\n\t\t\t\t=======");
printf("\nEnter employee name    :%s",strupr(x));
switch(a)
{
case 1:
printf("\nMonth & Year           :January,%d",b);
break;
case 2:
printf("\nMonth & Year           :Feburary,%d",b);
break;
case 3:
printf("\nMonth & Year           :March,%d",b);
break;
case 4:
printf("\nMonth & Year           :April,%d",b);
break;
case 5:
printf("\nMonth & Year           :May,%d",b);
break;
case 6:
printf("\nMonth & Year           :June,%d",b);
break;
case 7:
printf("\nMonth & Year           :July,%d",b);
break;
case 8:
printf("\nMonth & Year           :August,%d",b);
break;
case 9:
printf("\nMonth & Year           :September,%d",b);
break;
case 10:
printf("\nMonth & Year           :October,%d",b);
break;
case 11:
printf("\nMonth & Year           :November,%d",b);
break;
case 12:
printf("\nMonth & Year           :December,%d",b);
break;
}
printf("\nEnter the basic salary :%d",c);
printf("\nAllowances");
printf("\nHRA                    :%d",y);
printf("\nTA                     :%d",z);
printf("\nDeduction");
printf("\nPF                     :%d",u);
printf("\nESI                    :%d",v);
printf("\n---------------------------------------------------------------------");
printf("\n---------------------------------------------------------------------");
printf("\nNET SALARY             :%d",w);
printf("\n---------------------------------------------------------------------");
i:
printf("\nDO YOU WANT TO RUN THE PROGRAM AGAIN:");
a=getch();
flushall();
scanf("%c",&a);
}
while((a=='y')||(a=='Y'));
{
if(a=='n'||a=='N')
{
printf("\n\t\t\t\tPROGRAM ENDED");
printf("\n\t\t\t\t=============");
printf("\n\t\t\t    (Press any key to exit)");
}
else
{
printf("\nInvalid input");
goto i;
}
}
getch();
return 0;
}
