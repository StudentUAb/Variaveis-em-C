#include <stdio.h>
// livreria de entrada e saida é obrigatorio para um programa basico em C

#include <locale.h>

int main(void) {

    //permite utilizar acentos
    setlocale(LC_ALL,"");
    // Imprime ola
    printf("Óla\n");

    // trabalhando com variaveis inteiras

    int a = 50;
    printf("O valor de a é %d \n",a);
    scanf("%d", &a);
    printf("O valor de a mudou para %d \n" ,a);

    // trabalhando com variaveis fracionadas
    float b = 5.5;
    printf("O valor de b é %f \n",b);
    scanf("%f", &b);
    printf("O valor de b mudou para %f \n" ,b);

    // trabalhando com caracteres
    char c = 't';
    printf("O valor de c é %c \n",c);

    // mudar o valor de varievel de caracter
    scanf(" %c", &c);
    printf("O valor de c mudou para %c \n" ,c);

    return 0;
}
