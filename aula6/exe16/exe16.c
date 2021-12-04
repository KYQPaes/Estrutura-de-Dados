#include <stdio.h>
#include <string.h>

int palindroma(char* c, int p, int u){
	if(c[p]!=c[u]){
		return 0;
		}
	palindroma(c,p+1,u-1);
	return 1;
	}

int main(void){
	char c[256];
	printf("Escreva algo: ");
	gets(c);
	if(palindroma(c,0,strlen(c)-1)==1) printf("Palindroma\n");
	else printf("Nao palindroma\n");
	return 0;
}
