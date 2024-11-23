#include<stdio.h>
#include<conio.h>
int main()
{
char u;
int b;
int a;
float c;
do
{
clrscr();
printf("PROGRAM TO CONVERT INDIAN CURRENCY TO MULTINATIONAL CURRENCY");
printf("\n Enter the Indian currency value: ");
scanf("%d",&a);
printf("1.Singapore (dollars) \n");
printf("2.Malaysian (ringets) \n");
printf("3.Dubai (dirahm) \n");
printf("4.Austrailia(aud) \n");
printf("5.USA(usd) \n");
k:
printf("Enter a number between(1 to 5) \n");
flushall();
scanf("%d",&b);
if(b==1||b==2||b==3||b==4||b==5)
{
switch(b)
{
case 1:
c = a/55.17;
printf("\nThe converted value in Singaporean Dollars is :  %.2lf SD",c);
break;
case 2:
c=a/17.92;
printf("\nThe converted value in Malaysian Ringets is :  %.2lf Ringetts",c);
break;
case 3:
c=a/20.27;
printf("\nThe converted value in Dubai Dirahm is :  %.2lf Dirahm",c);
break;
case 4:
c=a/55.42;
printf("\nThe converted value in Australian Dollars is :%.2lf AUD",c);
break;
case 5:
c=a/74.56;
printf("\nThe converted value in USA Dollars is :$ %.2lf",c);
break;
}
}
else
{
printf("\ninvalid number (enter number between 1 to 5)");
goto k;
}
g:
printf("\nDO YOU WANT TO RUN THE PROGRAM AGAIN:");
u=getch();
scanf("%c",&u);
}
while((u=='y')||(u=='Y'));
if(u=='n'||u=='N')
{
printf("\n\t\t\tPROGRAM ENDED");
printf("\n\t\t\t=============");
printf("\n\t\t\tpress any key");
}
else
{
printf("\nerror!!invalid input");
goto g;
}
getch();
return 0;
}
