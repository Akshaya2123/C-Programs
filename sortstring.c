#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
int i,j;
char num[10],temp[20];
int k,y,p1,p2,ptr;
char b[20][20],f;
FILE *fptr;
char ch,v;
do
{
clrscr();
printf("\n\t\t\t\tSORTING OF STRING");
a1:
printf("\nEnter the count of String:");
gets(num);
y=strlen(num);
k=atoi(num);
for(i=0;i<y;i++)
{
p1=isalpha(num[i]);
if(p1==8)
{
printf("\nInvalid");
goto a1;
}
}
for(i=0;i<k;i++)
{
printf("\nEnter the String %d :",i+1);
scanf("%s",&b[i]);
p2=isalpha(b[i]);
if(p2!=8)
{
printf("\nInvalid");
i=i-1;
}
}
t:
printf("\nType of sorting  :");
flushall();
scanf("%c",&ch);
if(ch=='a'||ch=='A')
{
for(i=0;i<k;i++)
{
for(j=i+1;j<k;j++)
{
if(strcmp(b[i],b[j])>0)
{
strcpy(temp,b[i]);
strcpy(b[i],b[j]);
strcpy(b[j],temp);
}
}
}
l:
printf("Do you want to Write the output in a text file:");
flushall();
scanf("%c",&f);
if(f=='y'||f=='Y')
{
fptr = fopen("e:\\student\\26931\\c\\program6.txt","w");
for(i=0;i<k;++i)
{
fprintf(fptr,"\nSORTED ELEMENTS IN ASCENDING ORDER");
fprintf(fptr,"%s\n",b[i]);
}
fclose(fptr);
}
else if(f=='n'||f=='N')
{
printf("\nSORTED ELEMENTS ASCENDING ORDER");
for(i=0;i<k;++i)
{
printf("\n%s",b[i]);
}
}
else
{
printf("\nenter valid input");
goto l;
}
}
else if(ch=='d'||ch=='D')
{
for(i=0;i<k;i++)
{
for(j=i+1;j<k;j++)
{
if(strcmp(b[i],b[j])<0)
{
strcpy(temp,b[i]);
strcpy(b[i],b[j]);
strcpy(b[j],temp);
}
}
}
x:
printf("Do you want to Write the output in a text file:");
flushall();
scanf("%c",&f);
if(f=='y'||f=='Y')
{
fptr = fopen("e:\\student\\26931\\c\\program6.txt","w");
for(i=0;i<k;++i)
{
fprintf(fptr,"\nSORTED ELEMENTS DESCENDING ORDER");
fprintf(fptr,"%d\n",b[i]);
}
fclose(fptr);
}
else if(f=='n'||f=='N')
{
printf("\nSORTED ELEMENTS DESCENDING ORDER");
for(i=0;i<k;++i)
{
printf("\n%s",b[i]);
}
}
else
{
printf("\nenter valid input");
goto x;
}
}
else
{
printf("\ninvalid input");
goto t;
}

i:
printf("\nDo you want to run the program again(y/n):");
flushall();
v=getchar();
}
while(v=='y'||v=='Y');
if(v=='n'||v=='N')
{
printf("\n\t\t\t\tPROGRAM ENDED");
printf("\n\t\t\t\t=============");
printf("\n\t\t\t  (press any key to exit)");
}
else
{
printf("\ninvalid input");
goto i;
}
getch();
return 0;
}

