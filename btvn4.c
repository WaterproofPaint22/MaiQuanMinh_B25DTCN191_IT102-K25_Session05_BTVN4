#include <stdio.h>
int main(){
	int a;
	float b;
	printf("Thu nhap cua ban (don vi: trieu dong) la: ");
	scanf("%d",&a);
	if (a<0){
		printf("\nThu nhap cua ban phai la so duong.");
	}else if(a<=5){
		b = a * ((float)5 / 100);
		printf("Thue phai dong la: %.2f trieu dong.", b);
	}else if(a>5 && a<=10){
		b = a * ((float)10 / 100);
		printf("Thue phai dong la: %.2f trieu dong.", b);
	}else if(a>10){
		b = a * ((float)15 / 100);
		printf("Thue phai dong la: %.2f trieu dong.", b);
	}
	return 0;
}
	
