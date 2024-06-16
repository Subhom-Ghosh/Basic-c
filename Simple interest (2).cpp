#include<stdio.h>
int main()
{
  float p,r,t,SI;
  printf("Enter Principal balance ");
  scanf("%f",&p);
  printf("Enter Rate of interest ");
   scanf("%f",&r);
  printf("Enter time ");
   scanf("%f",&t);
   SI=(p*r*t)/100;
   printf("Simple interest = %f",SI);
   return 0;
}
		
