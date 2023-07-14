#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
    int i;
    for (i=0; i<3; i++){
        if (fork ()!=0) break;
            fork();
    }
    printf ("Soy el proceso PID=%d y mi padre PPID=%d\n", getpid (), getppid ());
    return 0;
}