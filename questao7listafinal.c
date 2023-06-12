#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];  // assumindo que o nome terá no máximo 50 caracteres

    printf("Digite um nome: ");
    scanf("%s", nome);

    // Verifica se o nome tem pelo menos 4 letras
    if (strlen(nome) >= 4) {
        // Imprime as 4 primeiras letras do nome
        printf("As 4 primeiras letras do nome sao: ");
        for (int i = 0; i < 4; i++) {
            printf("%c", nome[i]);
        }
        printf("\n");
    } else {
        printf("O nome nao tem pelo menos 4 letras.\n");
    }

    return 0;
}