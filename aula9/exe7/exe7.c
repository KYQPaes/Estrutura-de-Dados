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

void rem_todo(Item x, Lista*L) {
	do{
		while( *L != NULL && (*L)->item < x ) 
			L = &(*L)->prox;
		if( *L == NULL || (*L)->item > x ) return;
		Lista n = *L;
		*L = n->prox;
		free(n);
	}while(*L != NULL);
	}

Lista ins_rec(Item x, Lista *L){
	if(*L != NULL && (*L)->item < x)
		return ins_rec(x ,&(*L)->prox);
	*L = no(x,*L);
}


int main(void) {
	Lista I = NULL;
	ins_rec(4,&I);
	ins_rec(1,&I);
	ins_rec(3,&I);
	ins_rec(5,&I);
	ins_rec(2,&I);
	ins_rec(3,&I);
	ins_rec(1,&I);
	rem_todo(3,&I);
	rem_todo(1,&I);
	exibe(I);
	return 0;
	}
