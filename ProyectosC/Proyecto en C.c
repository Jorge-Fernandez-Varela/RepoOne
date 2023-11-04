#include <stdio.h>

int main () {

float peso, altura, imc;
printf("Hola, bienvenido al gimnasio Sergio Antonio\n");
printf("A continuacion haremos su evaluacion fisica, llene los siguientes datos que se le piden.\n");
printf("Introduzca su altura en metros: ");
scanf("%f", &altura);
printf("Introduzca su peso en kilogramos: ");
scanf("%f", &peso);

imc = peso / (altura*altura);
char condicion = (18.5 > imc) ? "Bajo peso" :
             (25 > imc) ? "Normal" : 
             (30 > imc) ? "Sobrepeso" : 
             "Obesidad";
float descuento;
descuento = (18.5 > imc) ? 0.05: (30 > imc) ? 0.1 : 0.15;

printf("Su IMC actual es: %.2f, y la interpretación es %s\n", imc, condicion);
printf("Como incentivo, obtiene un descuento del %.0f%% en la tarifa de memebresia del gimnasio.", descuento*100);

    return 0;
}