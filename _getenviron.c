#include "microshell.h"

char *_getenv(const char *name)
{
	extern char **environ;
	int i = 0;
	char *token;

	while (environ[i])
	{
		token = strtok(environ[i], "=");
		if (strcmp(name, token) == 0)
		{
			token = strtok(NULL, "=");
			printf ("%s\n", token);
		}
		i++;
	}
}
