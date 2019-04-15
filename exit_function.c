//pendiente aplicar betty y terminar pruebas con el main.c

int exit_func(char **args, char *buffer)
{
	free(buffer);
	free(args);
	exit(0);
}
