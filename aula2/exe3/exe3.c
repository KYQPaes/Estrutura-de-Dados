#include <stdio.h>
#include "pilha.h"
int main(void) {
	char c[81];
	Pilha P = pilha(81);
	printf("Cadeia? ");
	gets(c);
	int i=0; 
	while(c[i]){
		if(c[i]=='[' || c[i]=='{' || c[i]=='('){
			empilha(c[i],P);
		}else{
			break;
			}
		i++;
	}
	while(c[i]){
		if((topo(P)=='[' && c[i]!=']') || (topo(P)=='{' && c[i]!='}') || (topo(P)=='(' && c[i]!=')')){
			printf("Nao balanceada\n");
			destroip(&P);
			return 0;
		}
		desempilha(P);
		i++;
	}
	
	printf("balanceada\n");
	destroip(&P);
	return 0;
	}
