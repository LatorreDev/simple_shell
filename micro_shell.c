#include "microshell.h"

/*
*
*/

int main (void)
{
	char *buffer = NULL;
	size_t len = 0; 
	int status;
	char *argv[] = {"",NULL};
	char *token;
	int another_status;
	int valid_exec;

	while (1)
	{
		write(1, "$ ",2);
		status = getline (&buffer, &len, stdin);

		if (status == -1)
		{
			perror ("./shell");
			exit (-1);
		}
		token = strtok(buffer, " \n\t");
	
		if(fork() == 0)
		{
		valid_exec = execve(token, argv, NULL);
			if (valid_exec == -1)
			{
				perror ("./shell");
				exit (-1);
			}
		}
		
		else
		{
			wait (&another_status);
		}

	}
	return (0);
	
}

