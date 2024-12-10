#include<stdio.h>
int main(){
	int calculateSum();
	calculateSum();
	return 0;
}
int calculateSum(){
	int num1, num2, sum;
	printf("Nhap so thu nhat: ");  
	scanf("%d", &num1);
	printf("Nhap so thu hai: ");
	scanf("%d", &num2);
	sum = num1+num2;
	printf("Tong cua hai so la %d", sum);
	return sum;
}
