#include <stdio.h>

void empurra(int v[], int k){
	int max=v[0], change;
	for(int cont=1;cont<=k-1;cont++){
		if(max<v[cont]) max=v[cont];
	}
	for(int cont=0;cont<=k-2;cont++){
		if(v[cont]==max){
			change=v[cont];
			v[cont]=v[cont+1];
			v[cont+1]=change;
		}
	}
	printf("empurra:\n");
	for(int cont=0;cont<=k-1;cont++){
		printf("%i\n",v[cont]);
	}
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

int bsrt(int v[], int n,int i){
	for(i; i<=n-1; i++)
		empurrar(v,n);
	if(i!=n)
		return bsrt(v,n,i);
}

int main(void){
	int v[5]={19,80,02,48,31};
	empurra(v,5);
	bsrt(v,4,0);
	printf("bsort:\n");
	for(int cont=0;cont<=4;cont++){
		printf("%i\n",v[cont]);
	}
}
