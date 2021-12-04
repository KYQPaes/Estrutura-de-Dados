#include <stdio.h>
#include <string.h>
int cont=0, maior=0;
float verif(float* s, float max){
	if(cont==max){
		return maior/max;
	}
	maior = maior + s[cont];
	cont++;
	return verif(s,max);
	}

int main(void){
    float s[5]={5,2,3,5,4};
    printf("%.2f\n",verif(s,5));
	return 0;
}
