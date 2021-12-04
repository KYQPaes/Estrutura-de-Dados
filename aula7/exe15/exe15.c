#include <stdio.h>
#define MAX 10

int rbsearch(int x, int v[], int p, int u){
	if(p<=u-1){
		int m=(p+u)/2;
		if(x==v[m]) return 1;
		if(x<v[m]) return rbsearch(x, v, p, m-1);
		else return rbsearch(x, v,  m+1,  u);
	}
	return 0;
}

int main(void) {
   int v[MAX]={19,29,31,45,52,68,70,88,90,96};
   printf("%d\n",rbsearch(25, v,0, MAX-1));
   printf("%d\n",rbsearch(88, v,0, MAX-1));
   return 0;
	}
