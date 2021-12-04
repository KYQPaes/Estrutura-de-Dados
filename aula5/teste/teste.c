#include <stdio.h>
#include <conio.h>
#include "fila.h"
#define dim 9
#define cor(i,j) (i>=0&&i<dim&&j>=0&&j<dim?I[i][j]:-1)
#define par(i,j) ((i)*100+(j))
#define lin(p) ((p)/100)
#define col(p) ((p)%100) 

int I[dim][dim];

void inicia(int I[dim][dim], char*s) {
    FILE *a = fopen(s,"r");
	if( !a ) {
		puts("arquivo nao encontrado");
		abort();
		}
	for(int i=0;i<dim; i++)
		for(int j=0; j<dim; j++){
			fscanf(a,"%d",&I[i][j]);
		}
	fclose(a);
	}


int main(void) {
	int i, j, n;
	inicia(I,"imagem.txt");



/*
   FILE *fp;
   char buff[255];

   fp = fopen("imagem.txt", "r");
   fscanf(fp, "%s", buff);
   printf("1 : %s\n", buff );

   fgets(buff, 255, (FILE*)fp);
   printf("2: %s\n", buff );
   
   fgets(buff, 255, (FILE*)fp);
   printf("3: %s\n", buff );
   fclose(fp);

*/

	return 0;
	}
