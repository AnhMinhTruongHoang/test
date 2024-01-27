#include<stdio.h>
#include<math.h>
#define MAX 100
void bai1(){
    int n;
    printf("nhap so n: ");
    scanf("%d",&n);
    int lc=0;
    int sum=0;
    while (n!=0){
        int du = n % 10; 
        sum+= du;
        n= n/10;
        lc++;
    }
   // printf("%d %d\n",sum,lc);
    float kq = (float)sum/lc;
    printf("%.2f",kq);

}
void bai2(){
    float chiSo;
    printf("nhap chi so nuoc:  ");
    scanf("%f",&chiSo);
    while (chiSo<=0){
        printf("yeu cau nhap lai\n");
        printf("nhap chi so nuoc:  ");
        scanf("%f",&chiSo);
    }    
    float sum=0;
    if (chiSo<=99)
        sum= chiSo* 3000;
    else 
        if (chiSo<150)
            sum= 99* 3000 + (chiSo-99)*4500;
        else            
            if (chiSo<200)
                sum= 99*3000+ 50 * 4500 + (chiSo-149)* 5500;
            else    
                sum= 99* 3000 + 50 *4500 + 50* 5500 + (chiSo-199)*6000; 
    printf("tong tien nuoc phai tra: %.2f d", sum);

}
void bai3(){
        int a,b;
    printf( "nhap so thu 1:");
    scanf("%d",&a);
    printf( "nhap so thu 2:");
    scanf("%d",&b);
    
    int n1,n2;
    if (a>b){
        n1=b;
        n2=a;
    }
    else {
        n1=a;
        n2=b;
    }    
    int i;
    int sum=0;
    for(i=n1;i<=n2;i++){
        if(i%3==0){
         printf("%d ",i);
            sum+=i;
        }
      
    }
    printf("\n");
    printf("%d",abs(sum));
}
void bai4(){
    int n;
    int a[MAX];
    printf( "Nhap kich thuoc mang:");
    scanf("%d",&n);

    int i;
    for(i=0;i<n;i++){
        printf( "Nhap a[%d]:",i+1);
        scanf("%d",&a[i]);
    }   
    int soMax=a[0];
    for(i=1;i<n;i++){
       if (soMax<a[i])
            soMax=a[i];
    }
    printf("phan tu lon nhat trong mang: %d",soMax);
        
}


int main(){
    int n;
    printf("chon bai: ");
    scanf("%d",&n);
    switch (n)
    {
    case 1: {  int n;
    printf("nhap so n: ");
    scanf("%d",&n);
    int lc=0;
    int sum=0;
    while (n!=0){
        int du = n % 10; 
        sum+= du;
        n= n/10;
        lc++;
    }
   // printf("%d %d\n",sum,lc);
    float kq = (float)sum/lc;
    printf("%.2f",kq);
}
        break;
    
    case 2: bai2();
        break;
    
    case 3: bai3();
        break;
    case 4:bai4();
        break;

    default:
        printf("Khong hop le ");
        break;
    }

}