#include <stdio.h>

void exibe(int* v, int n){
	for(int i=0; i<=n; i++)
		printf("%i:%i\n",i+1,v[i]);
	}
	

int empurra(int v[], int n) {
	int menor=v[0];
	int cont=1;
	int posicao;
	int troca;
	while(cont<=n){
		if(v[cont]<menor){
			menor=v[cont];
			posicao=cont;
			}
		cont++;

	}
	for(cont=posicao;cont<n;cont++){
			troca = v[cont];
			v[cont]=v[cont+1];
			v[cont+1]=troca;
		}
	}


int main(void) {
	int v[5] = {83,31,91,46,27};
	empurra(v,4);
	exibe(v,4);
	return 0;
	}
