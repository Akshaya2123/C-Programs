#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char v[8];
char b,u,g;
int c,h;
float d,e,f;
clrscr();
printf("\n\t\t\t\t FUEL BILLING");
do
{
j:
printf("\nEnter vehicle number:");
getch();
gets(v);
h=strlen(v);
if(h!=0)
{
if(h==8)
{
if(((v[0]=='A')&&(v[1]=='P'))||((v[0]=='K')&&(v[1]=='A'))||((v[0]=='K')&&(v[1]=='L'))||((v[0]=='M')&&(v[1]=='H'))||((v[0]=='T')&&(v[1]=='N')))
{
if(((v[2]>='0')&&(v[2]<='9'))&&((v[3]>='0')&&(v[3]<='9'))&&(v[2]!='0'||v[3]!='0'))
{
if(((v[4]>='0')&&(v[4]<='9'))&&((v[5]>='0')&&(v[5]<='9'))&&((v[6]>='0')&&(v[6]<='9'))&&((v[7]>='0')&&(v[7]<='9'))&&(v[4]!='0'||v[5]!='0'||v[6]!='0'||v[7]!='0'))
{
goto g;
}
else
{
printf("\nerror!!!! Last three numbers are invalid input(enter  value value between 0 to 9 in each index))");
goto j;
}
}
else
{
printf("\nerror!! The numbers after state code are invalid input(Enter value between 0 to 9 in each index))");
goto j;
}
}
else
{
printf("\nerror!!(Enter the correct state code(AP/KL/MH/KA/TN))");
goto j;
}
}
else
{
printf("\nerror!! (enter only 8 numbers)");
goto j;
}
}
else
{
printf("\nerror!! (null input is not accepted)");
goto j;
}
g:
printf("\nEnter the type of fuel(p/d)(petrol/diesel):");
getch();
b=getchar();
r:
printf("\nEnter the amount:");
scanf("%d",&c);
if((c>=50)&&(c<=10000))
{
if((b=='p'||b=='P'))
{
d=c/101.40;
e=c/75;
f=c/17.93;
}
else if((b=='d'||b=='D'))
{
d=c/91.43;
e=c/75;
f=c/17.93;
}
else
{
printf("\nerror (Enter correct fuel name(Petrol/Diesel))");
goto g;
}
}
else
{
printf("\nerror!!!(Enter amount between 50 to 10000)");
goto r;
}
printf("\n------------------------------------------------------------------------------");
printf("\t\t\tINDIAN OIL CORPORATION");
printf("\n\t\t35,Lakshmi amman koil street \n\t\tPerambur,chennai-600011");
printf("\n\tVehicle number :%s", v);
printf("\n\tType of fuel   :%c",b);
printf("\n\tFilled amount  :%d,(USD=%.2f,Ringgets=%.2f)",c,e,f);
if(b=='p'||b=='P')
{
printf("\n\tFilled quantity:%.2f litres(price per litre:Rs.101.40)",d);
}
else if(b=='d'||b=='D')
{
printf("\n\tFilled quantity:%.2f litres(price per litre:Rs.91.43)",d);
}
printf("\n\t\t\t Thank you!!! Welcome!!!");
s:
printf("\nDo you want to run the program again(y/n):");
getch();
u=getchar();
}
while(u=='y'||u=='Y');
if(u=='n'||u=='N')
{
printf("\n\t\t\t\tPROGRAM ENDED");
printf("\n\t\t\t\t=============");
printf("\n\t\t\t       (press any key)");
}
else
{
printf("\ninvalid input");
goto s;
}
getch();
return 0;
}


