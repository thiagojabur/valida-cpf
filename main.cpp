#include <iostream>
#include <string.h>
#include <stdlib.h>

int valida_cpf(char cpf[12]) {
    if (strlen(cpf) != 11)
        return 0;

    int convertidoEmInteiro, vetorCPF[11];
    for (int i=0; i<11; i++) {
        int convertidoEmInteiro = (int) (cpf[i] > 47 && cpf[i] < 58) ? cpf[i] - 48 : -1;
        if (convertidoEmInteiro == -1)
            return 0;
        vetorCPF[i] = convertidoEmInteiro;
    }

    //Validação do primeiro dígito
    //for decrescente de 10 a 2
    int soma = 0;
    for (int i = 10; i >=2; i--) {
     soma = soma + vetorCPF[10-i] * i;
     printf("somou %i + %i * %i \n",soma, vetorCPF[10-i], i);
    }
     printf("%i",soma);

    return 1;
}

int main()
{
    char cpf[12];
    printf("Digite o CPF (somente numeros): ");
    gets(cpf);

    if (valida_cpf(cpf))
        printf("CPF valido");
    else
        printf("CPF invalido");



    return 0;
}
