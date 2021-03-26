/*
 *
 * Componente Curricular: TEC-499 MI- Sistemas Digitais, Turma TP01
 * Autor: Jos� Gabriel Gomes dos Santos Oliveira, Mateus Fernandes Santos e Thiago Cardozo de Jesus
 * Data: 19/03/2021
 *
 * Declaro que este c�digo foi elaborado por mim de forma individual e
 * n�o cont�m nenhum trecho de c�digo de outro colega ou de outro autor, 
 * tais como provindos de livros e apostilas, e p�ginas ou documentos 
 * eletr�nicos da Internet. Qualquer trecho de c�digo de outra autoria que
 * uma cita��o para o  n�o a minha est� destacado com  autor e a fonte do
 * c�digo, e estou ciente que estes trechos n�o ser�o considerados para fins
 * de avalia��o. Alguns trechos do c�digo podem coincidir com de outros
 * colegas pois estes foram discutidos em sess�es tutorias.
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
	#define LIM 100
	FILE *fp;
	int tam = 0;
	int i;
	
	printf("\t**GERADOR DE MATRIZ**\n\n");
	printf("Quantidade de elementos por linha na matriz quadrada: ");
	scanf("%d",&tam);
	
	fp = fopen("MatrizesFonte.txt","w");
	//coloca o tamanho da primeira matriz no arquivo
	fprintf(fp,"%dx%d\n",tam,tam);
	//gera a primeira matriz
	for(i =0;i<tam*tam;i++){
		fprintf(fp,"%d,",rand() % LIM);
	}
	fprintf(fp,"\n");
	//coloca o tamanho da segunda matriz no arquivo
	fprintf(fp,"%dx%d\n",tam,tam);
	//gera a segunda matriz
	for(i=0;i<tam*tam;i++){
		fprintf(fp,"%d,",rand() % LIM);
	}
	
	fclose(fp);
	
	return 0;
}
