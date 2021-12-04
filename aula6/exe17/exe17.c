#include <stdio.h>
#include <string.h>
int i=0, count=0;

int palavra(char* s){
	if (s[i]=='\0') return count;
   	if (isalpha(s[i])!=0 && (s[i+1]==' ' || s[i+1]=='\0')){
		count++;    
		}
	i++;
	return palavra(s);
	}


int main(void){
    char s[200];
 
    printf("Digite um texto:\n");
    gets(s);
	printf("%i\n",palavra(s));
	return 0;
}
// Quantas  palavras existem   nesta cadeia  
