#include "microshell.h"

int environ (char **env, char *compare)
{
	int i, j, k, num;

	while (*env)
	{
		printf("%s\n", *env++);
	}

	for (i = 0 ; env[i]; i++)
	{
		for (j = 0 ; env[i][j] ; j++)
		{
			if (env[i][j] == compare[j] && j < 4)
			{
				k++;
				if (k == 4 && j == 3)
				{
					num = i;
				}
			}
		}
	}
}
