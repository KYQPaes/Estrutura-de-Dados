#include<stdio.h>
#include<stdlib.h>
#include<arv.h>

void exibe(Arv A,int n) {
	if( A==NULL ) return;
	exibe(A->dir,n+1);
	printf("%*s%d\n",3*n,"",A->item);
	exibe(A->esq,n+1);
	}

void exibe_decrescente(Arv A) {
   if( A==NULL ) return;
	exibe_decrescente(A->dir);
	printf(fmt,A->item);
	exibe_decrescente(A->esq);
   
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
	exibe_decrescente(I);
	return 0;
	}
