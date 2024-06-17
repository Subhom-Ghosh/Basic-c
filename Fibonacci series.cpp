#include<stdio.h>
int main()
{
	int first,second,next,i,N;
	printf("Enter the value of N: ");
	scanf("%d",&N);
	                                                                                                
	for(i=1;i<=N;i++)
	{
		printf("\n%d",first);
	
		next=first+second;
		first=second;
		second=next;
	}
	return 0;
}
