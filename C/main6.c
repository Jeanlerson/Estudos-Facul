#include <stdio.h>

int main() {
    int idade, soma = 0, contPessoas = 0;

    while(1) {
        printf("Digite a idade (ou 0 para encerrar): ");
        scanf("%d", &idade);

        if(idade == 0) {
            break;
        }

        if(idade < 0) {
            printf("Digite uma idade novamente! \n");
            continue;
        }

        soma += idade;
        contPessoas++;
    };

    if(contPessoas > 0) {
        float media = (float) soma / contPessoas;
        printf("Média das idades: %.2f \n", media);
    } else {
        printf("Nenhuma idade foi fornecida. \n");
    }

    return 0;
};