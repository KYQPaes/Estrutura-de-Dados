#include <stdio.h>
#include <string.h>

int main(void){
	char s[256];
	printf("Senha?");
	gets(s);
	if(strcmp(s,"abracadabra")==0) puts ("OK!");
	else puts("senha invalida!");
	return 0;
}
