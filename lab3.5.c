#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <errno.h>


int main(void){
	void sigint_handler(int sig);
	int num,i,pri = 0;

	if (signal(SIGINT, sigint_handler) == SIG_ERR){
	perror("signal");
	exit(1);
	}

	printf("Enter a number. \n");
	scanf("%d", &num);

	if (num == 0 || num == 1)
	pri = 1;

	for (i = 2; i <= num / 2; ++i){
	if (num % i == 0){
	pri = 1;
	break;
	}
	}

	if (pri == 0)
	printf("It is a prime number.\n");
	else
	printf("It is not a prime number.\n");

return 0;
}

void sigint_handler(int sig)
{
  printf("This is a special signal handler for SIGINT\n");
}
