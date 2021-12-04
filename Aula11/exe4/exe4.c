#include<stdio.h>
#include<stdlib.h>
#include<arv.h>

void exibe(Arv A,int n) {
	if( A==NULL ) return;
	exibe(A->dir,n+1);
	printf("%*s%d\n",3*n,"",A->item);
	exibe(A->esq,n+1);
	}

void exibe_crescente(Arv A) {
   if( A==NULL ) return;
   exibe_crescente(A->esq);
   printf(fmt,A->item);
   exibe_crescente(A->dir);
}



int main(void) {
	Arv I = NULL;
	Item x;
	while(1) {
		printf("Item? ");
		scanf("%d",&x);
		if( x<0 ) break;
		ins(x,&I);
		}
	exibe(I, 0);
	printf("\n em ordem: \n");
	exibe_crescente(I);

	printf("Item? ");
	scanf("%d",&x);
	if( busca(x,I) ) puts("Encontrado!");
	else puts("Inexistente!");
	return 0;
	}
