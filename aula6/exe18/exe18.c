#include <stdio.h>
#include <string.h>
int cont=0;

char* verif(int* s, int* x, int max){
		if(cont==max-1){
			return "sim";
		}else if(s[cont]==x[cont]){
			cont++;
			return verif(s,x,max);
		}
	return "Nao";
	}

int main(void){
    int s[5]={1,2,3,4,5};
	int x[5]={1,2,3,4,5};
 	int y[5]={5,2,4,4,5};
	int z[5]={1,2,3,4,5};
    printf("%s\n",verif(y,z,5));
	return 0;
}
