#include <stdio.h>

void posmax(int v[], int k){
	int max=v[0], change=0;
	for(int cont=1;cont<=k-1;cont++)
		if(max<v[cont]){
			max=v[cont];
			change=cont;
		}
	printf("posmax:\n");
		printf("%i\n",change);
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

int ssort(int v[], int n,int i){
	for(i; i<=n-1; i++)
		empurrar(v,n);
	if(i!=n)
		return ssort(v,n,i);
}

int main(void){
	int v[5]={1,02,32,48,31};
	posmax(v,5);
	ssort(v,5,0);
	printf("ssort:\n");
	for(int cont=0;cont<=4;cont++){
		printf("%i\n",v[cont]);
	}
}
