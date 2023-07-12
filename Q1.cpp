//1.	Write a program in C to swap two numbers using function.
#include<stdio.h>
void swapnum(int &num1,int &num2)
{
	int temp=num1;
	num1=num2;
	num2=temp;
}
int main(){
	int n1,n2,t;
	printf("enter first number:");
	scanf("%d",&n1);
	printf("ener second number:");
	scanf("%d",&n2);
	swapnum(n1,n2);
	printf("swapping: n1=%d,n2=%d",n1,n2);
}
