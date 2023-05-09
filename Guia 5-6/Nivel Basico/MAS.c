#include<stdio.h>
#define PI 3.1416

void leerDato(double *frecuenciaOscilacion){
    printf("Ingrese la frecuencia de oscilacion: ");
    scanf("%lf", frecuenciaOscilacion);
}

double hallarPeriodo(double frecuenciaOscilacion){
    double periodo = 1/frecuenciaOscilacion;
    
    return periodo;
}

double hallarFrecuenciaCiclica(double periodo){
    double w= (2*PI)/periodo;
    
    return w;
}

int main(){
    double frecuenciaOscilacion;
    leerDato(&frecuenciaOscilacion);
    
    double periodo = hallarPeriodo(frecuenciaOscilacion);
    double frecuenciaCiclica = hallarFrecuenciaCiclica(periodo);
    printf("El periodo es: %lf\n", periodo);
    printf("La frecuencia ciclica es: %lf", frecuenciaCiclica);
    return 0;
}

