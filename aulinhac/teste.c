#include <stdio.h>
int main(){
char nome[60];
int idade;
    printf( "Digite seu nome: ");
    scanf( "%s", nome);

    printf( "Digite sua idade: ");
    scanf( "%d", &idade);

    printf( "Seu nome é %s e sua idade é %d", nome, idade);
}
