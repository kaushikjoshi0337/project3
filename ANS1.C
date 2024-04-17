#include<stdio.h>
#include<conio.h>
main()
{
float c;
float ans;
clrscr();

printf("enter the value of a\n");
scanf("%f",&c);
printf("value of %f\n",c);

ans=(c*9/5)+32;
printf("total value%.1f",ans);
getch();
}