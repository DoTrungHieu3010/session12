#include <stdio.h>
int shh(int n) {
	int sum;
    for (int i = 1; i <= n/2 ; i++) { 
        if (n % i == 0) {
            sum+=i; 
        }
        if(sum==n){
        	return 1;
		}
    }
    return 0; 
}
int main() {
    int a,b;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);
    if (shh(a)) {
        printf("%d la so hoan hao\n", a);
    } else {
        printf("%d khong phai la so hoan hao\n", a);
    }
    if (shh(b)) {
        printf("%d la so hoan hao\n", b);
    } else {
        printf("%d khong phai la so hoan hao\n", b);
    }
    return 0;
}
