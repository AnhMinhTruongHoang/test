#include <stdio.h>

int main(){
	
	int a , b;
	
	printf("nhap gia tri a,b:");
	scanf("%d", &a);
	scanf("%d", &b);
	
	int tong= a + b;
	printf("\ntinh tong:%d",tong);
	
	int hieu = a-b;
	printf("\nhieu: %d",hieu);
	
	float thuong = a/(float) b;
	printf("\nthuong: %f",thuong);
	
	int tich = a*b;
	printf("\ntich: %d",tich);
	
	return 0;
}


