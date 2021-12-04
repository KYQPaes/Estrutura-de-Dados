#include <stdio.h>
int soma_digitos(int n) {
	if( n<10) return n;
	return soma_digitos(n/10)+n%10;
	}
void super_digitos(int n){
	if(n<10){ printf("%i\n",n);return;}
	super_digitos(soma_digitos(n));
	return;
	}


int main(void) {
	int n;
	printf("Num? ");
	scanf("%d",&n);
	super_digitos(n);
	return 0;
	}
