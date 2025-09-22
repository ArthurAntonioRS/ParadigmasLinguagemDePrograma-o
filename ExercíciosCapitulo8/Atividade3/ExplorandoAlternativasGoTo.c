#include <stdio.h>

//--Primeira Atividade--//
int processa_lista(int lista[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (lista[i] == 0) {
            
            break;
        }

        if (lista[i] < 0) {
            
            continue;
        }

        if (lista[i] % 2 == 0) {
            
            return lista[i] * 2;
        }
    }

    
    return -1;
}

int main() {
    int numeros[] = {3, -5, 7, -2, 4, 0, 10};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    int resultado = processa_lista(numeros, tamanho);

    if (resultado != -1) {
        printf("O dobro do primeiro n�mero par encontrado �: %d\n", resultado);
    } else {
        printf("Nenhum n�mero par encontrado antes do zero.\n");
    }

    return 0;
}


//--Segunda Atividade--//
/* Se esse mesmo programa fosse implementado utilizando apenas goto e r�tulos,
seria necess�rio criar pontos de desvio manuais no c�digo e controlar a execu��o 
saltando de um r�tulo para outro. Isso tornaria o c�digo menos leg�vel e mais dif�cil 
de manter, j� que seria preciso acompanhar constantemente para onde o fluxo est� sendo direcionado.
Na abordagem moderna, utilizando estruturas como break, continue e return, o c�digo fica mais claro, 
organizado e f�cil de compreender, al�m de reduzir a chance de erros. O uso de goto pode gerar 
o chamado spaghetti code (c�digo desorganizado e confuso), enquanto as estruturas de controle 
modernas fornecem um fluxo de execu��o muito mais intuitivo.Por isso, a utiliza��o 
de break, continue e return � considerada uma boa pr�tica. */
