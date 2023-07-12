//4.	Ask user to enter a number and print its factorial using functions.
#include<stdio.h>
int factnum(int num)
{
	int fact=1;
	for(int i=num;i>=1;i--){
		fact=fact*i;
	}
	return fact;
}
int main(){
	int n,f;
	printf("enter a number:");
	scanf("%d",&n);
	f=factnum(n);
	printf("fact is %d",f);
}

