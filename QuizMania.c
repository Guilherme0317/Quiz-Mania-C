///BLIBIOTECAS UTILIZADAS
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>

  ///SISTEMA DE PONTOS
   int pontuacao =0;
   int certo = 0;
   int errado = 0;
   char nome[40];

   void adicionarPontos(int pontos){
     pontuacao += pontos;
   }
    void subtrairpontos(int pontos){
     pontuacao -= pontos;
   }
   void exibirPontuacao(int pontos){
    printf("\n\n\t\t\t\t\t\t       PONTUACAO ATUAL �: %i\n",pontuacao);
   }

  ///SISTEMA EM DESENVOLVIMENTO
    void exibirCores(int cores[], int tamanho) {
    int i;
    char comando[20];

    for (i = 0; i < tamanho; i++) {
        system("cls");
        sprintf(comando, "color %d", cores[i]);
        system(comando);
        Sleep(170);
    }
}

int main() {

    ///VARIAVEIS
    int menujogar, certo = 0, errado = 0;
    int op;
    int sair = 0,pontos =0;


    ///SISTEMA DE COR
    setlocale(LC_ALL, "Portuguese");
    int cores[] = {4, 40, 10, 20, 7};
    char resposta[1];
    int i;
        ///TELA DE COME�O
    printf("\033[1;31m\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t #######  ##     ## #### ########    ##     ##    ###    ##    ## ####    ###  \x1b[0m\n");
    printf("\033[1;31m\t\t\t\t\t##     ## ##     ##  ##       ##     ###   ###   ## ##   ###   ##  ##    ## ## \x1b[0m\n");
    printf("\033[1;31m\t\t\t\t\t##     ## ##     ##  ##      ##      #### ####  ##   ##  ####  ##  ##   ##   ## \x1b[0m\n");
    printf("\033[1;31m\t\t\t\t\t                            ##     ## ##     ##  ##     ##       ## ### ## ##     ## ## ## ##  ##  ##     ##  \x1b[0m\n");
    printf("\033[1;31m\t\t\t\t\t##  ## ## ##     ##  ##    ##        ##     ## ######### ##  ####  ##  #########  \x1b[0m\n");
    printf("\033[1;31m\t\t\t\t\t##    ##  ##     ##  ##   ##         ##     ## ##     ## ##   ###  ##  ##     ## \x1b[0m\n");
    printf("\033[1;31m\t\t\t\t\t ##### ##  #######  #### ########    ##     ## ##     ## ##    ## #### ##     ## \x1b[0m\n");
    printf("\033[1;32m\n\n\n\n\n\t\t\t\t\t\t\t\t  INFORME SEU NOME POR FAVOR");
    printf("\033[1;33m\n\n\t\t\t\t\t\t\t\t        SEU NOME:\033[0;37m");
    scanf("%s",&nome);
    printf("\t\t\t\t\t\t\t\t");
    printf("\033[1;33m\n\n\t\t\t\t\t\t\t\t       PRESSIONE ENTER ");
    getch();

    exibirCores(cores, sizeof(cores) / sizeof(cores[0]));
        do{
          ///MENU PRINCIPAL
        printf("\033[0;37m\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t             BEM VINDO            \x1b[0m\n");
        printf("\033[0;37m\n\n\t\t\t\t\t\t\t|\033[1;37m---------------------------------\033[0;37m|\033[0m");
        printf("\033[1;37m\n\t\t\t\t\t\t\t|\033[0;36m           1 - JOGAR             \033[0;37m|\033[0m");
        printf("\033[1;37m\n\t\t\t\t\t\t\t|\033[0;36m           2 - CREDITOS          \033[0;37m|\033[0m");
        printf("\033[1;37m\n\t\t\t\t\t\t\t|\033[0;36m           3 - PONTUA��O         \033[0;37m|\033[0m");
        printf("\033[1;37m\n\t\t\t\t\t\t\t|\033[0;36m           4 - SAIR              \033[0;37m|\033[0m");
        printf("\n\t\t\t\t\t\t\t|---------------------------------|");
        printf("\n\n\t\t\t\t\t\t\t Selecione a op��o desejada:  ");
        scanf("%i",&op);
        system("cls");

      ///COME�O DO SWITCH DO MENU PRINCIPAL
     switch (op)
     {
         do{
        case 1:
            printf("carregando");
            Sleep(170);
            system("cls");
            printf("carregando.");
            Sleep(180);
            system("cls");
            printf("carregando..");
            Sleep(170);
            system("cls");
            printf("carregando...");
            Sleep(180);
            system("cls");
            printf("carregando");
            Sleep(170);
            system("cls");
            printf("carregando.");
            Sleep(180);
            system("cls");
            printf("carregando..");
            Sleep(170);
            system("cls");
            printf("carregando...");
            Sleep(180);
            system("cls");

             ///CATEGORIAS DE PERGUNTAS/ MENU DE JOGO

            printf("\033[0;37m\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t                   CATEGORIAS            \x1b[0m\n");
            printf("\n\t\t\t\t\t\033[0;37m|\033[0;37m------------------------------------------------------------\033[0;37m|\033[0m\n");
            printf("\t\t\t\t\t\033[0;37m|\033[0;36m            1 - Perguntas sobre games                       \033[0;37m|\033[0m\n");
            printf("\t\t\t\t\t\033[0;37m|\033[0;36m            2 - Perguntas de Anime                          \033[0;37m|\033[0m\n");
            printf("\t\t\t\t\t\033[0;37m|\033[0;36m            3 - Perguntas sobre F�rmula 1                   \033[0;37m|\033[0m\n");
            printf("\t\t\t\t\t\033[0;37m|\033[0;36m            4 - Perguntas sobre Geografia                   \033[0;37m|\033[0m\n");
            printf("\t\t\t\t\t\033[0;37m|\033[0;36m            5 - Menu principal                              \033[0;37m|\033[0m\n");
            printf("\t\t\t\t\t\033[0;37m|\033[0;37m------------------------------------------------------------\033[0;37m|\033[0m\n");
            printf("\n\n\t\t\t\t\t\033[1;38m Selecione uma das op��es: ",menujogar);
            scanf("%d", &menujogar);
            system("cls");



          ///SISTEMA DO MENU DE JOGO
        switch(menujogar){
           case 1:

            ///PERGUNTAS DE GAMES
            printf("\x1b[33m\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tREGRAS                  \x1b[0m\n");
            printf("\x1b[36m\n\n\t\t\t\t\t\t\t|---------------------------------------|\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| Um jogo de perguntas e respostas �    |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| onde os jogadores respondem a quest�es|\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| para ganhar pontos. Eles podem  ser   |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| individuais ou em equipes, com regras |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| definindo como as perguntas s�o       |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| feitas, quem responde e como os pontos|\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| s�o concedidos. Os temas das quest�es |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| podem variar amplamente. Esses jogos  |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| s�o populares por sua divers�o,       |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| desafio e aprendizado.                |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t|---------------------------------------|\x1b[0m\n");
            system("pause");
            system("cls");


            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         1� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\t Qual � o nome do encanador italiano que � o protagonista de uma s�rie de jogos da Nintendo? \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\t A) MARIO\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t B) LUIGI\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t C) SONIC\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t D) DONKEY KONG\x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='a' || resposta[0]=='A'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='a' || resposta[0]!='A'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");


            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t           2� PERGUNTA                                                       \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\t Em que jogo o objetivo � eliminar blocos coloridos combinando-os em grupos de tr�s ou mais da mesma cor? \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\t A) MINECRAFT\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t B) TETRIS\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t C) CANDY CRUSH SAGA\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t D) SUPER MARIO BROS\x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='b' || resposta[0]=='B'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='b' || resposta[0]!='B'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            system("pause");
            system("cls");
            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t           3� PERGUNTA                                                       \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\t Qual � o jogo de cartas em que o objetivo � ser o primeiro a se livrar de todas as suas cartas? \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\t A) POKER\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t B) UNO\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t C) 21\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t D) TRANCA\x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA:  ");
            scanf("%s", &resposta);
            if(resposta[0]=='B' || resposta[0]=='b'){
                printf("\n\n\t\t\x1b[32m RESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='B' || resposta[0]!='b'){
                printf("\n\n\t\t\x1b[31m RESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            system("pause");
            system("cls");


            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         4� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\t Qual � o nome do jogo em que os jogadores controlam um p�ssaro \x1b[0m\n");
            printf("\x1b[37m\t\t\t\t irritado lan�ado de um estilingue para destruir estruturas e derrotar porcos verdes? \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) ANGRY BIRDS\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) FLAPPY BIRD\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) VALORANT\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) TEMPLE RUN\x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA:  ");
            scanf("%s", &resposta);
            if(resposta[0]=='A' || resposta[0]=='a'){
                printf("\n\n\t\t\x1b[32m RESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='a' || resposta[0]!='A'){
                printf("\n\n\t\t\x1b[31m RESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            system("pause");
            system("cls");

            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         5� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\t Qual � o jogo em que os jogadores controlam um personagem chamado Steve \x1b[0m\n");
            printf("\x1b[37m\t\t\t\t e podem construir e explorar um mundo virtual infinito? \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) FORTNITE\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) TERRARIA\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) CHAVES KART\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) MINECRAFT\x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='D' || resposta[0]=='d'){
                printf("\n\n\t\t\x1b[32m RESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='D' || resposta[0]!='d'){
                printf("\n\n\t\t\x1b[31m RESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            system("pause");
            system("cls");

            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         6� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\t Qual � o jogo de plataforma em que os jogadores controlam um ouri�o azul veloz que corre  \x1b[0m\n");
            printf("\x1b[37m\t\t\t\t em alta velocidade por cen�rios cheios de obst�culos e inimigos? \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\t A) CRASH BANDICOOT\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t B) SPYRO THE DRAGON\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t C) SONIC THE HEDGEHOG\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t D) RAYMAN\x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA:  ");
            scanf("%s", &resposta);
            if(resposta[0]=='C' || resposta[0]=='c'){
                printf("\n\n\t\t\x1b[32m RESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='C' || resposta[0]!='c'){
                printf("\n\n\t\t\x1b[31m RESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            system("pause");
            system("cls");

            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         7� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual � o nome do jogo de tiro em primeira pessoa, lan�ado pela Valve Corporation em 2007, ");
            printf("\x1b[37m\n\t\t\t\tque introduziu mec�nicas inovadoras de manipula��o de f�sica?   \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA)Halo \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB)Call of Duty \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC)Doom \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD)Half-Life 2 \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='d' || resposta[0]=='D'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='d' || resposta[0]!='D'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");

            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         8� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual � o nome do jogo de RPG da Bethesda Game Studios");
            printf("\x1b[37m\n\t\t\t\tconhecido por sua vasta explora��o de mundo aberto e liberdade de escolha? \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA)The Elder Scrolls V: Skyrim  \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB)Dark Souls  \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC)Fallout 4 \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD)Final Fantasy VII \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='a' || resposta[0]=='A'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='a' || resposta[0]!='A'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");

            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         9� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual � o nome do jogo de plataforma lan�ado pela Naughty Dog em 2013");
            printf("\x1b[37m\n\t\t\t\tprotagonizado por um personagem chamado Joel e uma jovem chamada Ellie, ambientado em um mundo p�s-apocal�ptico?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) Horizon Zero Dawn \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) The Last of Us \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) God of War \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) Uncharted 4: A Thief's End \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='b' || resposta[0]=='B'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='b' || resposta[0]!='B'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");

            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         10� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual � o nome do jogo de estrat�gia em tempo real lan�ado pela Blizzard Entertainment em 1998 ");
            printf("\x1b[37m\n\t\t\t\tque se passa em um mundo de fantasia medieval?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) Command & Conquer \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) Warcraft: Orcs & Humans \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) Age of Empires \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) StarCraft \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='b' || resposta[0]=='B'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='b' || resposta[0]!='B'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");

             printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         11� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\t Qual � o nome do jogo de simula��o de vida desenvolvido pela Maxi");
            printf("\x1b[37m\n\t\t\t\t onde os jogadores controlam personagens virtuais em suas atividades di�rias?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) Harvest Moon \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) Stardew Valley \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) Animal Crossing \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) The Sims \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='d' || resposta[0]=='D'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='d' || resposta[0]!='D'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");

            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         12� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual � o t�tulo do jogo lan�ado pela CD Projekt Red em 2015");
            printf("\x1b[37m\n\t\t\t\tque segue as aventuras de Geralt de Rivia em um vasto mundo de fantasia?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) The Witcher 3: Wild Hunt \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) Dragon Age: Inquisition \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) The Witcher 2: Assassins of Kings \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) Cyberpunk 2077 \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='a' || resposta[0]=='A'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='a' || resposta[0]!='A'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");



          system("cls");
        printf("\x1b[33m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   RESULTADO FINAL                       \x1b[0m\n\n\n");
        printf("\x1b[37m\t\t\t\t  Pontua��o Total: %d\n\x1b[0m", pontuacao);
        printf("\x1b[37m\t\t\t\t  Respostas Corretas: %d\n\x1b[0m", certo);
        printf("\x1b[37m\t\t\t\t  Respostas Erradas: %d\n\x1b[0m", errado);
        printf("\n\n\n\n\t\t\t\t");
        getch();
        break;

                ///PERGUNTAS DE ANIMES
        case 2:

            ///PERGUNTAS DE GAMES
            printf("\x1b[33m\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tREGRAS                  \x1b[0m\n");
            printf("\x1b[36m\n\n\t\t\t\t\t\t\t|---------------------------------------|\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| Um jogo de perguntas e respostas �    |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| onde os jogadores respondem a quest�es|\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| para ganhar pontos. Eles podem  ser   |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| individuais ou em equipes, com regras |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| definindo como as perguntas s�o       |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| feitas, quem responde e como os pontos|\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| s�o concedidos. Os temas das quest�es |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| podem variar amplamente. Esses jogos  |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| s�o populares por sua divers�o,       |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| desafio e aprendizado.                |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t|---------------------------------------|\x1b[0m\n");
            system("pause");
            system("cls");


            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         1� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual � o verdadeiro nome do protagonista de Death Note e qual � o significado por tr�s desse nome? \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) Light Yagami - Luz\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) L Lawliet - Justi�a\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) Kira Yamato - Morte\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) Near Rivers - Perto dos Rios\x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA:  ");
            scanf("%s", &resposta);
            if(resposta[0]=='a' || resposta[0]=='A'){
                printf("\n\n\t\t\x1b[32m RESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='a' || resposta[0]!='A'){
                printf("\n\n\t\t\x1b[31m RESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");

            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         2� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual � o verdadeiro nome do protagonista de Death Note e qual � o significado por tr�s desse nome? \x1b[0m\n");
            printf("\x1b[37m\t\t\t\tEmFullmetal Alchemist, qual � o nome do alquimista que perdeu seu bra�o direito\x1b[0m\n");
            printf("\x1b[37m\t\t\t\te perna esquerda em uma tentativa de ressuscitar sua m�e? \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) Roy Mustang\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) Riza Hawkeye\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) Alphonse Elric\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) Edward Elric \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA:  ");
            scanf("%s", &resposta);
            if(resposta[0]=='d' || resposta[0]=='D'){
                printf("\n\n\t\t\x1b[32m RESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='d' || resposta[0]!='D'){
                printf("\n\n\t\t\x1b[31m RESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");

            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t          3� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual � o nome do criador do mang� One Piece? \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) Masashi Kishimoto\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) Hiromu Arakawa\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) Eiichiro Oda\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) Hajime Isayama \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='c' || resposta[0]=='C'){
                printf("\n\n\t\t\x1b[32m RESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='c' || resposta[0]!='C'){
                printf("\n\n\t\t\x1b[31m RESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");


            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t          4� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual � o nome da protagonista feminina de Sword Art Online? \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) Asuna\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) Leafa\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) Sinon \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) Kirito \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='a' || resposta[0]=='A'){
                printf("\n\n\t\t\x1b[32m RESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='a' || resposta[0]!='A'){
                printf("\n\n\t\t\x1b[31m RESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");


           printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t          5� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual � o nome do protagonista de Jujutsu Kaisen? \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) Nanami Kento\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) Gojo Satoru\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) Itadori Yuji \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) Fushiguro Megumi\x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='c' || resposta[0]=='C'){
                printf("\n\n\t\t\x1b[32m RESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='c' || resposta[0]!='C'){
                printf("\n\n\t\t\x1b[31m RESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");


            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         6� PERGUNTA                                              \x1b[0m\n");
            printf("\x1b[37m\n\t\t\t\tQual � o nome do vil�o que � o l�der dos Dez Mandamentos em Nanatsu no Taizai? \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) Derieri\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) Zeldris\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) Fraudrin \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) Estarossa\x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='b' || resposta[0]=='B'){
                printf("\n\n\t\t\x1b[32m RESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='b' || resposta[0]!='B'){
                printf("\n\n\t\t\x1b[31m RESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");


            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         7� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tNo anime Your Lie in April(Shigatsu wa Kimi no Uso), qual � o instrumento musical que a personagem principal\x1b[0m\n");
            printf("\x1b[37m\t\t\t\tKousei Arima, costumava tocar?\x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) Piano \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) Flauta \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) Guitarra \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) Violino \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='a' || resposta[0]=='A'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='a' || resposta[0]!='A'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");


             printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         8� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual � o nome do navio do Chap�u de Palha em One Piece?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) Thousand Sunny\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) Oro Jackson\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) Going Merry\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) Red Force \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='c' || resposta[0]=='C'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='c' || resposta[0]!='C'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");


             printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         9� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tEm Hunter x Hunter, qual � o nome da t�cnica especial de Killua que lhe permite manipular eletricidade?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA)Electric Aura \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB)Lightning Palm \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC)Thunderbolt \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD)Godspeed \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='d' || resposta[0]=='D'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='d' || resposta[0]!='D'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");


             printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         10� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tNo anime Cowboy Bebop, qual � o nome do c�o inteligente que acompanha Spike e Jet?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA)Apollo \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB)Charlie \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC)Ein\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD)Rex \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='c' || resposta[0]=='C'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='c' || resposta[0]!='C'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");


             printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         11� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tEm Death Note, qual � o nome verdadeiro de L, o renomado detetive que persegue Light Yagami?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA)Mello \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB)L Lawliet \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC)Soichiro Yagami \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD)Near \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='b' || resposta[0]=='B'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='b' || resposta[0]!='B'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");


             printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         12� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual � o nome do protagonista de Mob Psycho 100, um garoto com poderes ps�quicos extraordin�rios?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA)Ritsu Kageyama \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB)Teruki Hanazawa \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC)Reigen Arataka \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD)Shigeo Kageyama \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='d' || resposta[0]=='D'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='d' || resposta[0]!='D'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");

          system("cls");
        printf("\x1b[33m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   RESULTADO FINAL                       \x1b[0m\n\n\n");
        printf("\x1b[37m\t\t\t\t  Pontua��o Total: %d\n\x1b[0m", pontuacao);
        printf("\x1b[37m\t\t\t\t  Respostas Corretas: %d\n\x1b[0m", certo);
        printf("\x1b[37m\t\t\t\t  Respostas Erradas: %d\n\x1b[0m", errado);
        printf("\n\n\n\n\t\t\t\t");
        getch();
            break;

             ///PERGUNTAS DE FORMULA 1
        case 3:


             printf("\n\n\n              ###############             \n");
            printf("      #########           #########       \n");
            printf("    #####          #####          #####   \n");
            printf("    ##           #########            ##  \n");
            printf("    ##          ###########           ##  \n");
            printf("    ##              ######            ##  \n");
            printf("    ##             #######            ##  \n");
            printf("    ##      ##   #########            ##  \n");
            printf("    ##     ##############     # #     ##  \n");
            printf("    ##     ###########        ##      ##  \n");
            printf("    ##    #############       ###     ##  \n");
            printf("    ##    ###  ###########     ##     ##  \n");
            printf("    ##      ##    #########    ##     ##  \n");
            printf("    ##       #     ######### ###      ##  \n");
            printf("    ##             ###########        ##  \n");
            printf("    ##             ####### #         ##   \n");
            printf("     ##       ##   #######          ##    \n");
            printf("      ##      ###########          ##     \n");
            printf("       ##             ###         ##      \n");
            printf("        ##           ##          ##       \n");
            printf("         ##         ##          ##        \n");
            printf("          ##      ###          ##         \n");
            printf("           ###               ##           \n");
            printf("             ##            ###            \n");
            printf("               ###       ###              \n");
            printf("                ###  ###                  \n");
            printf("                   ##                     \n");
            Sleep(100);
            system("cls");

            printf("\n\n\n\t              ###############             \n");
            printf("\t      #########           #########       \n");
            printf("\t    #####          #####          #####   \n");
            printf("\t    ##           #########            ##  \n");
            printf("\t    ##          ###########           ##  \n");
            printf("\t    ##              ######            ##  \n");
            printf("\t    ##             #######            ##  \n");
            printf("\t    ##      ##   #########            ##  \n");
            printf("\t    ##     ##############     # #     ##  \n");
            printf("\t    ##     ###########        ##      ##  \n");
            printf("\t    ##    #############       ###     ##  \n");
            printf("\t    ##    ###  ###########     ##     ##  \n");
            printf("\t    ##      ##    #########    ##     ##  \n");
            printf("\t    ##       #     ######### ###      ##  \n");
            printf("\t    ##             ###########        ##  \n");
            printf("\t    ##             ####### #         ##   \n");
            printf("\t     ##       ##   #######          ##    \n");
            printf("\t      ##      ###########          ##     \n");
            printf("\t       ##             ###         ##      \n");
            printf("\t        ##           ##          ##       \n");
            printf("\t         ##         ##          ##        \n");
            printf("\t          ##      ###          ##         \n");
            printf("\t           ###               ##           \n");
            printf("\t             ##            ###            \n");
            printf("\t               ###       ###              \n");
            printf("\t                ###  ###                  \n");
            printf("\t                   ##                     \n");
            Sleep(100);
            system("cls");

            printf("\n\n\n\t\t              ###############             \n");
            printf("\t\t      #########           #########       \n");
            printf("\t\t    #####          #####          #####   \n");
            printf("\t\t    ##           #########            ##  \n");
            printf("\t\t    ##          ###########           ##  \n");
            printf("\t\t    ##              ######            ##  \n");
            printf("\t\t    ##             #######            ##  \n");
            printf("\t\t    ##      ##   #########            ##  \n");
            printf("\t\t    ##     ##############     # #     ##  \n");
            printf("\t\t    ##     ###########        ##      ##  \n");
            printf("\t\t    ##    #############       ###     ##  \n");
            printf("\t\t    ##    ###  ###########     ##     ##  \n");
            printf("\t\t    ##      ##    #########    ##     ##  \n");
            printf("\t\t    ##       #     ######### ###      ##  \n");
            printf("\t\t    ##             ###########        ##  \n");
            printf("\t\t    ##             ####### #         ##   \n");
            printf("\t\t     ##       ##   #######          ##    \n");
            printf("\t\t      ##      ###########          ##     \n");
            printf("\t\t       ##             ###         ##      \n");
            printf("\t\t        ##           ##          ##       \n");
            printf("\t\t         ##         ##          ##        \n");
            printf("\t\t          ##      ###          ##         \n");
            printf("\t\t           ###               ##           \n");
            printf("\t\t             ##            ###            \n");
            printf("\t\t               ###       ###              \n");
            printf("\t\t                ###  ###                  \n");
            printf("\t\t                   ##                     \n");
            Sleep(100);
            system("cls");


            printf("\n\n\n\t\t\t              ###############             \n");
            printf("\t\t\t      #########           #########       \n");
            printf("\t\t\t    #####          #####          #####   \n");
            printf("\t\t\t    ##           #########            ##  \n");
            printf("\t\t\t    ##          ###########           ##  \n");
            printf("\t\t\t    ##              ######            ##  \n");
            printf("\t\t\t    ##             #######            ##  \n");
            printf("\t\t\t    ##      ##   #########            ##  \n");
            printf("\t\t\t    ##     ##############     # #     ##  \n");
            printf("\t\t\t    ##     ###########        ##      ##  \n");
            printf("\t\t\t    ##    #############       ###     ##  \n");
            printf("\t\t\t    ##    ###  ###########     ##     ##  \n");
            printf("\t\t\t    ##      ##    #########    ##     ##  \n");
            printf("\t\t\t    ##       #     ######### ###      ##  \n");
            printf("\t\t\t    ##             ###########        ##  \n");
            printf("\t\t\t    ##             ####### #         ##   \n");
            printf("\t\t\t     ##       ##   #######          ##    \n");
            printf("\t\t\t      ##      ###########          ##     \n");
            printf("\t\t\t       ##             ###         ##      \n");
            printf("\t\t\t        ##           ##          ##       \n");
            printf("\t\t\t         ##         ##          ##        \n");
            printf("\t\t\t          ##      ###          ##         \n");
            printf("\t\t\t           ###               ##           \n");
            printf("\t\t\t             ##            ###            \n");
            printf("\t\t\t               ###       ###              \n");
            printf("\t\t\t                ###  ###                  \n");
            printf("\t\t\t                   ##                     \n");
            Sleep(100);
            system("cls");

            printf("\n\n\n\t\t\t\t              ###############             \n");
            printf("\t\t\t\t      #########           #########       \n");
            printf("\t\t\t\t    #####          #####          #####   \n");
            printf("\t\t\t\t    ##           #########            ##  \n");
            printf("\t\t\t\t    ##          ###########           ##  \n");
            printf("\t\t\t\t    ##              ######            ##  \n");
            printf("\t\t\t\t    ##             #######            ##  \n");
            printf("\t\t\t\t    ##      ##   #########            ##  \n");
            printf("\t\t\t\t    ##     ##############     # #     ##  \n");
            printf("\t\t\t\t    ##     ###########        ##      ##  \n");
            printf("\t\t\t\t    ##    #############       ###     ##  \n");
            printf("\t\t\t\t    ##    ###  ###########     ##     ##  \n");
            printf("\t\t\t\t    ##      ##    #########    ##     ##  \n");
            printf("\t\t\t\t    ##       #     ######### ###      ##  \n");
            printf("\t\t\t\t    ##             ###########        ##  \n");
            printf("\t\t\t\t    ##             ####### #         ##   \n");
            printf("\t\t\t\t     ##       ##   #######          ##    \n");
            printf("\t\t\t\t      ##      ###########          ##     \n");
            printf("\t\t\t\t       ##             ###         ##      \n");
            printf("\t\t\t\t        ##           ##          ##       \n");
            printf("\t\t\t\t         ##         ##          ##        \n");
            printf("\t\t\t\t          ##      ###          ##         \n");
            printf("\t\t\t\t           ###               ##           \n");
            printf("\t\t\t\t             ##            ###            \n");
            printf("\t\t\t\t               ###       ###              \n");
            printf("\t\t\t\t                ###  ###                  \n");
            printf("\t\t\t\t                   ##                     \n");
            Sleep(100);
            system("cls");

            printf("\n\n\n\t\t\t\t\t              ###############             \n");
            printf("\t\t\t\t\t      #########           #########       \n");
            printf("\t\t\t\t\t    #####          #####          #####   \n");
            printf("\t\t\t\t\t    ##           #########            ##  \n");
            printf("\t\t\t\t\t    ##          ###########           ##  \n");
            printf("\t\t\t\t\t    ##              ######            ##  \n");
            printf("\t\t\t\t\t    ##             #######            ##  \n");
            printf("\t\t\t\t\t    ##      ##   #########            ##  \n");
            printf("\t\t\t\t\t    ##     ##############     # #     ##  \n");
            printf("\t\t\t\t\t    ##     ###########        ##      ##  \n");
            printf("\t\t\t\t\t    ##    #############       ###     ##  \n");
            printf("\t\t\t\t\t    ##    ###  ###########     ##     ##  \n");
            printf("\t\t\t\t\t    ##      ##    #########    ##     ##  \n");
            printf("\t\t\t\t\t    ##       #     ######### ###      ##  \n");
            printf("\t\t\t\t\t    ##             ###########        ##  \n");
            printf("\t\t\t\t\t    ##             ####### #         ##   \n");
            printf("\t\t\t\t\t     ##       ##   #######          ##    \n");
            printf("\t\t\t\t\t      ##      ###########          ##     \n");
            printf("\t\t\t\t\t       ##             ###         ##      \n");
            printf("\t\t\t\t\t        ##           ##          ##       \n");
            printf("\t\t\t\t\t         ##         ##          ##        \n");
            printf("\t\t\t\t\t          ##      ###          ##         \n");
            printf("\t\t\t\t\t           ###               ##           \n");
            printf("\t\t\t\t\t             ##            ###            \n");
            printf("\t\t\t\t\t               ###       ###              \n");
            printf("\t\t\t\t\t                ###  ###                  \n");
            printf("\t\t\t\t\t                   ##                     \n");
            Sleep(100);
            system("cls");

            printf("\n\n\n\t\t\t\t\t\t              ###############             \n");
            printf("\t\t\t\t\t\t      #########           #########       \n");
            printf("\t\t\t\t\t\t    #####          #####          #####   \n");
            printf("\t\t\t\t\t\t    ##           #########            ##  \n");
            printf("\t\t\t\t\t\t    ##          ###########           ##  \n");
            printf("\t\t\t\t\t\t    ##              ######            ##  \n");
            printf("\t\t\t\t\t\t    ##             #######            ##  \n");
            printf("\t\t\t\t\t\t    ##      ##   #########            ##  \n");
            printf("\t\t\t\t\t\t    ##     ##############     # #     ##  \n");
            printf("\t\t\t\t\t\t    ##     ###########        ##      ##  \n");
            printf("\t\t\t\t\t\t    ##    #############       ###     ##  \n");
            printf("\t\t\t\t\t\t    ##    ###  ###########     ##     ##  \n");
            printf("\t\t\t\t\t\t    ##      ##    #########    ##     ##  \n");
            printf("\t\t\t\t\t\t    ##       #     ######### ###      ##  \n");
            printf("\t\t\t\t\t\t    ##             ###########        ##  \n");
            printf("\t\t\t\t\t\t    ##             ####### #         ##   \n");
            printf("\t\t\t\t\t\t     ##       ##   #######          ##    \n");
            printf("\t\t\t\t\t\t      ##      ###########          ##     \n");
            printf("\t\t\t\t\t\t       ##             ###         ##      \n");
            printf("\t\t\t\t\t\t        ##           ##          ##       \n");
            printf("\t\t\t\t\t\t         ##         ##          ##        \n");
            printf("\t\t\t\t\t\t          ##      ###          ##         \n");
            printf("\t\t\t\t\t\t           ###               ##           \n");
            printf("\t\t\t\t\t\t             ##            ###            \n");
            printf("\t\t\t\t\t\t               ###       ###              \n");
            printf("\t\t\t\t\t\t                ###  ###                  \n");
            printf("\t\t\t\t\t\t                   ##                     \n");
            Sleep(100);
            system("cls");

            printf("\n\n\n\t\t\t\t\t\t\t              ###############             \n");
            printf("\t\t\t\t\t\t\t     #########           #########       \n");
            printf("\t\t\t\t\t\t\t    #####          #####          #####   \n");
            printf("\t\t\t\t\t\t\t    ##           #########            ##  \n");
            printf("\t\t\t\t\t\t\t    ##          ###########           ##  \n");
            printf("\t\t\t\t\t\t\t    ##              ######            ##  \n");
            printf("\t\t\t\t\t\t\t    ##             #######            ##  \n");
            printf("\t\t\t\t\t\t\t    ##      ##   #########            ##  \n");
            printf("\t\t\t\t\t\t\t    ##     ##############     # #     ##  \n");
            printf("\t\t\t\t\t\t\t    ##     ###########        ##      ##  \n");
            printf("\t\t\t\t\t\t\t    ##    #############       ###     ##  \n");
            printf("\t\t\t\t\t\t\t    ##    ###  ###########     ##     ##  \n");
            printf("\t\t\t\t\t\t\t    ##      ##    #########    ##     ##  \n");
            printf("\t\t\t\t\t\t\t    ##       #     ######### ###      ##  \n");
            printf("\t\t\t\t\t\t\t    ##             ###########        ##  \n");
            printf("\t\t\t\t\t\t\t    ##             ####### #         ##   \n");
            printf("\t\t\t\t\t\t\t     ##       ##   #######          ##    \n");
            printf("\t\t\t\t\t\t\t      ##      ###########          ##     \n");
            printf("\t\t\t\t\t\t\t       ##             ###         ##      \n");
            printf("\t\t\t\t\t\t\t        ##           ##          ##       \n");
            printf("\t\t\t\t\t\t\t         ##         ##          ##        \n");
            printf("\t\t\t\t\t\t\t          ##      ###          ##         \n");
            printf("\t\t\t\t\t\t\t           ###               ##           \n");
            printf("\t\t\t\t\t\t\t             ##            ###            \n");
            printf("\t\t\t\t\t\t\t               ###       ###              \n");
            printf("\t\t\t\t\t\t\t                ###  ###                  \n");
            printf("\t\t\t\t\t\t\t                   ##                     \n");
            Sleep(2000);
            system("cls");


            ///PERGUNTAS DE GAMES
            printf("\x1b[33m\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tREGRAS                  \x1b[0m\n");
            printf("\x1b[36m\n\n\t\t\t\t\t\t\t|---------------------------------------|\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| Um jogo de perguntas e respostas �    |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| onde os jogadores respondem a quest�es|\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| para ganhar pontos. Eles podem  ser   |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| individuais ou em equipes, com regras |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| definindo como as perguntas s�o       |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| feitas, quem responde e como os pontos|\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| s�o concedidos. Os temas das quest�es |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| podem variar amplamente. Esses jogos  |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| s�o populares por sua divers�o,       |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| desafio e aprendizado.                |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t|---------------------------------------|\x1b[0m\n");
            system("pause");
            system("cls");


            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         1� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQuando Max Verstappen estreou na F�rmula 1?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) 2014\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) 2022\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) 2015\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) 2009\x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA:  ");
            scanf("%s", &resposta);
            if(resposta[0]=='C' || resposta[0]=='c'){
                printf("\n\n\t\t\x1b[32m RESPOSTA CORRETA!\x1b[0m\n");
                printf("");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='C' || resposta[0]!='c'){
                printf("\n\n\t\t\x1b[31m RESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            system("Pause");
            system("cls");


            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         2� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQuem � o piloto com mais vit�rias na F�rmula 1?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) LEWIS HAMILTON\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) CHARLES LECLERC\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) MAX VERSTAPPEN\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) SEBASTIAN VETTEL\x1b[0m\n");

            printf("\n\n\n\n\t\t\t\tRESPOSTA:  ");
            scanf("%s", &resposta);
            if(resposta[0]=='a' || resposta[0]=='A'){
                printf("\n\n\t\t\x1b[32m RESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='a' || resposta[0]!='A'){
                printf("\n\n\t\t\x1b[31m RESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
                }
                exibirPontuacao("");
                system("Pause");
                system("cls");


            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         3� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual piloto criou uma marca de sorvete?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) AYRTON SENNA\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) LANDO NORRIS\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) FERNANDO ALONSO\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) CHARLES LECLERC\x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA:  ");
            scanf("%s", &resposta);
            if(resposta[0]=='d' || resposta[0]=='D'){
                printf("\n\n\t\t\x1b[32m RESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='d' || resposta[0]!='D'){
                printf("\n\n\t\t\x1b[31m RESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);

                }
                exibirPontuacao("");
                system("Pause");
                system("cls");


            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         4� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQuantas vit�rias Lando Norris tem?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) 21\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) 1\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) 10\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) 3\x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA:  ");
            scanf("%s", &resposta);
            if(resposta[0]=='b' || resposta[0]=='B'){
                printf("\n\n\t\t\x1b[32m RESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='B' || resposta[0]!='b'){
                printf("\n\n\t\t\x1b[31m RESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
                }
                exibirPontuacao("");
                system("Pause");
                system("cls");


            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         5� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual a cor a Ferrari escolheu para comemorar os 70 anos nos Estados Unidos?  \x1b[0m\n");
            printf("\x1b[37m\t\t\t\tno GP de Miami?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) AZUL LAPLACE\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) VERMELHO AMARANTO\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) LARANJA SUNSHADE\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) ROXO MULBERRY\x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA:  ");
            scanf("%s", &resposta);
            if(resposta[0]=='A' || resposta[0]=='a'){
                printf("\n\n\t\t\x1b[32m RESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='A' || resposta[0]!='a'){
                printf("\n\n\t\t\x1b[31m RESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
                }
                exibirPontuacao("");
                system("Pause");
                system("cls");


            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         6� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual o menor percurso da F�rmula 1?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) MELBOURNE\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) GILLES-VILLENEUVE\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) M�NACO\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) LAS VEGAS STREET\x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA::  ");
            scanf("%s", &resposta);
            if(resposta[0]=='C' || resposta[0]=='c'){
                printf("\n\n\t\t\x1b[32m RESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='C' || resposta[0]!='c'){
                printf("\n\n\t\t\x1b[31m RESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
                }
                exibirPontuacao("");
                system("Pause");
                system("cls");


            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         7� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tEm que ano a categoria de automobilismo foi oficialmente renomeada como F�rmula 1?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) 1946 \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) 1960\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) 1970 \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) 1950 \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='d' || resposta[0]=='D'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='d' || resposta[0]!='D'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");



            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         8� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual � o pa�s de origem da equipe Red Bull Racing na F�rmula 1?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA)It�lia\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB)�ustria \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC)Alemanha \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD)Reino Unido \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='b' || resposta[0]=='B'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='b' || resposta[0]!='B'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");



            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         9� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual � o recorde de vit�rias consecutivas em uma �nica temporada da F�rmula 1?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) 10 vit�rias \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) 11 vit�rias \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) 12 vit�rias \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) 13 vit�rias \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='c' || resposta[0]=='C'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='c' || resposta[0]!='C'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");



            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         10� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual foi o primeiro piloto japon�s a vencer um Grande Pr�mio de F�rmula 1?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) Takuma Sato \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) Kamui Kobayashi \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) Ryo Hirakawa \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) Kazuki Nakajima \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='a' || resposta[0]=='A'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='a' || resposta[0]!='A'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");



             printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         11� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual equipe de F�rmula 1 det�m o recorde de mais vit�rias consecutivas em uma �nica temporada?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) Red Bull Racing \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) McLaren \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) Ferrari \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) Mercedes \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='c' || resposta[0]=='C'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='c' || resposta[0]!='C'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");



             printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         12� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQuem foi o primeiro piloto a conquistar um t�tulo mundial de F�rmula 1 pela equipe McLaren?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) James Hunt \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) Niki Lauda \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) Emerson Fittipaldi \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) Alain Prost \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='a' || resposta[0]=='A'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='a' || resposta[0]!='A'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");


        system("cls");
        printf("\x1b[33m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   RESULTADO FINAL                       \x1b[0m\n\n\n");
        printf("\x1b[37m\t\t\t\t  Pontua��o Total: %d\n\x1b[0m", pontuacao);
        printf("\x1b[37m\t\t\t\t  Respostas Corretas: %d\n\x1b[0m", certo);
        printf("\x1b[37m\t\t\t\t  Respostas Erradas: %d\n\x1b[0m", errado);
        printf("\n\n\n\n\t\t\t\t");
        getch();


            break;
            ///PERGUNTAS SOBRE GEOGRAFIA
        case 4:


            ///PERGUNTAS DE GAMES
            printf("\x1b[33m\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tREGRAS                  \x1b[0m\n");
            printf("\x1b[36m\n\n\t\t\t\t\t\t\t|---------------------------------------|\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| Um jogo de perguntas e respostas �    |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| onde os jogadores respondem a quest�es|\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| para ganhar pontos. Eles podem  ser   |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| individuais ou em equipes, com regras |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| definindo como as perguntas s�o       |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| feitas, quem responde e como os pontos|\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| s�o concedidos. Os temas das quest�es |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| podem variar amplamente. Esses jogos  |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| s�o populares por sua divers�o,       |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t| desafio e aprendizado.                |\x1b[0m\n");
            printf("\x1b[36m\t\t\t\t\t\t\t|---------------------------------------|\x1b[0m\n");
            system("pause");
            system("cls");


            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         1� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual o maior oceano do mundo?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) OCEANO ATL�NTICO\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) OCEANO PAC�FICO\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) OCEANO �RTICO\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) OCEANO �NDICO\x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA:   ");
            scanf("%s", &resposta);
            if(resposta[0]=='B' || resposta[0]=='b'){
                printf("\n\n\t\t\x1b[32m RESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='B' || resposta[0]!='b'){
                printf("\n\n\t\t\x1b[31m RESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
                }
                exibirPontuacao("");
                system("Pause");
                system("cls");


            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         2� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual � o maior rio do mundo?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) RIO NILO\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) RIO YANGTZE\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) RIO AMAZONAS\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) RIO MISSISSIPI\x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='c' || resposta[0]=='C'){
                printf("\n\n\t\t\x1b[32m RESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='c' || resposta[0]!='C'){
                printf("\n\n\t\t\x1b[31m RESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
                }
                exibirPontuacao("");
                system("Pause");
                system("cls");


            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         3� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual o ponto mais alto da Terra?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) MONTE MCKINLEY (DENALI)\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) MONTE KILIMANJARO\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) MONTE VINSON\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) MONTE EVEREST\x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA:  ");
            scanf("%s", &resposta);
            if(resposta[0]=='D' || resposta[0]=='d'){
                printf("\n\n\t\t\x1b[32m RESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='d' || resposta[0]!='D'){
                printf("\n\n\t\t\x1b[31m RESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
                }
                exibirPontuacao("");
                system("Pause");
                system("cls");

            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         4� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual � a cordilheira mais longa do mundo?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) CORDILHEIRA DOS ANDES\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) MONTANHAS ROCHOSAS\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) CORDILHEIRA DO HIMALAIA\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) MONTANHA DOS APALACHES\x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='A' || resposta[0]=='a'){
                printf("\n\n\t\t\x1b[32m RESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='a' || resposta[0]!='A'){
                printf("\n\n\t\t\x1b[31m RESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
                }
                exibirPontuacao("");
                system("Pause");
                system("cls");

            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         5� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual o pa�s mais populoso do mundo?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) �NDIA\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) CHINA\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) ESTADOS UNIDOS\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) RUSSIA\x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='a' || resposta[0]=='A'){
                printf("\n\n\t\t\x1b[32m RESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='A' || resposta[0]!='a'){
                printf("\n\n\t\t\x1b[31m RESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
                }
                exibirPontuacao("");
                system("Pause");
                system("cls");

            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         6� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual o pa�s com maior quantidade de ilhas no mundo?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) JAP�O\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) GR�CIA\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) INDON�SIA\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) NOVA ZEL�NDIA\x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='c' || resposta[0]=='C'){
                printf("\n\n\t\t\x1b[32m RESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='c' || resposta[0]!='C'){
                printf("\n\n\t\t\x1b[31m RESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
                }
                exibirPontuacao("");
                system("Pause");
                system("cls");


             printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         7� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual � a capital mais alta do mundo em termos de altitude?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) Kathmandu, Nepal \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) La Paz, Bol�viaq \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) Bogot�, Col�mbia \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) Quito, Equador \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='b' || resposta[0]=='B'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='b' || resposta[0]!='B'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");



            printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         8� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual � o ponto mais seco da Terra?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) Deserto da Ar�bia \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB) Deserto do Saara \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC) Deserto de Gobi \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD) Deserto de Atacama \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='d' || resposta[0]=='D'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='d' || resposta[0]!='D'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");



             printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         9� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual � o nome da corrente oce�nica que flui ao redor do continente australiano?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA)Corrente do Golfo \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB)Corrente de Benguela \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC)Corrente Circumpolar Ant�rtica \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD)Corrente de Humboldt \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='c' || resposta[0]=='C'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='c' || resposta[0]!='C'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");



             printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         10� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual � o pa�s mais populoso da �frica?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA) Rep�blica Democr�tica do Congo \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB)Nig�ria \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC)Eti�pia \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD)Egito \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='b' || resposta[0]=='B'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='b' || resposta[0]!='B'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");



             printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         11� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual � o pa�s que faz fronteira com mais pa�ses no mundo?  \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA)China \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB)Alemanha \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC)Brasil \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD)R�ssia \x1b[0m\n");
            printf("\n\n\n\n\t\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='d' || resposta[0]=='D'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='d' || resposta[0]!='D'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");



             printf("\x1b[37m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t         12� PERGUNTA                     \x1b[0m\n\n\n");
            printf("\x1b[37m\t\t\t\tQual � o ponto mais ao sul do continente africano? \x1b[0m\n");
            printf("\x1b[36m\n\t\t\t\tA)Cabo Verde \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tB)Cabo da Boa Esperan�a \x1b[0m\n");
            printf("\x1b[36m\t\t\t\tC)Cabo Horn\x1b[0m\n");
            printf("\x1b[36m\t\t\t\tD)Cabo das Agulhas \x1b[0m\n");
            printf("\n\n\n\n\t\t\tRESPOSTA: ");
            scanf("%s", &resposta);
            if(resposta[0]=='d' || resposta[0]=='D'){
                printf("\n\n\t\t\t\t\x1b[32mRESPOSTA CORRETA!\x1b[0m\n");
                certo++;
                adicionarPontos(10);
            }
            else if(resposta[0]!='d' || resposta[0]!='D'){
                printf("\n\n\t\t\t\t\x1b[31mRESPOSTA ERRADA!\x1b[0m\n");
                errado++;
                subtrairpontos(5);
            }
            exibirPontuacao("");
            printf("\n\n\t");
            system("pause");
            system("cls");


          system("cls");
        printf("\x1b[33m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   RESULTADO FINAL                       \x1b[0m\n\n\n");
        printf("\x1b[37m\t\t\t\t  Pontua��o Total: %d\n\x1b[0m", pontuacao);
        printf("\x1b[37m\t\t\t\t  Respostas Corretas: %d\n\x1b[0m", certo);
        printf("\x1b[37m\t\t\t\t  Respostas Erradas: %d\n\x1b[0m", errado);
        printf("\n\n\n\n\t\t\t\t");
        getch();
            break;

        case 5:
            ///VOLTA PARA MENU PRINCIPAL
            sair =1;
            break;

            default:
            printf("Op��o inv�lida\n");
           }
         }while(!sair);
          sair=0;
          /// FINAL DO SISTEMA DO MENU DO JOGO
        break;

           ///FINAL DO SWITCH DO MENU PRINCIPAL
         case 2:
            printf("\033[0;37m\n\n\n\n\n\t\t\t\t             CREDITO            \x1b[0m\n");
            printf("\033[0;32m\n\n\n\t\t\t\tCRIADOR POR:\x1b[0m\n ");
            printf("\n\t\t\t\tNATALY AQUINO DOS SANTOS");
            printf("\n\t\t\t\tGUILHERME ILIEV SANTOS SOBRAL");
            printf("\033[0;32m\n\n\n\t\t\t\tPROFESSOR REPONSAVEL:\x1b[0m\n ");
            printf("\n\t\t\t\tPROFESSOR ENIR FONSECA");
            printf ("\n\n\n");
            system("pause");
            sair = 1;
            system("cls");
            break;
        case 3:
            ///sistema de pontua��o
            printf("\033[1;33m\n\n\n\n\n\t\t\t\t\t\t\t\tSISTEMA DE PONTUA��O\x1b[0m");
            printf("\033[1;33m\n\n\t\t\t\t\t\t               PONTUA��O DE %s � : %i            \n",nome,pontuacao);

            getch();
            system("cls");
            getch();
            break;

        case 4:
            exit(0);
            break;

            default:
    printf("\33[0;\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t31mOP��O INVALIDA\n\n");
    printf("\t\t\t\t\t\t\t\t :::::::::::::::. \n");
    printf("\t\t\t\t\t\t\t\t@@@@@@@@@@@@@@@+\n");
    printf("\t\t\t\t\t\t\t\t@@%%%%%%%%%@@@%+.\n");
    printf("\t\t\t\t\t\t\t\t@@         +@= =@-\n");
    printf("\t\t\t\t\t\t\t\t@@         +@= -#=.\n");
    printf("\t\t\t\t\t\t\t\t@@         +@=   *@:\n");
    printf("\t\t\t\t\t\t\t\t@@   .-:   +@=   =*--\n");
    printf("\t\t\t\t\t\t\t\t@@   -@%   +@=     #@:\n");
    printf("\t\t\t\t\t\t\t\t@@  +*@@++ +@#+++++%@:\n");
    printf("\t\t\t\t\t\t\t\t@@ .@@@@@@ +@@@@@@@@@:\n");
    printf("\t\t\t\t\t\t\t\t@@ .*#@@** -*******@@:\n");
    printf("\t\t\t\t\t\t\t\t@@   -@%           #@:\n");
    printf("\t\t\t\t\t\t\t\t@@   :+=           #@:\n");
    printf("\t\t\t\t\t\t\t\t@@                 #@:\n");
    printf("\t\t\t\t\t\t\t\t@@                 #@: \n");
    printf("\t\t\t\t\t\t\t\t@@                 #@:\n");
    printf("\t\t\t\t\t\t\t\t@@                 #@:\n");
    printf("\t\t\t\t\t\t\t\t@@     :@@@@@=     #@:\n");
    printf("\t\t\t\t\t\t\t\t@@     :@@@@@=     #@:\n");
    printf("\t\t\t\t\t\t\t\t@@   -@#     +@+   #@:\n");
    printf("\t\t\t\t\t\t\t\t@@   -@%     +@+   #@: \n");
    printf("\t\t\t\t\t\t\t\t@@                 #@:  \n");
    printf("\t\t\t\t\t\t\t\t@@                 #@:  \n");
    printf("\t\t\t\t\t\t\t\t@@                 #@:  \n");
    printf("\t\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@:\n");
    printf("\t\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@:\n");
    printf("\t\t\t\t\t\t\t\t.....................");

            Sleep(1000);
            system("cls");
            sair = 1;

        }
     }while(op != 4);
     ///CHAVE FINAL DO CODIGO.
     }

