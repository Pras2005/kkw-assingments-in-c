#include<stdio.h>
#include<math.h>

int main()
{
float a,b,c,s,area;
  printf("enter side a: ");
   scanf("%f" ,&a); 
  printf("enter side b: ");
   scanf("%f" ,&b); 
  printf("enter side c: ");
   scanf("%f",&c); 

if(a==b && a==c)
{
 printf("the triangle in question is equilateral");
}
else if (a==b||a==c||b==c)
{ 
 printf("the triangle in question is isoceles triangle");
}
else if (a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
{
 printf("triangle is right angle triangle");
 }
 else 
 {
 printf("this is a scalene triangle");
}
s = (a+b+c)/2;
area = sqrt(s*(s-a)+s*(s-b)+s*(s-c));
printf("perimeter= %f",s*2);
printf("area=%f",area);

 
 return 0;
}
