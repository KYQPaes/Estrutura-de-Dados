#include <stdio.h>
int soma_digitos(int n) {
	if( n<10) return n;
	return soma_digitos(n/10)+n%10;
	}
int main(void) {
	int n;
	printf("Num? ");
	scanf("%d",&n);
	printf("%i\n",soma_digitos(n));
	return 0;
	}
