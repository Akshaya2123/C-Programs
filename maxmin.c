#include<stdio.h>
#include<conio.h>
int main()
{
int num1,num2,num3,num4,num5;
char a,b;
do
{
clrscr();
printf("\t\t\t\tMAXIMUM AND MINIMUM");
printf("\nEnter number 1:");
scanf("%d",&num1);
printf("Enter number 2:");
scanf("%d",&num2);
printf("Enter number 3:");
scanf("%d",&num3);
printf("Enter number 4:");
scanf("%d",&num4);
printf("Enter number 5:");
scanf("%d",&num5);
if((num1>num2)&&(num1>num3)&&(num1>num4)&&(num1>num5))
{
printf("\nThe Maximum number is:%d",num1);
}
else if((num2>num1)&&(num2>num3)&&(num2>num4)&&(num2>num5))
{
printf("\nThe Maximum number is:%d",num2);
}
else if((num3>num1)&&(num3>num2)&&(num3>num4)&&(num3>num5))
{
printf("\nThe Maximum number is:%d",num3);
}
else if((num4>num1)&&(num4>num2)&&(num4>num3)&&(num4>num5))
{
printf("\nThe Maximum number is:%d",num4);
}
else if((num5>num1)&&(num5>num2)&&(num5>num3)&&(num5>num4))
{
printf("\nThe Maximum number is:%d",num5);
}
if((num1<num2)&&(num1<num3)&&(num1<num4)&&(num1<num5))
{
printf("\nThe Minimum number is :%d",num1);
}
else if((num2<num1)&&(num2<num3)&&(num2<num4)&&(num2<num5))
{
printf("\nThe Minimum number is :%d",num2);
}
else if((num3<num1)&&(num3<num2)&&(num3<num4)&&(num3<num5))
{
printf("\nThe Minimum number is :%d",num3);
}
else if((num4<num1)&&(num4<num2)&&(num4<num3)&&(num4<num5))
{
printf("\nThe Minimum number is :%d",num4);
}
else if((num5<num1)&&(num5<num2)&(num5<num3)&&(num5<num4))
{
printf("\nThe Minimum number is :%d",num5);
}
else if(num1=num2=num3=num4=num5)
{
printf("\nAll Numbers are equal");
}
else if(num1==0&&num2==0&&num3==0&&num4==0&&num5==0)
{
printf("\nAll Numbers are zero");
}
b:
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
goto b;
}
}
getch();
return 0;
}
