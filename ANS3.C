#include<stdio.h>
#include<conio.h>
main()
{
float a;
float b;
float ans;
clrscr();

printf("enter the value of a\n");
scanf("%f",&a);
printf("value of %.1f\n",a);

printf("enter the value of b\n");
scanf("%f",&b);
printf("value of %.1f\n",b);

ans=180-a-b;
printf("total value %.1f\n",ans);


getch();
}