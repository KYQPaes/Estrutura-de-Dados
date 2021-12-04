#include<stdio.h>
#include<stdlib.h>
#include<arv.h>

void exibe(Arv A,int n) {
	if( A==NULL ) return;
	exibe(A->dir,n+1);
	printf("%*s%d\n",3*n,"",A->item);
	exibe(A->esq,n+1);
	}

void poda(Arv *A) {
   	if(*A == NULL) return;
	if(&(*A)->esq == NULL && &(*A)->dir == NULL){
		free(*A);
		*A=NULL;
		}

	&(*A)->esq = poda(&(*A)->esq); 
	&(*A)->dir = poda(&(*A)->dir);

	return *A;
	}

int main(void) {
	Arv I = arv(arv(NULL,2,NULL),1,arv(NULL,3,arv(NULL,7,NULL)));
	poda(&I);
	exibe(I,0);
	return 0;
	}
/*
#include<stdio.h>
#include<stdlib.h>
#include<arv.h>



int n;
int esqu;
int dire;

int altura(Arv A){
	if(A == NULL) return 0;
	else{
		int l=altura(A->esq);
		int r=altura(A->dir);

		if (l>r) return l+1;
		return r+1;
		}
} 

int main(void) {
	Arv I = arv(arv(NULL,2,NULL),1,arv(NULL,3,arv(NULL,4,NULL)));
	altura(I);
	exibe(I,0);
	printf("A quant e: %i\n", altura(I));
	return 0;
	}


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
*/

