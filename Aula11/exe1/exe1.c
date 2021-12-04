#include<stdio.h>
#include<stdlib.h>
#include<arv.h>

void exibe(Arv A,int n) {
	if( A==NULL ) return;
	exibe(A->dir,n+1);
	printf("%*s%d\n",3*n,"",A->item);
	exibe(A->esq,n+1);
	}


int main(void) {
	Arv I = arv(arv(arv(arv(NULL,0,arv(NULL,1,NULL)),2,arv(NULL,3,NULL)),4,arv(arv(NULL,5,NULL),6,NULL)),7,arv(arv(NULL,8,arv(arv(NULL,9,NULL),10,NULL)),11,NULL));
	exibe(I,0);
	return 0;
	}
