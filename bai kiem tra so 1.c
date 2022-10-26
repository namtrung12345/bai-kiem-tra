#include<stdio.h>

int main(){
	int n;
	printf("\nNhap so nguyen n: ");
	scanf("%d", &n);
	
	if(n<=0)
	printf("So da nhap khong thoa man; ");
	else {
		if(n%2==0){
			printf("So da nhap la so chan ");
			return 1; 
		} 
		else
		 printf("So da nhap la so le ");
		 return 0; 
	}   
	getch(); 
	
} 
