#include "kernel/types.h"
#include "user/user.h"

int main(int argn, char *argv[]){
	if(argn < 2){
		printf("Usage:sleep seconds\n");
		exit(1);
	}
	int sleepNum = atoi(argv[1]);
	printf("(nothing happens for a little while)\n");
	sleep(sleepNum);
	exit(0);
}

