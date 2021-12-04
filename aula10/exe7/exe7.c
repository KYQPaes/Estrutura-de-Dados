#include<stdio.h>
#include<stdlib.h>
#include<arv.h>

void exibe(Arv A,int n) {
	if( A==NULL ) return;
	exibe(A->dir,n+1);
	printf("%*s%d\n",3*n,"",A->item);
	exibe(A->esq,n+1);
	}

int pertence(Arv A, int x){

	if(A==NULL) return 0;

	if(A->item == x){
		return 1;
	}
	
	if(pertence(A->dir, x)) return 1;
	return pertence(A->esq, x);;
}

int main(void) {
	Arv I = arv(arv(NULL,2,NULL),1,arv(NULL,3,arv(NULL,7,NULL)));
	printf("%i\n",pertence(I, 7));
	return 0;
	}
