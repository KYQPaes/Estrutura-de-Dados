#include<stdio.h>
#include<stdlib.h>
#include<arv.h>

void preord(Arv A,int n) {
	if( A==NULL ) return;
	printf("%d ",A->item);
	preord(A->esq,n+1);
	preord(A->dir,n+1);
	}

int main(void) {
	Arv I = arv(arv(NULL,2,NULL),1,arv(NULL,3,arv(NULL,7,NULL)));
	preord(I, 0);
	return 0;
	}
