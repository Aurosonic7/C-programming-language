#include<stdio.h>
int main(){
    int N=getchar()-'0';
    getchar();
    int i,j,num,x,k;
    for(i=0;i<N;i++){
        for(j=0;j<4;j++){
            num=0;
            for(k=0;k<8;k++){
                x=getchar()-'0';
                num=num*2+x;
            }
            printf("%d",num);
            if(j==3) printf("\n");
            else printf(".");
        }
        getchar();
    }


    return 0;
}