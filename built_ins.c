#include "microshell.h"

int built_ins(char **args, char *buffer) // pendiente revisar la conexion entre "tokens" del main y *buffer
{
	int cont = 0;
	built_ins built_ins[] = {   //lista de los build ins a desarrollar, por ahora solo los dos mandatorios
		{"exit", exit_function},
		{"env", printenv_function},
		{NULL, NULL}
	};
	if (args[0] == NULL)
	{
		return (-1);
	}
	while (built_ins[cont]->name != NULL)
	{
		if (_strcmp(args[0], built_ins[cont]->name) == 0)//pendiente revisar _strcmp
			built_ins[cont]->func(args, buffer);
		cont++;
	}
	if (built_ins[cont]->name == NULL)
	{
		return (-1);
	}
	return (0);
}

