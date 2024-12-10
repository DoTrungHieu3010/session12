#include <stdio.h> 
int main(){
	int num; 
	long long giaithua(int number);
	printf("Nhap vao mot so nguyen: ");
	scanf("%d",&num);
	if(num<0) {
		printf("Loi khong hop le\n"); 
	}else{
		printf("Giai thua la %lld",giaithua(num));
	} 
return 0;	
} 
long long giaithua(int num){
	if(num == 0){
		return 1;
	}else{
		return num*giaithua(num-1);
	}
}
