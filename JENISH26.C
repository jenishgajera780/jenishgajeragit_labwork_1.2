#include<stdio.h>
#include<conio.h>

void main(){
int p,r,t,total;

clrscr();


printf("principal amount=");
scanf("%d",&p);
printf("rate per annum=");
scanf("%d",&r);
printf("time is year=");
scanf("%d",&t);
total=(p*r*t)/100;
printf("simple intrest is %d",total);

getch();
}