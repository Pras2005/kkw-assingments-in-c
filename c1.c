#include<stdio.h>
int main()
{
	float a,b,c,d,e,dis,sp,dp,tax,tp,lp;
	
	printf("\n Enter Mrp : $");
	scanf("%f",&a);
        printf("\n Enter Mrp : $");
	scanf("%f",&b);
	printf("\n Enter Mrp : $");
	scanf("%f",&c);
	printf("\n Enter Mrp : $");
	scanf("%f",&d);
	printf("\n Enter Mrp : $");
	scanf("%f",&e);
	printf("\n Enter DISCOUNT in PERCENT: ");
	scanf("%f",&dis);
	printf("\n Enter TAX in PERCENT : ");
	scanf("%f",&tax);
		
	dp=(a+b+c+d+e)-(dis*(a+b+c+d+e)/100);
	lp=(dp+(dp*tax)/100);

	printf("\n DISCOUNTED PRICE \t: $%f",dp);
	
	printf("\n AMOUNT TO BE PAID\t: $%f",lp);
	
	return 0;	
}
