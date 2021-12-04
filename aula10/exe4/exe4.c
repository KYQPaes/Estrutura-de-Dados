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

int folhas(Arv A){
	if(A == NULL) return 0;
	
	if(A->esq == NULL && A->dir == NULL){
		return 1;
		} else {
			return folhas(A->esq) + folhas(A->dir);
		}
} 

int main(void) {
	Arv I = arv(arv(NULL,2,NULL),1,arv(NULL,3,arv(NULL,4,NULL)));
	exibe(I,0);
	printf("A quant e: %i\n", folhas(I));
	return 0;
	}
