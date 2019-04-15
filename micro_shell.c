#include "microshell.h"

/**
* main - entry point of the program
* Return: return 0 if sucess
*/

int main(void)
{
	char *buffer = NULL;
	size_t len = 0;
	int status;
	char *argv[] = {"", NULL};
	char *token;
	int another_status;
	int valid_exec;

	signal(SIGINT, ctrlc);
	while (1)
	{
		write(1, "$ ", 2);
		buffer = NULL;
		status = getline(&buffer, &len, stdin);

		if (status == -1)
		{
			perror("./shell");
			free(buffer);
			exit(-1);
		}
		token = strtok(buffer, " \n\t");

		if (fork() == 0)
		{
		valid_exec = execve(token, argv, NULL);
			if (valid_exec == -1)
			{
				perror("./shell");
				free(buffer);
				exit(-1);
			}
		}
		else
		{
			wait(&another_status);
		}
		free(buffer);
	}
	return (0);
}
