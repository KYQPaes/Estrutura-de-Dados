#include<stdio.h>
#include<stdlib.h>
typedef int Item;
typedef struct no {
	Item item;
	struct no *prox;
	} *Lista;

Lista no(Item x, Lista p) {
	Lista n = malloc(sizeof(struct no));
	n->item = x;
	n->prox = p;
	return n;
	}

void exibe(Lista L) {
	printf("[");
	while( L != NULL ) {
		printf("%d",L->item);
		L = L->prox;
		if (L!=NULL){
			printf(",");
			}
		}
	printf("]");
	}

int tamanho(Lista L) {
	int t = 0;
	while( L ) {
		t++;L = L->prox;
		}
	return t; 
	}

void anexa(Lista *A, Lista B) {
	if( !B ) return;
	while( *A )
		A = &(*A)->prox;
	*A = B;
	}
void destroi(Lista *L) {
	while( *L ) {
		Lista n = *L;
		*L = n->prox;
		free(n);
		}
	}

int ultimo(Lista L){
	int t;
	while( L!=NULL ) {
		t = L->item;
		L = L->prox;
	}
	return t; 
	}

char* pertence(int x, Lista L){
	if(L->item==x)return "Sim";
	else if(L->prox==NULL){
			return "Nao";
		}
	return pertence(x,L->prox);
	}

void inversa(Lista L){
	Lista x;
	x=no(L->item,NULL);
	while(L->prox){
		L=L->prox;
		x=no(L->item,x);
	}
	exibe(x);
	}

int igual(Item x, Lista *L){
	while( *L != NULL ){
		if((*L)->item == x)
			return 1;
		L = &(*L)->prox;
		}
	return 0;
	}

void ins(Item x, Lista *L){
	
	while( *L != NULL && (*L)->item < x)
		L = &(*L)->prox;
	if(igual(x, L) != 1)
		*L = no(x,*L);
	}

int main(void) {
	Lista I = NULL;
	ins(4,&I);
	ins(1,&I);
	ins(3,&I);
	ins(5,&I);
	ins(2,&I);
	ins(3,&I);
	ins(5,&I);
	ins(4,&I);
	ins(1,&I);
	exibe(I);
	return 0;
	}
