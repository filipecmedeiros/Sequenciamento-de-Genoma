/*Programador: Filipe Cordeiro de Medeiros Azevêdo*/

/*Algoritmo: Greedy
O problema consiste em achar a menor "superstring" em um conjunto de strings menores, este
problema é NP-Completo então foi usada uma estratégia de algoritmo guloso que vai selecionar
o objetivo mais "atraente" e adicionar a solução. A complexidade do algoritmo aplicado é
exponencial. Durante o tempo de implementação não foi reconhecido nenhum algoritmo que resolva
o problema em tempo polinomial.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*A função compara duas strings e retorna o número de caracteres consecutivos iguais
(tamanho da substring)*/
int f_compara (char* str1, char* str2){
    int i, j, n, overlap=0;

    for(i=0; str1[i]!= '\0'; i++){
        for(j=0; str2[j]!='\0'; j++){
            for (n=0; str1[i+n]==str2[j+n] && str1[i+n] != '\0'; n++){ //se encontrar caracteres iguais, verifica até onde vai
            }

            if (n>overlap){
                overlap = n;
            }
        }
    }


    return overlap;
}

/*A funcao subtrai "n" caracteres iniciais da string*/
void f_str (char*str, int n){
    int i;

    for (i=0; i<n; i++){
        str[i] = str[n+i];
    }
}


int main()
{
    freopen ("input.txt", "r", stdin); //função para usar arquivo como entrada "padrao"
    freopen ("output.txt", "w", stdout);

    char dna [10000], read [1000][1000];
    int n, i, j, overlap, teste, posicao;

    printf ("input:\n");
    for (n=0; scanf ("%s", read[n])==1; n++){//coleta entrada
        printf ("%s\n", read[n]);
    }
    printf("\n");

    strcpy(dna, read[0]); //caso base
    for (i=1; i<n; i++){
        for (j=1, overlap=0; j<n;j++){  //compara o dna com todos os reads restantes
            if (read[j] != NULL){
                teste = f_compara (dna, read[j]); //detecta o read que tem mais caracteres em comum (overlap) com o dna

                if (teste > overlap){ //salva a posicao do maior overlap
                    overlap = teste;
                    posicao = j;
                }
            }
        }
        f_str(read[posicao], overlap);//retira a parte já existente no dna
        strcat(dna, read[posicao]); //concatena com o dna
        free(read[posicao]); //retira a string da lista
    }

    printf ("output:\n%s\n", dna);

    return 0;
}
