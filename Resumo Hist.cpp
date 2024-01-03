#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int opcao;

    printf("Escolha um tema para ler um resumo sobre ele:\n");
    printf("1 - Esparta\n");
    printf("2 - Atenas\n");
    printf("3 - Império Macedonico\n");
    printf("4 - Religião\n");
    printf("5 - Cultura Gregas\n");

    printf("\nDigite uma opção: ");
    scanf("%d", &opcao);
    fflush(stdin);
    if (opcao >= 1 && opcao <= 5)
    {

        switch (opcao)
        {
        case 1:
            printf("Em esparta, os magistrados e os gerontes eram elegidos por meio de assembleias realizadas ao ar livre uma vêz por mês, que só os homoioi participavam." 
            "Após designados os gerontes, estes elegiam os cinco éforos, que detinham o maior poder governamental."
            "Este modelo de governo se chamava hegemonia, porém não era tão aceito e sim tolerado. Neste modelo era proíbido que pessoas de outras cidades morassem em Esparta e meninos eram treinados desde crianças para a guerra."
            "\n");
            break;
        case 2:
            printf("Atenas, após a vitória na Batalha de Salamina, conseguiu aumentar seu poder econômico e impor sua hegemonia no mundo grego"
            "No governo de Péricles, ocorreram grandes reforços nas alicanças entre Atenas e a Crimeia e a Trácia, e impulsionou o desenvolvimento da filosofia e das artes, além de consolidar o regime democrático. Devido a todas estas conquistas, esta foi conhecida como a época de ouro de Atenas"
            "\n");
            break;
        case 3:
            printf("Na macedônia foi adotado o idioma grego pelo grande respeito que Filipe II tinha por eles."
            "Após a vitória da Macedônia na Batalha de Queroneia, Filipe II teve a chance de dominar todo o mundo grego, porém foi assasinado ao se preparar para uma expedição contra o Imprério Persa."
            "Então, Alexandre O Grande, como era conhecido, assumiu o poder e transformou-se no maior general da Antiguidade."
            "\n");
            break;
        case 4:
            printf("A convivência entre diferentes culturas estimularam o sincretismo religioso. O deus grego Zeus, começou a ser identificado como Amón, deus-Sol egípicio, por exemplo."
            "O helenismo pode ser definido como uma mistura da cultura grega e das tradições orientais persas, egípicios e mesopotâmicos"
            "\n");
            break;
        case 5:
            printf("A Grécia tem uma cultura muito forte, tendo criado o teatro, por exemplo, e por meio dele também á tragédia, comédia e o drama"
            "A Grécia também foi conhecida como o berço da filosofia ocidental, sendo o lar de diversos grandes filósofos, como Sócrates, Platão e Aristóteles"
            "\n");
            break;
        default:
            printf("Opção invalida");
        }
    }
    system("pause");
}

