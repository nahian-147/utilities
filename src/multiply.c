#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv){
	double product = 1.0;
	int argCount = 1;
	if(argc >= 2){

		while(argCount < argc){
			product *= atof(argv[argCount]);
			argCount++;
		}
	
		printf("%lf\n",product);
		return 0;
	}else{
		return 1;
	}
}
