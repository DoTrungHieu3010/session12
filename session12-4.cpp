#include <stdio.h>
int main(){
	int max();
	max();
return 0;	
}
int max(){
	int max;
	int arr[5]={1,2,3,4,5};
	int size = sizeof(arr) / sizeof(arr[0]);
	for(int i=0;i<size;i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	printf("Gia tri lon nhat la %d",max);
	return max;
}
