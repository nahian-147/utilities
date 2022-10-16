#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv){
	if(argc == 3){
	double num1 = atof(argv[1]);
	double num2 = atof(argv[2]);
	printf("%lf\n",num1*num2);
	return 0;
	}else{
	return 1;
	}
}
