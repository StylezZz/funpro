#include<stdio.h>

void leerDato(int *grado){
    printf("Ingrese el grado del polinomio: ");
    scanf("%d", grado);
}


void imprimirMensaje(int completo){
    if(completo==1){
        printf("El polinomio no es completo");
    }else{
        printf("El polinomio si es completo");
    }
}

int validarNumero(int coeficiente){
    if(coeficiente!=0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int grado;
    leerDato(&grado);
    int i=0,coeficiente,esDiferenteCero=1,bandera=0;
    while(i<=grado){
        printf("Ingrese el coeficiente del termino %d: ", i);
        scanf("%d", &coeficiente);
        esDiferenteCero=validarNumero(coeficiente);
        if(esDiferenteCero==0){
            bandera=1;
        }
        i++;
    }
    imprimirMensaje(bandera);

    return 0;
}
