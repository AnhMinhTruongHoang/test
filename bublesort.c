//#include <stdio.h>
//#include <string.h>
//#define MAX 1000
//
// void bubblesort (int arr[MAX], int n){
// 	int i;
// 	int j;
// 	int temp;
// 	
// 	
// 	for (i=0;i<n-1;i++){
// 		for(j= i+1;j<n;j++){
// 			if(arr[j]<arr[i]);
// 			int temp= arr[i];
// 			arr[i]= arr[j];
// 			arr[j]=temp;
// 			
//		 }
//		 hienThiMang(arr,n);
//		 
// 		
//	 }
//	 
// 	
// }
// 
// 
// 
// 
//int main() {
//
//    char str[MAX];
//    int n;
//    printf("Nhap chuoi: ");
//    scanf("%d", &n);
//    
//    printf("nhap mang");
//    
//    for (i=0;i<n-1;i++){
//    	printf("nhap mang:", )
//	}
//    
//    
//
//    Nhapmang(arr,n);
//    hienThiMang(arr,n);
//    bubblesort(arr,n);
//    
//    
//    
//    
//    
//
//
//    return 0;
//}


#include <stdio.h>
#define MAX 100
#define TRUE 1
#define FALSE 0

	
int inputArr(int arr[], int n){
		
	int i;
	for(i = 0; i < n; i++){
		printf("arr[%d] ", i);
		scanf("%d", &arr[i]);
	}
}
int displayArr(int arr[], int n){
	printf("nhap gia tri mang: \n");
	int i;
	for(i = 0; i < n; i++){
		printf("%d\t", arr[i]);
	}
}
void bubbleSort(int arr[], int n){
	int i,j;
	for(i = 0; i < n- 1; i++){
		for(j = i + 1; j < n; j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
}
void giamDan(int arr[], int n){
	int i, j;
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(arr[i] < arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
	
int main(){
	int arr[MAX], n;
	printf("nhap so luong phan tu mang: ");
	scanf("%d", &n);
	
	inputArr(arr, n);
	displayArr(arr, n);
	
	printf("\n");
	bubbleSort(arr, n);
	displayArr(arr, n);
	
	printf("\n");
	giamDan(arr, n);
	displayArr(arr, n);
	

	return 0;
}
