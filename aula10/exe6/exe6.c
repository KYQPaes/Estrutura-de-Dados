#include<stdio.h>
#include<stdlib.h>
#include<arv.h>

void exibe(Arv A,int n) {
	if( A==NULL ) return;
	exibe(A->dir,n+1);
	printf("%*s%d\n",3*n,"",A->item);
	exibe(A->esq,n+1);
	}

Arv clone(Arv A){
	if(A->esq==NULL && A->dir==NULL) return arv(NULL,A->item,NULL);
	else if(A->esq==NULL)
		return arv(NULL, A->item, clone(A->dir));
	else if(A->dir==NULL)
		return arv(clone(A->esq), A->item, NULL);
	else
		return arv(clone(A->esq), A->item, clone(A->dir));
} 

int main(void) {
	Arv I = arv(arv(NULL,2,NULL),1,arv(NULL,3,arv(NULL,7,NULL)));
	exibe(clone(I),0);
	return 0;
	}
