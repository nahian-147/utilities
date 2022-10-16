#include <stdio.h>
#include <stdlib.h>

long getFactorial(int n){
    long fatorial = 1;
    for(int k=1;k<=n;k++){
        fatorial *= k;
    }
    return fatorial;
}

int main(int argc, char** argv){
    int n;
    if(argc == 2){
	n = atoi(argv[1]);
    }else{
        n=0;
    }
    printf("%ld\n",getFactorial(n));
    return 0;
}