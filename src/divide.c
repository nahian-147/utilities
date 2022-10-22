#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv){
	if(argc == 3){
	    double num1 = atof(argv[1]);
	    double num2 = atof(argv[2]);
    if(num2 !=0){
        printf("%lf\n",num1/num2);
    }else{
        printf("Can't Divide by Zero\n");
    }
        return 0;
	}else{
	    return 1;
	}
}
