#include <stdio.h>

int main(void){
	int n, f;
	printf("numero?");
	scanf("%d", &n);
	f = 1;
	for(int i=1; i<=n; i++) f *= i;
	printf("Fatorial: %d\n", f);
	return 0;
}
