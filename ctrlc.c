#include "microshell.h"

/**
 * ctrlc - Entry point of the program
 */

void ctrlc(int sig_num)
{
	(void) sig_num;
	write (1, "\n$ ", 3);
	fflush(stdout);
}
