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

/*void rem(Item x, Arv *A) {
   if( *A == NULL ) return;
   if(x == (*A)->item ) {
      Arv n = *A;
      if( n->esq == NULL ) *A = n->dir;
      else if ( n->dir == NULL ) *A = n->esq;
      else n->item = remmax(&n->esq);
      if( n != *A ) free(n);
   }
   else if( x <= (*A)->item ) rem(x,&(*A)->esq);
   else rem(x,&(*A)->dir);
}
*/
void rem_todos(Item x, Arv A) {
	while(busca(x, A)==1){
		rem(x, &A);
		}
}

int main(void) {
	Arv I = NULL;
	Item x;
	while(1) {
		printf("Item? ");
		scanf("%d",&x);
		if( x<0 ) break;
		ins(x,&I);
		}
	exibe(I,0);
	printf("Exclui? ");
	scanf("%d",&x);
	rem_todos(x, I);
	exibe(I,0);
	return 0;
	}
