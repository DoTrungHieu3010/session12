#include <stdio.h>
int main(){
	int n,m;
	int arr[100][100];
		khaibao(arr,&n,&m);
		printf("mang da nhap la :\n");
	for(int i=0; i<n ; i++){
		for(int j=0; j<m ; j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n"); 
	}
	return 0;
}
void khaibao(int arr[100][100] , int *n,int *m){ 
	printf("Nhap so cot :");
	scanf("%d", n);
	printf("Nhap so hang:");
	scanf("%d", m);
	for(int i=0; i< *n; i++){
		for(int j=0; j< *m ;j++){
			printf("Nhap phan tu thu [%d][%d]: ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
}
