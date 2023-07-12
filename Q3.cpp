//3.	Write a program in C to check whether a number is a prime number or not using the function
#include<stdio.h>
int main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	int count=1;
	int divisor=0;
	while(count<=num);
	{
		if(num%count==0){
			divisor++;
		}
		{
			count++;
		}
		if(divisor==2)
		{
			printf("%d is prime number",num);
		}
		else{
			printf("%d is not prime number",num);
		}
	}
}

