#include <stdio.h>
#include <string.h>
#define MAX 1000

struct HocVien{
	char ten[MAX];
	int tuoi;
	char gt;
	float ds;
};

void displayHV (struct HocVien hv){
	printf("%s \t%d \t%c \t%f", hv.ten, hv.tuoi, hv.gt, hv.ds);
	
}

void nhap(struct HocVien *hv){
	
	fflush(stdin);
	
	printf("nhap :");
	gets(hv->ten);
	fflush(stdin);
	
	printf("nhap nam sinh:");
	scanf(" %d", &hv->tuoi);
	
	printf("nhap gioi tinh:");
	scanf(" %c", hv->gt);
	
	printf("nhap diem:");
	scanf(" %f", hv->ds);
}

 
 
 
int main() {
	struct HocVien hvs[MAX];
	int n;
	printf("nhap so luong hoc vien: ");
	scanf("%d",n);
	
	int i;
	for (i=0;i<n;i++){
		printf(" nhap info hv %d: \n", i);
		displayHV(hvs[i]);
	}
	
	
	for (i=0;i<n;i++){
		displayHV(hvs[i]);
	}
	
	
	
	
	
    return 0;
    
}

