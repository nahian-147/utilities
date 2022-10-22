#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv){
	double sum = 0.0;
	int argCount = 1;
	if(argc >= 2){

		while(argCount < argc){
			sum += atof(argv[argCount]);
			argCount++;
		}
	
		printf("%lf\n",sum);
		return 0;
	}else{
		return 1;
	}
}
