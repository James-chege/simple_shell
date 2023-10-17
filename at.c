#include "shell.h"

/**
 * checkInteractiveMode - Check if the shell is running in interactive mode.
 * @info: Pointer to the information structure.
 * Returns: 1 if the shell is in interactive mode, 0 otherwise.
 */
int checkInteractiveMode(info_t *info)
{
	        return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * i_Delimiter - Check if a character is a delimiter.
 * @n: The character to be checked.
 * @delimiters: The string containing delimiters.
 * Return: 1 if 'n' is a delimiter, 0 otherwise.
 */
int i_Delimiter(char n, const char *delimiters)
{
	        while (*delimiters)
			        {
					                if (*delimiters == n)
								                {
											                        return (1);
														                }
							                delimiters++;
									        }
		        return (0);
}
