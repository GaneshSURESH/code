#include<iostream.h>
#include<conio.h>
void main()
{
int i, no;
int fact=1;
clrscr();
cout<<"Enter the any no. : ";
cin>>no;

for(i=1;i<=no;i++)
{
fact=fact*i;
}
cout<<"Factorial: "<<fact;
getch();
}
