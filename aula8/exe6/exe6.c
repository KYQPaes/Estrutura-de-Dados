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

int main(void) {
	Lista H = no(4,no(2,NULL));
	Lista I = no(3,no(1,no(5,NULL)));
	printf("H = "); exibe(H);
	printf("I = "); exibe(I);
	printf("Pressione enter"); getchar();
	anexa(&H,I);
	printf("H = ");exibe(H);
	printf("I = ");exibe(I);
	destroi(&H);destroi(&I);
	return 0;
	}
