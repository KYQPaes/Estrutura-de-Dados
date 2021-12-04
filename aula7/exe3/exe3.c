#include <stdio.h>


void exibir(int v[], int n){
	int cont = 0;
	for(cont; cont<=n-1; cont++)
		printf("%d\n",v[cont]);
}

void empurra (int v[], int n){
	int troca;
	for(int j=0; j<n-1; j++)
		if(v[j]>v[j+1]){
			troca=v[j];
			v[j]=v[j+1];
			v[j+1]=troca;
		}
}

int trocar(int v[], int n){
	int x;	
	for(int cont=0;cont<n;cont++){
		x=v[cont];
		v[cont]=v[n];
		v[n]=x;
		n--;
	}
}

int bsrt(int v[], int n,int i){
	for(i; i<=n-1; i++)
		empurra(v,5);
	if(i!=n)
		return bsrt(v,n,i);
}

int main (void){
	int v[5]={48,19,31,52,27};
	bsrt(v,5,0);
	trocar(v,4);
	exibir(v,5);
	return 0;
}
