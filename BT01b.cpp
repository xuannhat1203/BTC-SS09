#include<stdio.h>
int main(){
	int size =26;
	int array[size] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19} ;
	int sum = 0;
	int max = array[0];
	int min = array[0];
	int find;
	int count = 0;
	printf("                         Menu");
	printf("\n1. Nhap so phan tu can nhap v� gi� tri c�c phan tu");
	printf("\n2. In ra gi� tri c�c phan tu dang quan l�");
	printf("\n3. In ra gi� tri c�c phan tu chan v� t�nh tong");
	printf("\n4. In ra gi� tri lon nhat v� nho nhat trong mang");
	printf("\n5. In ra c�c phan tu l� so nguy�n to trong mang v� t�nh tong");
	printf("\n6. Nhap v�o mot so v� thong k� trong mang c� bao nhi�u phan tu c� gi� tri nhu vay");
	printf("\n7. Th�m mot phan tu v�o vi tr� chi dinh");
	printf("\n8. Thoat");
	int number;
	printf( \"\nnhap dieu ban muon: ");
	scanf("%d", &number);
	switch(number)
	{
		case 1: 
			for (int i=19; i<size; i++){
				printf ("Nhap phan tu thu [%d]: ", i);
				scanf ("%d", &array[i]);
			}
			break;
		case 2:
			for (int i=0; i<size;i++){
				printf ("phan tu thu [%d] trong mang la: %d\n", i, array[i]);
			}
			break;
		case 3:
			for (int i=0;i<size;i++){
				if (array[i]%2==0){
					printf("%d\n",array[i]);
					sum = sum + array[i];
				}
			}
			printf("tong la: %d", sum);
			break;
		case 4:
			for (int i=0 ;i<size;i++){
				if (array[i] > max){
					max = array[i];
				}else if (array[i]<min){
					min = array[i];
				}
			}
			printf("\ngia tri lon nhat trong mang la: %d\ngia tri nho nhat trong mang la: %d",max,min);
			break;
		case 6:
			printf("nhap 1 so tuy y: ");
			scanf("%d", &find);
			for (int i=0; i<size; i++){
				if (array[i]==find){
					count++;
				}
			}
			printf("co %d gia tri giong gia tri dang tim kiem", count); 
			break;
		case 7:
			int index;
			printf("\nnhap vi tri trong mang: ");
			scanf("%d", &index);
			int value;
			printf("\nnhap gia tri muon them vao mang: ");
			scanf("%d", &value);
			array[index]=value;
			size++;
			for (int i=0; i<size;i++){
				printf("%d\n", array[i]);
			}
			break;
		case 8:
			printf("thoat");
			break;		
	}
}
