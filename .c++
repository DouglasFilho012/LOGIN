SISTEMA DE CADASTRO DE CARROS POR PLACA XXXX-9999 FACULDADE 1º SEMESTRE 2021 - PROJETO DE ATIVIDADE/PROVA FMU 

#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>

typedef struct
{
    char letras[4];
    int digitos;
} PLACA;

int main()
{
    PLACA placas[5];
    
    printf("Digite a placa de um veiculo no formato XXX9999:\n");
    if((scanf("%3[a-zA-Z]%4d", placas[0].letras, &placas[0].digitos) == 2)
        && (strlen(placas[0].letras) == 3))
    {
        printf("\nTudo nos conformes :)");
    }
    else
    {
        printf("\nPlaca incorreta :(");
    }

    return 0;
}
