#include <stdio.h>
int suc(int n) {
	return n+1;
	}
int pred(int n) {
	return n-1;
	}

int a(int n, int n2){
	if(n2==0) return n;
	return a(suc(n),pred(n2));
		}


int b(int n, int n2,int cont){
	if(n==n2){
			return cont;
		}
	if(n<n2) return b(n,pred(n2),pred(cont));
	return b(pred(n),n2,suc(cont));
	}


int c(int n, int cont){
	if(cont==0){
			return n;
		}
	if(n<0){ return c(pred(n),suc(cont));}
	else if(n>0) return c(suc(n),pred(cont));
	}


int d(int n,int cont){
	if(cont==n){
			return n;
		}
	if(n<0){ 
		if(cont<n)
			{
				return n;
			}
			return d(suc(n),pred(cont));}
	else if(n>0){ 
		if(cont>n){
				return n;
			}
			return d(pred(n),suc(cont));
			};
	}

int g(int n,int cont){
	if(cont==n){
			return 0;
			}
	if(n<0){ 
		if(cont<n){
				return 1;
				}
			return g(suc(n),pred(cont));
	}else if(n>0){ 
		if(cont>n){
			return 1;
			}
			return g(pred(n),suc(cont));
		}
	}

int e(int n,int n2){
		if(n2==n){
				return pred(n2);
			}
		return e(n,suc(n2));
		}

int f(int n,int n2){
		if(n2==n){
				return suc(n);
			}
		return f(pred(n),n2);
		}
	
int main(void) {
	int n, n2, x;
	printf("Num1? ");
	scanf("%d",&n);
	printf("Num2? ");
	scanf("%d",&n2);
	printf("a:%i\n", n>n2 ? a(n2,n):a(n,n2));
	printf("b:%i\n", b(n,n2,0));
	printf("c(%i):%i\n",n,c(n,n));
	printf("d(%i):%i\n",n,d(n,0));
	printf("e:%i\n",(n>n2)? e(n,n2):e(n2,n));
	printf("f:%i\n",(n>n2)? f(n,n2):f(n2,n));
	printf("g(%i):%s\n",n,(g(n,0)==0) ? ("Par"):("Nao par"));
	printf("h(%i):%s\n",n,(g(n,0)==0) ? ("Nao Impar"):("Impar"));
	return 0;
	}
