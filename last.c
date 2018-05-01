
#include<stdio.h>
#include<linux/kernel.h>
#include<sys/syscall.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
	pid_t pid,pid2;
	pid = fork();
	if(pid>0)
	{
		wait(NULL);
		pid2 = fork();
		if(pid2>0)
		{
			wait(NULL);
			long int s = syscall(336);
			//printf("System call returned %ld \n",s);
			//execlp("./shell3.sh","./shell3.sh",(char*)0);
			
		}
		else
		{
			sleep(2);
			execlp("./shell2.sh","./shell2.sh",(char*)0);		
		}			
		
	}
	else
	{

	execlp("./shell.sh","./shell.sh",(char*)0);	
	
	}

	return 0;
}

