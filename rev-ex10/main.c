#include <stdio.h>
#include <string.h>

int main()
{
    int soma1 = 0, soma2 = 0, digito1 = 0, digito2 = 0, iguais = 0, j, i;
    char cpf[12];
    
    printf("Digite o seu CPF(apenas numeros): ");
    fgets(cpf, 12, stdin);

    printf("%s\n", cpf);

    char inicial = cpf[0];
    for(i=1; i<11; i++){
        if(cpf[i] != inicial){
            iguais = 1;
            break;
        }
    }
    if(iguais == 0){
        printf("Todos os numeros sao iguais, CPF Invalido...\n");
        return 0;
    }


    for(i=10, j=0; i>1 && j<10; i--, j++){
        soma1 += (cpf[j] - '0') * i;
        

    }
    digito1 = (soma1*10)%11;
    if(digito1 == 10){
        digito1 = 0;
    }


    for(i=11, j=0; i>0 && j<10; i--, j++){
        soma2 += (cpf[j] - '0') * i;
        

    }
    digito2 = (soma2*10)%11;
    if(digito2 == 10){
        digito2 = 0;
    }

if (digito1 != cpf[9] - '0' || digito2 != cpf[10] - '0'){
    printf("CPF invalido...\n");
}
else{
    printf("CPF valido!");
}


    return 0;
}