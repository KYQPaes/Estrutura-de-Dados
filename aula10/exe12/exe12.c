#include<stdio.h>
#include<stdlib.h>
#include<arv.h>

void exibe(Arv A,int n) {
	if( A==NULL ) return;
	exibe(A->dir,n+1);
	printf("%*s%d\n",3*n,"",A->item);
	exibe(A->esq,n+1);
	}

void des(Arv *A) {
   if( *A == NULL ) return;
   des(&(*A)->esq);
   des(&(*A)->dir);
   free(*A);
   *A = NULL;
}

int main(void) {
	Arv I = arv(arv(NULL,2,NULL),1,arv(NULL,3,arv(NULL,7,NULL)));
	des(&I);
	exibe(I,0);
	return 0;
	}
