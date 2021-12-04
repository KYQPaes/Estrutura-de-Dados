#include <stdio.h>
#include "pilha.h"

int main(void) {
	char c[81];
	Pilha P = pilha(81);
	printf("Cadeia? ");
	gets (c);

	for(int i=0; c[i]; i++){
		empilha(c[i],P);
		if(c[i]==' '){
			while( !vaziap(P) ) printf("%c", desempilha(P));
		}
	}
	empilha(' ',P);
	while( !vaziap(P) )printf("%c", desempilha(P));
	
	printf("\n");
	destroip(&P);
	return 0;
}
