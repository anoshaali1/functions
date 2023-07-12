//2.	Write a program in C to check a given number is even or odd using the function.
#include<stdio.h>
int oddeven(int num)
{
	int count;
	if(num%2==0)
	{
		count++;
	}
	return count;
}
int main()
{
	int n,odd_even;
	printf("enter a number:");
	scanf("%d",&n);
	odd_even=oddeven(n);
	if(odd_even==1)
	{
		printf("even");
	}
	else{
		printf("odd");
	}
}
