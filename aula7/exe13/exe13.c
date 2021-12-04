#include <stdio.h>

void insere(int x, int v[], int k){
	v[k-1]=x;
}

void empurrar (int v[], int n){
	int troca;
	for(int j=0; j<n-1; j++)
		if(v[j]>v[j+1]){
			troca=v[j];
			v[j]=v[j+1];
			v[j+1]=troca;
		}
}

int isort(int v[], int n,int i){
	for(i; i<=n-1; i++)
		empurrar(v,n);
	if(i!=n)
		return isort(v,n,i);
}

int main(void){
	int v[5]={1,02,32,48};
	int x;
	printf("Digite um valor ");
	scanf("%i",&x);
	insere(x,v,5);
	isort(v,5,0);
	printf("ssort:\n");
	for(int cont=0;cont<=4;cont++){
		printf("%i\n",v[cont]);
	}
}
