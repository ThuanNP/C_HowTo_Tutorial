#include<stdio.h>

int main(){
	int a, b, sum, diff, product, quotient; // Khai bao bien nguyen
	printf("Nhap 2 so a,b: ");
	scanf("%d%d", &a, &b); //Nhap gia tri 2 so a va b
	sum = a+b; // Tong cua a va b
	diff = a-b;
	product = a*b;
	if(b!=0) {
		quotient = a/b;
	}	
	printf("summation: %d + %d = %d\n", a, b, sum);
	printf("subtraction: %d - %d = %d\n", a, b, diff);
	printf("multiplication: %d * %d = %d\n", a, b, product);
	if(b!=0) {
		printf("division: %d / %d = %d", a, b, quotient);
	}
	return 0;
}
