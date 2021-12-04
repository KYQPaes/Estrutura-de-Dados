#include <stdio.h>

void hanoi(int n,char A,char B,char C){
	if(n==1){ 
		printf("\nMova o disco 1 da base %c para a base %c",A ,B);
		return;
	}
	hanoi(n-1,A,C,B);
	printf("\nMova o disco %d da base %c para a base %c",n,A,B);
	hanoi(n-1,C,B,A);
}

main(){
	int n;
	printf("Quant. de discos: ");
	scanf("%d",&n);
	hanoi(n,'A','C','B');
	printf("\n");
	return 0;
}
