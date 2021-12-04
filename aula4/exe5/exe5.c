#include <stdio.h> 
#include <string.h> 
#include "pilha.h" 
#include "fila1.h" //fila que aceita char*

int concha(char *c) {
	int cont=0;
	Pilha P = pilha(256);
	empilha(c[cont],P);
	cont++;
	do{
		while(!vaziap(P) && c[cont]==topo(P)){
				desempilha(P);
				cont++;
			}
		if(c[cont]!='\0'){
			empilha(c[cont],P);
			cont++;
		}
	}while(c[cont]!='\0');
	if(vaziap(P)) return 1;
	return 0;
}

void filtra(Fila F) { 
	int cont=0;
	char* exe;
	while(cont<20){
		exe=desenfileira(F);
		if(concha(exe)==1)
			printf("%s\n",exe);
		
		cont++;
	}		
}
int main(void) {
    Fila F = fila(20);    
	enfileira("AAAAAAAABAAABA",F);    
	enfileira("BBBBBBBBBBBBBB",F);    
	enfileira("ABBABBABBABB",F);    
	enfileira("AAABAAABBABAAA",F);    
	enfileira("ABAABAAAAAAAAA",F);    
	enfileira("AABAAAAAABAAAA",F);    
	enfileira("AAAABB",F);    
	enfileira("AABBBBAABAAB",F);    
	enfileira("ABAAAAAAAAAB",F);    
	enfileira("ABABBBABAB",F);    
	enfileira("BBBBBBBBBBBBBB",F);    
	enfileira("AABAABAAAA",F);    
	enfileira("AABAAABBBBBABB",F);    
	enfileira("BBBAAAAABA",F);    
	enfileira("BBBBBBBBBBBBBB",F);    
	enfileira("AAAAAAAAAAAABB",F);    
	enfileira("BAAAAABAAAAAAA",F);    
	enfileira("BBBBABBBBBBA",F);    
	enfileira("BBABABAAAAAABB",F);    
	enfileira("ABAABAABAB",F); 
	filtra(F); // deve exibir 12 conchas
    destroif(&F);    
	return 0; 
	} 
