 #include <stdio.h>
 #define  tiso 0.007

int main(){
	int n;
	printf("nhap so tien gui:");
    scanf("%f", n);
    
    int thang=0;
    
    while (n<1000){
    	float lai =n*tiso;
    	n+=lai;
    	thang++;
	}
	printf("tien sau lai thang la:%f",thang,n);
    
    return 0;
}
 
 
