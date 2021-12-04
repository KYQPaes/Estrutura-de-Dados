#include <stdio.h>
#include "pilha.h"

int main(void) {
	char c[81];
	Pilha A = pilha(81);
	Pilha B = pilha(81);
	printf("Numeros? ");
	gets (c);
	
	empilha(c[0],A);
	for(int i=1; c[i]; i++){
		while(!vaziap(A)){
			if(topo(A)<c[i]){
				empilha(desempilha(A),B);
			}else{
				break;
			}
		}
		empilha(c[i],A);
		while(!vaziap(B)){
			empilha(desempilha(B),A);
		}
	}
	printf("Desempilhando A:\n");
	while(!vaziap(A))printf("%c", desempilha(A));
	printf("\n");
	destroip(&A);
	destroip(&B);
	return 0;
}
