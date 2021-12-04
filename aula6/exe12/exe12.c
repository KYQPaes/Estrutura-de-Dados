#include <stdio.h>
int suc(int n) {
	return n+1;
	}
int pred(int n) {
	return n-1;
	}

int a(int n, int n2, int res, int cont){
		if(n2==0){
			return res;
		}
		if(cont==n){
			cont=0;
			return a(n,n2-1,res,cont);
		}else{
			cont=suc(cont);
			res=suc(res);
			return a(n,n2,res,cont);
		}
	}

int b(int n, int n2, int res, int cont){
		if(a(res,n2,0,0)==n){
			return res;
		}else if(a(res,n2,0,0)>=n){
			return pred(res);
		}
		if(cont==n2){
			cont=0;
			res=suc(res);
			return b(n,n2,res,cont);
		}
		cont=suc(cont);
		return b(n,n2,res,cont);
		
	}

int c(int n, int n2, int res, int cont){
		if(a(res,n2,0,0)>=n){
			return a(res,n2,0,0)-n;
		}
		if(cont==n2){
			cont=0;
			res=suc(res);
			return c(n,n2,res, cont);
		}
		cont=suc(cont);
		return c(n,n2,res,cont);
		
	}



int d(int n){
		if(n==1){
			return n;
		}
		return d(pred(n))+pred(a(n,2,0,0));
		
	}
/*
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
		}*/
	
int main(void) {
	int n, n2;
	printf("Num1? ");
	scanf("%d",&n);
	printf("Num2? ");
	scanf("%d",&n2);
	printf("a:%i\n", a(n,n2,0,0));
	printf("b:%i\n", b(n,n2,0,0));
	printf("c:%i\n", c(n,n2,0,0));
	printf("d:%i\n", d(n));
	//printf("d(%i):%i\n",n,d(n,0));
	//printf("e:%i\n",(n>n2)? e(n,n2):e(n2,n));
	//printf("f:%i\n",(n>n2)? f(n,n2):f(n2,n));
	//printf("g(%i):%s\n",n,(g(n,0)==0) ? ("Par"):("Nao par"));
	//printf("h(%i):%s\n",n,(g(n,0)==0) ? ("Nao Impar"):("Impar"));
	return 0;
	}
