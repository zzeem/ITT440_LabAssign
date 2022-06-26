#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void){
char name[25];

	for(int i = 1; i <= 4; i++){
	pid_t pid = fork();

	if(pid == 0){

		printf("What is your name?\n");
		scanf("%s",name);
		printf("Good to see you, %s.\n",name);
		exit(0);
    		}
	else{

		wait(NULL);
		printf("This is child process.\n");
    		}
}
printf("Job is done\n");
return EXIT_SUCCESS;
}
