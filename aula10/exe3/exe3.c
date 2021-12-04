#include<stdio.h>
#include<stdlib.h>
#include<arv.h>

void exibe(Arv A,int n) {
	if( A==NULL ) return;
	exibe(A->dir,n+1);
	printf("%*s%d\n",3*n,"",A->item);
	exibe(A->esq,n+1);
	}
int n=0;

int soma(Arv A){
	if( A==NULL ) return 0;
	
	soma(A->dir);
	n+=A->item;
	soma(A->esq);
	}

int main(void) {
	Arv I = arv(arv(arv(NULL,7,NULL),2,NULL),1,arv(NULL,3,arv(NULL,4,NULL)));
	soma(I);
	exibe(I,0);
	printf("A quant e: %i\n", n);
	return 0;
	}
