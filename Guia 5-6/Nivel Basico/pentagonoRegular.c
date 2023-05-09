#include<stdio.h>
#include<math.h>

void leerDato(double *lado,double *radio){
    printf("Ingrese el lado del pentagono: ");
    scanf("%lf",lado);
    printf("Ingrese el radio del circulo: ");
    scanf("%lf",radio);
}

void calcularApotema(double *apotema,double lado,double radio){
    *apotema = sqrt(pow(radio,2)-pow(lado/2,2));
}

void calcularArea(double *area,double lado,double apotema){
    *area = (lado*5*apotema)/2;
}

void imprimirResultados(double area,double apotema){
    printf("El area del pentagono es: %.2lf\n",area);
    printf("El apotema del pentagono es: %.2lf\n",apotema);
}

int main(){
    double lado,radio;
    leerDato(&lado,&radio);
    double apotema = 0,area=0;
    calcularApotema(&apotema,lado,radio);
    calcularArea(&area,lado,apotema);
    imprimirResultados(area,apotema);
    return 0;
}