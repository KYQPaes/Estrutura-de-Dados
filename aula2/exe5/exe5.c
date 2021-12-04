#include <stdio.h>
#include "pilha.h" //pilhadechar*
#include <string.h>
int main(void){
	Pilha P = pilha(5);
	char s[11];
	int n;
	for(int i=1;i<=3;i++){
		printf("? ");
		gets(s);
		n=strndup(s);
		empilha(n,P);
		}
	while(!vaziap(P)) printf("%s\n",desempilha(P));
	return 0;
	}
