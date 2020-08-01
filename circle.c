#include<stdio.h>
#include<conio.h>
void circle(float r,float p)
{
  float a,float peri;
  a=p*r*r;
  peri=2*p*r;
  printf("Area of circle = %f",a);
  printf("Perimeter of circle = %f",peri);
  
}
void main()
{
  clrscr();
  circle(10.8,3.14);
  getch();
}
