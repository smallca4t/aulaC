#include <stdio.h>
int main(){
char nome[50], telefone[15]
int idade;

printf( "Digite seu nome: ");
scanf( "%s", nome);

printf( "Digite sua idade: ");
scanf( "%d", &idade);

printf( "Digite seu número de telefone: ");
scanf( "%d", telefone);

printf( "Meu nome é %s, tenho %d anos, e meu número de telefone é %s.", nome, idade, telefone);
}