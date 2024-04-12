#include<stdio.h>
#include<conio.h>
main()
{
float b;
float h;
float tri;

clrscr();
 printf("enter the value of b\n");
 scanf("%f",&b);

 printf("enter the value of h\n");
 scanf("%f", &h);

tri=0.5*b*h;
printf("tri value\n%.2f",tri);



getch();
}
