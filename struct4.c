//struct
#include <stdio.h>
#include <string.h>
#define MAX 1000

struct docGia{
	char mdg[7];
	char name[20];
	char rent[10];
	int docs;
};

void disdocGia(struct docGia dg){
    printf("%s \t%s \t%s \t%d \n", dg.mdg,dg.name,dg.rent,dg.docs);
}

void inputdocGia(struct docGia *dg){
	fflush(stdin);
	printf("\nma doc gia: ");
	gets(dg->mdg);
	
	fflush(stdin);
	printf("\nten doc gia: ");
	gets(dg->name);
	
	fflush(stdin);
	printf("\nngay muon:");
	gets(dg->rent);
	
	fflush(stdin);
	printf("\nso tai lieu muon:");
	scanf("%d" , &dg->docs);
	
	
}



 
int main() {

    struct docGia dg[MAX];
    int n;
    printf("Nhap so luong doc gia: ");
    scanf("%d",&n);

    int i;
    for (i = 0; i<n; i++) {
        printf("\n==Nhap info doc gia :\n", i);
        inputdocGia(&dg[i]);
    }
    
    

	printf("\n==Danh sach doc gia muon tren 20 tai lieu:\n");
    for (i = 0; i < n; i++) {
        if (dg[i].docs > 20) {
            disdocGia(dg[i]);
        }
    }
	   
	    
    
    
    
    


    return 0;
}
