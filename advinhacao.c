#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // duas barras cria um comentario no codigo
    printf("              .-""""-.                                                       \n");
    printf("             /        \\                                                     \n");
    printf("            /_        _\\                                                    \n");
    printf("           // \\      / \\\\                                                 \n");
    printf("           |\\__\\    /__/|                                                  \n");
    printf("            \\    ||    /                                                    \n");
    printf("             \\        /                                                     \n");
    printf("              \\  __  /  \\  /          ________________________________     \n");
    printf("               '.__.'    \\/          /                                 \\   \n");
    printf("                |  |     /\\         |             Bem vindo ao:         |   \n");
    printf("                |  |    O  O        |          Jogo de advinha�?o !     |    \n");
    printf("                ----    //         O \\_________________________________/    \n");
    printf("               (    )  //        O                                           \n");
    printf("              (\\\\     //       o                                           \n");
    printf("             (  \\\\    )      o                                             \n");
    printf("             (   \\\\   )   /\\                                              \n");
    printf("   ___[\\______/^^^^^^^\\__/) o-)__                                          \n");
    printf("  |\\__[=======______//________)__\\                                         \n");
    printf("  \\|_______________//____________|                                          \n");
    printf("      |||      || //||     |||                                               \n");
    printf("      |||      || @.||     |||                                               \n");
    printf("       ||      \\/  .\\/      ||                                             \n");
    printf("                  . .                                                        \n");
    printf("                 '.'.`                                                       \n");

    srand(time(0));
    int numerosecreto = rand() % 100;

    int chute;
    int tentativa = 1;
    double pontos = 50;

    int nivel;
    int numerodetentativas;

    printf("Nivel (1) Dificil | (2) M�dio | (3) F�cil\n");
    printf("Escolha o n�vel de dificuldade: ");
    scanf("%d", &nivel);

    switch (nivel)
    {
    case 1:
        numerodetentativas = 5;
        break;

    case 2:
        numerodetentativas = 10;
        break;

    default:
        numerodetentativas = 20;
        break;
    }

    for (int i = 0; i < numerodetentativas; i++)
    {
        printf("Tentativa %d.\n", tentativa);
        printf("Digite um numero positivo: \n");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if (chute < 0)
        {
            printf("Voc� digitou um numero negativo. Tente novamente!\n");
            continue;
        }

        if (chute == numerosecreto)
        {
            printf("                             .---'::'        `---.    \n");
            printf("                                  ___________         \n");
            printf("                            (::::::'              )   \n");
            printf("                            |`-----._______.-----'|   \n");
            printf("                            |              :::::::|   \n");
            printf("                           .|               ::::::!-. \n");
            printf("                           \\|               :::::/|/ \n");
            printf("                            |               ::::::|   \n");
            printf("                            |    Voc� ganhou!:::::|   \n");
            printf("                            |    Parab�ns    :::::|   \n");
            printf("                            |               ::::::|   \n");
            printf("                            |              .::::::|   \n");
            printf("                            J              :::::::F   \n");
            printf("                             \\            :::::::/   \n");
            printf("                              `.        .:::::::'     \n");
            printf("                                `-._  .::::::-'       \n");
            printf("                                    |  '''|           \n");
            printf("                                    |  :::|           \n");
            printf("                                    F   ::J           \n");
            printf("                                   /     ::\\         \n");
            printf("                              __.-'      :::`-.__     \n");
            printf("                             (_           ::::::_)    \n");
            printf("                               `'''---------''''      \n");

            printf("Voc� acertou na %d tentativa e fez %.1f pontos.\n", tentativa, pontos);
            break;
        }
        else
        {
            if (chute < numerosecreto)
            {
                printf("O seu chute � menor que o numero secreto!\n");
                tentativa++;
            }

            if (chute > numerosecreto)
            {
                printf("O seu chute � maior que o numero secreto!\n");
                tentativa++;
            }
        }

        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;
        printf("Pontos: %.1f\n", pontos);

        if (pontos <= 0)
        {
            printf("              .-""""-.                                                       \n");
printf("             /        \\                                                     \n");
printf("            /_        _\\                                                    \n");
printf("           // \\      / \\\\                                                 \n");
printf("           |\\__\\    /__/|                                                  \n");
printf("            \\    ||    /                                                    \n");
printf("             \\        /                                                     \n");
printf("              \\  __  /  \\  /          ________________________________     \n");
printf("               '.__.'    \\/         /                                 \\   \n");
printf("                |  |     /\\        |             Voc� perdeu :(        |   \n");
printf("                |  |    O  O        |                                   |    \n");
printf("                ----    //         O \\_________________________________/    \n");
printf("               (    )  //        O                                           \n");
printf("              (\\\\     //       o                                           \n");
printf("             (  \\\\    )      o                                             \n");
printf("             (   \\\\   )   /\\                                              \n");
printf("   ___[\\______/^^^^^^^\\__/) o-)__                                          \n");
printf("  |\\__[=======______//________)__\\                                         \n");
printf("  \\|_______________//____________|                                          \n");
printf("      |||      || //||     |||                                               \n");
printf("      |||      || @.||     |||                                               \n");
printf("       ||      \\/  .\\/      ||                                             \n");
printf("                  . .                                                        \n");
printf("                 '.'.`                                                       \n");
            break;
        }
    }
}
