#include <stdio.h>
int main(){
    int celsius;
    
    printf( "Digite a temperatura em Celsius: ");
    scanf( "%d", &celsius);

    printf("%d °C = %d °F", celsius, celsius * 9/5 + 32);
}