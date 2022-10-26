#include<stdio.h>

int main(){
	int isEvennumber, n, m;
	printf("Enter a number: ");
	scanf("%d%d", &n, &m);
	
	for(isEvennumber = n ;isEvennumber < m; isEvennumber++){
		if(isEvennumber%2 == 0){
			
			printf("\nThe even number between %d and %d: %d",n , m, isEvennumber );
		}
		
	}
    return 0;
}


