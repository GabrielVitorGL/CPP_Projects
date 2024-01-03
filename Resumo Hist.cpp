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
    printf("3 - Imp�rio Macedonico\n");
    printf("4 - Religi�o\n");
    printf("5 - Cultura Gregas\n");

    printf("\nDigite uma op��o: ");
    scanf("%d", &opcao);
    fflush(stdin);
    if (opcao >= 1 && opcao <= 5)
    {

        switch (opcao)
        {
        case 1:
            printf("Em esparta, os magistrados e os gerontes eram elegidos por meio de assembleias realizadas ao ar livre uma v�z por m�s, que s� os homoioi participavam." 
            "Ap�s designados os gerontes, estes elegiam os cinco �foros, que detinham o maior poder governamental."
            "Este modelo de governo se chamava hegemonia, por�m n�o era t�o aceito e sim tolerado. Neste modelo era pro�bido que pessoas de outras cidades morassem em Esparta e meninos eram treinados desde crian�as para a guerra."
            "\n");
            break;
        case 2:
            printf("Atenas, ap�s a vit�ria na Batalha de Salamina, conseguiu aumentar seu poder econ�mico e impor sua hegemonia no mundo grego"
            "No governo de P�ricles, ocorreram grandes refor�os nas alican�as entre Atenas e a Crimeia e a Tr�cia, e impulsionou o desenvolvimento da filosofia e das artes, al�m de consolidar o regime democr�tico. Devido a todas estas conquistas, esta foi conhecida como a �poca de ouro de Atenas"
            "\n");
            break;
        case 3:
            printf("Na maced�nia foi adotado o idioma grego pelo grande respeito que Filipe II tinha por eles."
            "Ap�s a vit�ria da Maced�nia na Batalha de Queroneia, Filipe II teve a chance de dominar todo o mundo grego, por�m foi assasinado ao se preparar para uma expedi��o contra o Impr�rio Persa."
            "Ent�o, Alexandre O Grande, como era conhecido, assumiu o poder e transformou-se no maior general da Antiguidade."
            "\n");
            break;
        case 4:
            printf("A conviv�ncia entre diferentes culturas estimularam o sincretismo religioso. O deus grego Zeus, come�ou a ser identificado como Am�n, deus-Sol eg�picio, por exemplo."
            "O helenismo pode ser definido como uma mistura da cultura grega e das tradi��es orientais persas, eg�picios e mesopot�micos"
            "\n");
            break;
        case 5:
            printf("A Gr�cia tem uma cultura muito forte, tendo criado o teatro, por exemplo, e por meio dele tamb�m � trag�dia, com�dia e o drama"
            "A Gr�cia tamb�m foi conhecida como o ber�o da filosofia ocidental, sendo o lar de diversos grandes fil�sofos, como S�crates, Plat�o e Arist�teles"
            "\n");
            break;
        default:
            printf("Op��o invalida");
        }
    }
    system("pause");
}

