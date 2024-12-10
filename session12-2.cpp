#include <stdio.h>
int main(){
	void mang();
	mang();
return 0;
}
void mang(){
	printf("Mang cua ban la: ");
	int arr[3]= {1,2,3};
	int size = sizeof(arr) / sizeof(arr[0]);
	for(int i=0; i<size; i++){
		printf("%d",arr[i]);
	}
}
