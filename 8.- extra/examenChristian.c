#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
int main(){
    printf("Proceso %d METODOS DE ORDENAMIENTO\n",getpid());
    if(fork()==0){
        printf("\n----------------------------------\n");
        printf("Proceso %d: <<INSERT SORT>>\n",getpid());
        execl("insertSort.out","insertSort.out","19","25","17","8","4","11","20","5","6","18",NULL);            
    }else if(fork()==0){
        printf("Proceso %d: <<MERGE SORT>>\n",getpid());
        execl("mergeSort.out","mergeSort.out","19","25","17","8","4","11","20","5","6","18",NULL);
        //wait(NULL);
    }else if(fork()==0){
        printf("Proceso %d: <<BUBBLE SORT>>\n",getpid());
        execl("bubbleSort.out","bubbleSort.out","19","25","17","8","4","11","20","5","6","18",NULL);
    }else if(fork()==0){
        printf("Proceso %d: <<SELECTION SORT>>\n",getpid());
        execl("selectionSort.out","selectionSort.out","19","25","17","8","4","11","20","5","6","18",NULL);
    }else if(fork()==0){
        printf("Proceso %d: <<QUICK SORT>>\n",getpid());
        execl("quickSort.out","quickSort.out","19","25","17","8","4","11","20","5","6","18",NULL);
    }else if(fork()==0){
        printf("Proceso %d: << COMANDO PING >>\n",getpid());
        system("ping 8.8.8.8 > tests.txt");
    }else if(fork()==0){
        printf("Proceso %d: << COMANDO PS >>\n",getpid());
        system("ps > procesos.txt");
    }else if(fork()==0){
        printf("Proceso %d: << COMANDO TOP >>\n",getpid());
        system("top > procesosSistema.txt");
    }else if(fork()==0){
        printf("Proceso %d: << COMANDO LS -A >>\n",getpid());
        system("netstat -n > puertos.txt");
    }else if(fork()==0){
        printf("Proceso %d: << COMANDO MKDIR >>\n",getpid());
        system("mkdir test");
    }
    printf("Procesos %d terminando \n",getpid());
    return 0;
}
