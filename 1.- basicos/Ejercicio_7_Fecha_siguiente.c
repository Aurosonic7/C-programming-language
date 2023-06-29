#include<stdio.h>
int esBisiesto(int a){
    return ((a%4==0 && a%100!=0) || a%400==0);
}
int cantMaxDiaMes(int m, int a){
    if(m==1 || m==3 || m==5 || m ==7 || m==8 || m==10 || m==12) return 31;
    if(m==4 || m==6 || m==9 || m==11) return 30;
    if(m==2){
        if(esBisiesto(a)) return 29;
        else return 28;
    }
    return -1;
}
int main(){
    int d,m,a;
    printf("Ingrese el dia: "); scanf("%d",&d);
    printf("Digite el mes: "); scanf("%d",&m);
    printf("Digite el año: "); scanf("%d",&a);
    if(a<0 || m<1 || m>12 || cantMaxDiaMes(m,a)<d || d<=0){
        printf("La fecha es invalida!!!");
        return -1;
    }
    int cantDiaMes = cantMaxDiaMes(m,a);
    if(d==cantDiaMes){
        if(m==12){
            d=1;m=1;
            a++;
        }else{
            d=1;
            m++;
        }
    }else d++;
    printf("La fecha del siguiente dia es: %d/%d/%d\n",d,m,a);
    return 0;
}