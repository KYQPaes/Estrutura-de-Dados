#include <stdio.h>
#include <string.h>
int cont=0;

char* verif(int* s, int max){
	cont++;
	if(cont==max){
		return "Crescente";
	}
	if(s[cont]>=s[cont-1]){
		return verif(s,max);
	}
	return "Nao Crescente";
	}

int main(void){
    int s[5]={1,2,3,4,2};
    printf("%s\n",verif(s,5));
	return 0;
}
// Quantas  palavras existem   nesta cadeia  
