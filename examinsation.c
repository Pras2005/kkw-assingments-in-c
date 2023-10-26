include<stdio.h>
int main()
{
int a,marks,max =0,min = 100,passcount = 0,failed;
printf("enter number of students");
scanf("%d",&a);
for (int i = 1; i<=a ;i++)
{printf("marks %d",i);
scanf("%d",&marks);
   if(marks>max)
     max= marks;
   
    if(marks<min)
      min=marks;
       
    if(marks>35)
       passcount++;
 }
failed = a-passcount;
printf("%d passed ", passcount);
printf("maximum marks obtained %d\n" , max);
printf("minimum marks obtainsed %d\n" ,min);
printf("number of failed students %d\n",failed);
return 0;

}
