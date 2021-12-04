#include<stdio.h>
#include<stdlib.h>
#include<arv.h>

void exibe(Arv A,int n) {
	if( A==NULL ) return;
	exibe(A->dir,n+1);
	printf("%*s%d\n",3*n,"",A->item);
	exibe(A->esq,n+1);
	}

void exibe_crescente(Arv A) {
   if( A==NULL ) return;
   exibe_crescente(A->esq);
   printf(fmt,A->item);
   exibe_crescente(A->dir);
}

void ins_sr(Item x, Arv *A) {
   if( *A == NULL ) *A = arv(NULL,x,NULL);

   else if( x < (*A)->item ) ins_sr(x,&(*A)->esq);
   else if( x > (*A)->item )ins_sr(x,&(*A)->dir);
}

int main(void) {
	Arv I = NULL;
	Item x;
	while(1) {
		printf("Item? ");
		scanf("%d",&x);
		if( x<0 ) break;
		ins_sr(x,&I);
		}
	exibe(I,0);
	return 0;
	}
