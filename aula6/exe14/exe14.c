#include <stdio.h>
int cont=0;
void binario(int n) {
	if(n<2){ 
		printf("%d",n);
		cont++;
	}else{
		binario(n/2);
		printf("%d",n%2);
		cont++;
		}
	}
int main(void) {
	int n;
	printf("Num? ");
	scanf("%d",&n);
	binario(n);
	printf("\n%i",cont);
	return 0;
	}
