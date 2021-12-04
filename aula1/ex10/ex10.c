#include <stdio.h>

void troca(int a, int b){
	int z=a;
	a=b;
	b=z;
	printf("a=%d, b=%d\n",a,b);
}

int main(void){
	int a=5, b=8;
	troca(a,b);
	return 0;
}
