#include<stdio.h>
#include<stdlib.h>
#include<arv.h>

void emord(Arv A,int n) {
	if( A==NULL ) return;
	emord(A->esq,n+1);
	printf("%d ",A->item);
	emord(A->dir,n+1);
	}

int main(void) {
	Arv I = arv(arv(NULL,2,NULL),1,arv(NULL,3,arv(NULL,7,NULL)));
	emord(I, 0);
	return 0;
	}
