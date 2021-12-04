#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "pilha.h"


int oper(char o, char x, char y) {
	switch(o) {
		case '!':
				if(x=='V'){
					return 'F';
				}else{
					return 'V';
					}
		case '&': 
				if(x=='V' && y=='V'){
					return 'V';
				}else{
					return 'F';
				}
		case '|':
				if(x=='F' && y=='F'){
					return 'F';
				}else{
					return 'V';
				}
	}
	printf("Operador invalido");
	return-1; // operadorinválido!}
}


char valor(char *e) {
	Pilha P = pilha(256);
	char x, y;
	for(int i=0; e[i]; i++)
		if( e[i]=='F' || e[i]=='V' ) empilha(e[i],P);
		else{
			x = desempilha(P);
			switch( e[i] ) {
				case'!': 
					empilha(oper('!',x,'J'),P);
					break;
				case'&':
					y = desempilha(P);
					empilha(oper('&',x,y),P);
					break;
				case'|':
					y = desempilha(P);
					empilha(oper('|',x,y),P);
					break;
				}
			}
	x=desempilha(P);
	destroip(&P);
	if(x=='V'){
		return 1;
	}else{ 
		return 0;
		}
	}

char *posfixa(char *e){
	static char s[256];
	int j = 0;
	Pilha P = pilha(256);
	for(int i=0; e[i]; i++)
		if( strchr("FV",e[i]) )	s[j++] = e[i];
		else if( strchr("!&|",e[i]) ) empilha(e[i],P);
		else if( e[i]==')') s[j++] = desempilha(P);
	s[j] = '\0';
	destroip(&P);
	return s;
}      

int main(void) {
	char e[256];
	int i=0;
	printf("Infixa? ");
	gets(e);
	printf("Posfixa: %s\n", posfixa(e));
	printf("Valor: %i\n", valor(posfixa(e)));
	i++;	
	return 0;
} 
//((!F)|(F&V))
