#include<stdio.h>
int main(){
    char a; printf("char: %lu\n",sizeof(char));
    int b; printf("int: %lu\n",sizeof(int));
    long c; printf("long: %lu\n",sizeof(long));
    float d; printf("float: %lu\n",sizeof(float));
    double e; printf("double %lu\n",sizeof(double));
    long long f; printf("long long: %lu\n",sizeof(long long));
    int g[5]; printf("int g[5]: %lu\n",sizeof(g));
    return 0;
}