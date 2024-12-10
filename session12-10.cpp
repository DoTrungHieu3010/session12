 #include<stdio.h>
int arr[100];
int n;
void displayMenu();
void FsubMenu();
void SsubMenu();
void addIndex();
void fixIndex();
void deleteIndex();

int main(){
	int choice;
	displayMenu();
	do {
		printf("Nhap lua chon cua ban: ");
		scanf("%d", &choice);
		if(choice>0&&choice<=8){
			switch(choice){
				case 1:
					printf("Nhap so phan tu trong mang: ");
					scanf("%d", &n);
					for(int i=0;i<n;i++){
						printf("Nhap vao phan tu arr[%d]= ", i);
						scanf("%d", &arr[i]);
					}
					break;
				case 2:
					printf("Cac phan tu dang quan ly la: \n");
					for(int i=0;i<n;i++){
						printf("arr[%d]= %d\n", i, arr[i]);
					}
					break;
				case 3:
					addIndex();
					break;
				case 4:
					fixIndex();
					break;
				case 5:
					deleteIndex();
					break;
				case 6:
					
					break;
				case 8:
					return 0;
					break;
			}
		}else{
			printf("Khong hop le!!!\n");
		}
	}while(1);
	return 0;
}
//
void displayMenu(){
	printf("\tMENU\n");
	printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
	printf("2. In ra gia tri cac phan tu dang quan ly\n");
	printf("3. Them phan tu vao vi tri chi dinh\n");
	printf("4. Sua phan tu o vi tri chi dinh\n");
	printf("5. Xoa mot phan tu o vi tri chi dinh\n");
	printf("6. Sap xep cac phan tu\n");
	printf("7. Tim kiem phan tu nhap vao\n");
	printf("8. Thoat\n");
}
//
void FsubMenu(){
	printf("a.Giam dan\n");
	printf("b.Tang dan\n");
}
//
void SsubMenu(){
	printf("a. Tim kiem tuyen tinh\n");
	printf("b. Tim kiem nhi phan\n");
}
//
void addIndex(){
	int pos, value;
	int check=0;
	printf("Nhap vao gia tri muon them: ");
	scanf("%d", &value);
	printf("Nhap vao vi tri muon them: ");
	scanf("%d", &pos);
	do{	
		if(pos<0||pos>n){
			printf("Gia tri nhap vao khong hop le!\n");
			printf("Vui long nhap lai: ");
			scanf("%d", &pos);
		}else{
			break;
		}
	}while(1);
	for(int i=n;i>=pos-1;i--){
		arr[i+1]=arr[i];
	}
	arr[pos-1]=value;
	n++;
	printf("Mang sau khi them la:\n");
	for(int i=0;i<n;i++){
		printf("arr[%d]= %d\n", i, arr[i]);
	}
}
//
void fixIndex(){
	int pos, value;
	printf("Nhap gia tri muon sua: ");
	scanf("%d", &value);
	printf("Nhap vi tri muon sua: ");
	scanf("%d", &pos);
	do{	
		if(pos<0||pos>n){
			printf("Gia tri nhap vao khong hop le!\n");
			printf("Vui long nhap lai: ");
			scanf("%d", &pos);
		}else{
			break;
		}
	}while(1);
	arr[pos-1]=value;
	printf("Mang sau khi them la:\n");
	for(int i=0;i<n;i++){
		printf("arr[%d]= %d\n", i, arr[i]);
	}
}
//
void deleteIndex(){
	int pos;
	printf("Nhap vi tri muon xoa: ");
	scanf("%d", &pos);
	do{	
		if(pos<0||pos>n){
			printf("Gia tri nhap vao khong hop le!\n");
			printf("Vui long nhap lai: ");
			scanf("%d", &pos);
		}else{
			break;
		}
	}while(1);	
	for(int i=pos,i<n,i++){
		arr[i]=arr[i+1];
	}
	n--;
	printf("Mang sau khi them la:\n");
	for(int i=0;i<n;i++){
		printf("arr[%d]= %d\n", i, arr[i]);
	}
}
//

