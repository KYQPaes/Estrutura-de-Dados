#include <stdio.h>
#include <string.h>
int cont=0;
int verif(int* s, int max, int maior){
	if(cont==max){
		return maior;
	}
	if(s[cont]>=maior){
		maior=s[cont];
	}
	cont++;
	return verif(s,max, maior);
	}

int main(void){
    int s[5]={-1,-2,-3,-4,-2};
    printf("%i\n",verif(s,5,s[0]));
	return 0;
}
// Quantas  palavras existem   nesta cadeia  
