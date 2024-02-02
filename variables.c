//libreria standard input e output
#define PI 3.14
#include<stdio.h> 
int main(){
    // variabili

    // tipo - nome
    int numero;
    // dichiarazione
    int n1;
    float n2;
    double n3;
    char c;

    // inizializzazione
    n1 = 4;
    int somma = 0;

    // lettura
    printf("Inserisci un numero int \n");
    scanf("%d",&n1);
    printf("Inserisci un numero float \n");
    scanf("%f",&n2);
    printf("Inserisci un numero double \n");
    scanf("%lf",&n3);
    printf("Inserisci un char \n");
    scanf("%c",&c);

    // stampa
    printf("Stampo un int %d ", n1);
    printf("Stampo un float %f ", n2);
    printf("Stampo un int %lf ", n3);
    printf("Stampo un chat %c", c);



    return 0;

}