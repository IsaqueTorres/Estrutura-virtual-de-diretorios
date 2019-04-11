#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  int executei_comando = 0;
  char linha_de_comando[80];
  char *comando="qualquer coisa...", *parametro1, *parametro2;

  //system("clear");

  while ( strcmp(comando,"poweroff") != 0 ) {

	printf("> ");
	gets(linha_de_comando);

	// printf("Linha de Comando: %s \n", linha_de_comando);

	comando = strtok(linha_de_comando," ");
	parametro1 = strtok(NULL," ");
	parametro2 = strtok(NULL,"\0");

	// printf("Comando: %s \n", comando);
	// printf("Parametro 1: %s \n", parametro1);
	// printf("Parametro 2: %s \n", parametro2);

	if ( strcmp(comando,"pwd") == 0 ) {
		printf(" Exibir a posicao na estrutura de diretorios.\n");
		executei_comando = 1;
	}
	if (strcmp(comando,"ls")==0){
        printf(" Lista os arquivos do diretorio atual.\n");
        executei_comando =1;
	}
	if (strcmp(comando,"cd")==0){
        printf(" Chama o diretorio. \n");
        executei_comando=1;
	}

	if ( strcmp(comando,"mkdir") == 0 ) {
		printf(" Criar o diretorio %s .\n", parametro1);
		executei_comando = 1;
	}

	if ( strcmp(comando,"ren") == 0 ) {
		printf(" Trocar o nome do diretorio de %s para %s .\n", parametro1, parametro2);
		executei_comando = 1;
	}

	if ( strcmp(comando,"poweroff") == 0 ) {
		printf(" Encerrando a aplicacao.\n");
		executei_comando = 1;
	}
	if (strcmp(comando,"copyrigth")==0){
        printf("\n Isaque Torres\n Joao Victor Aguirra\n Mateus Santos\n Rodrigo Ventura\n Copyright 2019-2019 - Sistemas operacionais I.\n Todos os direitos reservados.\n\n ");
        executei_comando = 1;
	}
	if (strcmp(comando, "time")==0){
        printf(" Exibir informacoes de hora e data do sistema: \n dd/mm/aaaa      hh:mm:ss\n");
        executei_comando=1;
	}

	if(strcmp(comando, "cp")==0){
        printf(" Copiar arquivo de %s para %s.\n", parametro1,parametro2);
        executei_comando=1;
	}

	if (strcmp(comando, "clear")==0){
        printf(" Limpando a tela.\n");
        executei_comando=1;
	}

	if ( executei_comando != 0 ) {
		executei_comando = 0;
        } else {
		printf("Comando ou nome de arquivo invalido.\n");
	}

  }
  return 0;
}
