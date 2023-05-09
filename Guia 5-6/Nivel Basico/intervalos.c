#include <stdio.h>

int validarIntervalo(int limInf,int limSup){
    if(limInf>limSup){
        return 0;
    }else{
        return 1;
    }
}

void determinarInterseccion(double limInf1,double limSup1,double limInf2,double limSup2,double *limiteInferiorMax,double *limiteSuperiorMax){
    if(limInf1>limInf2){
        *limiteInferiorMax=limInf1;
    }else{
        *limiteInferiorMax=limInf2;
    }

    if(limSup1<limSup2){
        *limiteSuperiorMax=limSup1;
    }else{
        *limiteSuperiorMax=limSup2;
    }

    if(*limiteInferiorMax>*limiteSuperiorMax){
        printf("¿Los intervalos A y B se intersecan? No\n");
    }else{
        printf("¿Los intervalos A y B se intersecan? Si\n");
        printf("El intervalo de interseccion es: [%.2lf,%.2lf]",*limiteInferiorMax,*limiteSuperiorMax);
    }
}

int main(){
    double limInf1,limSup1;  
    double limInf2,limSup2;
    printf("Ingrese límite inferior y superior del primer intervalo: ");
    scanf("%lf %lf", &limInf1, &limSup1);
    printf("Ingrese límite inferior y superior del segundo intervalo: ");
    scanf("%lf %lf", &limInf2, &limSup2);
    int val1=validarIntervalo(limInf1,limSup1);
    int val2=validarIntervalo(limInf2,limSup2);

    if(val1==0 && val2==0){
        printf("Los intervalos no son validos");
    }else if(val1==1 && val2==0){
        printf("El primer intervalo es valido");
    }else if(val1==0 && val2==1){
        printf("El segundo intervalo es valido");
    }else{
        double limiteInferiorMax=0,limiteSuperiorMax=0;
        determinarInterseccion(limInf1,limSup1,limInf2,limSup2,&limiteInferiorMax,&limiteSuperiorMax);
    }
    return 0;
}