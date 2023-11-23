#include <stdio.h>
int main(){
    int row,col,sum=0;
    printf("Nhap so dong va so cot cua mang 2 chieu:");
    scanf("%d%d", &row, &col);
    int numbers[row][col];
    int choice;
    int m,n;
    int max = numbers[0][0];
  	int min = numbers[0][0];
  	int sum1 = 0;
  	int sum2 = 0;
  	int sum3 = 1;
 	float tb=0.00;
 	int count = 0;
    do{
		printf("\n                         Menu");
	printf("\n1. Nhap so phan tu can nhap va gia tri cac phan tu");
	printf("\n2. In gia tri cac phan tu cua mang theo ma tran");
	printf("\n3. In gia tri cac phan tu le và tinh tong");
	printf("\n4. In ra cac phan tu nam tren duong bien va tinh tich");
	printf("\n5. In ra cac phan tu là so nguyen to trong mang và tinh tong");
	printf("\n6. in ra gia tri lon nhat va nho nhat trong mang");
	printf("\n7. Them mot phan tu vào vi tri chi dinh");
	printf("\n8. in ra dong co tong gia tri lon nhat");
	printf("\n9. thoat");
	printf("\nnhap lua chon can nhap: ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
    	for (int i = 0; i < row; i++){
        	for (int j = 0; j < col; j++){
           		printf("numbers[%d][%d]=",i,j);
            	scanf("%d",&numbers[i][j]);
        		}
   			}
   			break;
   		case 2:
   			for(int i = 0; i < row ; i++){
    			for (int j=0; j < col; j++){
      				printf("%d\t" , numbers[i][j]);
    				}
    				printf("\n");
  				}
  			break;
  		case 3:
  			for (int i = 0; i < row; i++){
        		for (int j = 0; j < col; j++){
            		if (numbers[i][j] % 2 != 0){
                		sum+=numbers[i][j];
                		printf("numbers[%d][%d]=%d\n",i,j,numbers[i][j]);
            			}
        			}
    			}
    		printf("Tong cua cac phan tu do là %d", sum);
    		break;
    	case 4:
				for (int i = 0; i < row; ++i) {
                        for (int j = 0; j < col; ++j) {
                            if (i == 0 || j == 0 || i == row - 1 || j == col - 1) {
                                printf("numbers[%d][%d]=%d\n",i,j,numbers[i][j]);
                                sum3 *= numbers[i][j];
                            }
                        }
                    }
                printf("tich cac phan tu duong bien la:%d\n",sum3);
                break;
		case 5:
			for(int i = 0; i < row; i++) {
     			for(int j = 0; j < col; j++){
         			if (i == j){
         				printf("numbers[%d][%d]=%d\n",i,j,numbers[i][j]);
         				sum = sum + numbers[i][j];
         				break;
					}
      			}
			}
			
			for(int i=0; i<row; i++){
        		for(int j=0; j<col; j++){		
            		if(j == col-1-i){
					printf("numbers[%d][%d]=%d\n",i,j,numbers[i][j]);
         			sum = sum + numbers[i][j];
         			break;
					}
				}
			}
			printf("\ntong duong cheo chinh va phu cua ma tran la:%d",sum);
			break;
		case 6:
  			for (int i = 0; i < row; i++){
    			for (int j = 0; j < col; j++){
      				printf("numbers[%d][%d]=",i,j);
      				scanf("%d", &numbers[i][j]);
    			}
  			}
  			for (int i=0; i<row; i++){
  				for (int j=0; j<col; j++){
  					if (numbers[i][j]>max){
  						max = numbers[i][j];
					}
					if (numbers[i][j]<min){
						min = numbers[i][j];
					}
	  			}
  			}
  			printf("\ngia tri lon nhat trong mang la: %d, gia tri nho nhat trong mang la: %d",max,min);
  			break;
  	 	case 7: 
			for (int i = 0; i < row; i++){
    			for (int j = 0; j < col; j++){
      				printf("numbers[%d][%d]=",i,j);
      				scanf("%d", &numbers[i][j]);
    			}
  			}
  	 		for (int i=0; i < row; i++){
  				for (int j=0; j<col; j++){
  					sum = sum + numbers[i][j];
	 			}		
  			}		
  			tb = sum/(row*col);
  			printf("\ntrung binh la: %f",tb);
  			for ( int i=0; i<row; i++){
  				for (int j=0; j<col; j++){
  					if (numbers[i][j]==tb){
  						count++;
					}
				}
			}
			printf("\nco %d bang voi gia tri tb",count); 
  			break;
  		case 8: 
  			for (int i = 0; i < row; i++){
    			for (int j = 0; j < col; j++){
      				printf("numbers[%d][%d]=",i,j);
      				scanf("%d", &numbers[i][j]);
    				}
  				}
  			for (int i=0; i<row; i++){
  				for (int j=0; j<col; j++){
  					if (i==0){
  						sum1=sum1+numbers[i][j];
						}
						else if(i==1){
							sum2=sum2+numbers[i][j];
						}
					}	  
				}
			printf("tong cua hang 1 la: %d",sum1);
			printf("\ntong cua hang 2 la: %d", sum2);
			if (sum1 > sum2){
				printf("\nhang 1 lon hon hang 2");
			}
				else if (sum1 < sum2){
					printf("\nhang 2 lon hon hang 1");
			}
				else {
					printf("\nhang 1 bang hang 2");
			}
			break;	
		case 9:
			printf("thoat");
			break;
    		}
	}while(choice != 9);
}
