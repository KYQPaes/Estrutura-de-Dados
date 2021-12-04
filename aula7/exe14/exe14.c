#include <stdio.h>
#define MAX 10 

int lsearch(int x, int v[], int n) {
	for(int i=0; i<n; i++)
		if( x == v[i] )
			return 1;
	return 0;
	}

int lsearch(int x,int v[],int n);
int main(void) {
	int v[MAX] = {88,31,96,52,45,19,68,70,29,90};
	printf("%d\n",lsearch(25, v, MAX));
	printf("%d\n",lsearch(70, v, MAX));
	return 0;
	}
