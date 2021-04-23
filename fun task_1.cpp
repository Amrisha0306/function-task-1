#include<stdio.h>
int sum_of_digit(int num)
{
	if (num==0)
	return 0;
	return(num%10 + sum_of_digit(num/10));
}
int main()
{
	int num,sum;
	printf("Input number:");
	scanf("%d",&num);
	sum=sum_of_digit(num);
	printf("Sum of digits :%d",sum);
	return 0;
}
