    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <time.h>

    int main() {

      int clrscr, executei_comando = 0;
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

       //  printf("Comando: %s \n", comando);
       //  printf("Parametro 1: %s \n", parametro1);
        // printf("Parametro 2: %s \n", parametro2);

        if ( strcmp(comando,"pwd") == 0 ) {
            pwd();
        }
        if (strcmp(comando,"ls")==0){
            printf(" Lista os arquivos do diretorio atual.\n");
            executei_comando =1;
        }

        if (strcmp(comando,"cd") == 0) {
            cd(parametro1);
            executei_comando=1;
        }

        if ( strcmp(comando,"mkdir") == 0 ) {
            mkdir(parametro1);
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
            printf("Data: %s \nHoras: %s segundos\n",__DATE__,__TIME__);
            executei_comando=1;
        }

        if(strcmp(comando, "cp")==0){
            printf(" Copiar arquivo de %s para %s.\n", parametro1,parametro2);
            executei_comando=1;
        }

        if (strcmp(comando, "clear")==0){
            system ("cls");
            executei_comando=1;
        }

        if (strcmp(comando, "help") == 0) {

            printf("\n pwd       - Exibe a posicao atual na estrutura de diretorios.");
            printf("\n mkdir     - Cria um diretorio.");
            printf("\n cd        - Chama um diretorio.");
            printf("\n ren       - Renomeia um diretorio.");
            printf("\n copyright - Exibe o nome dos autores do programa.");
            printf("\n poweroff  - Encerra a aplicacao.");
            printf("\n time      - Exbe data e horas atuais.");
            printf("\n cp        - Copia um arquivo de um diretorio para outro.");
            printf("\n clear     - Limpa a tela.\n");
            executei_comando = 1;
        }

        if ( executei_comando != 0 ) {
            executei_comando = 0;
            } else {
            printf("Comando ou nome de arquivo invalido.\n");
        }

      }
      return 0;
    }
