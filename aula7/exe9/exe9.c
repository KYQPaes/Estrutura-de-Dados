#include <stdio.h>

int rlsearch(int x, int v[], int n){
	if(x==v[n]){
		return 1;
	}else if(n==0){
		return 0;
	}
	return rlsearch(x, v, n-1);
}

int main(void){
	int v[8]={66,80,31,48,27,75,19,52};
	printf("27: %d\n",rlsearch(27,v,8));
	printf("51: %d\n",rlsearch(51,v,8));
}
