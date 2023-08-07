#include "main.h"
/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: pointer to name of file
 * @letters:number of letters it could read and print
 * Return:the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t O, R, W;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	if (buffer == NULL)
		return (0);
	O = open(filename, O_RDONLY);
	R = read(O, buffer, letters);
	W = write(STDOUT_FILENO, buffer, R);

	if (O == -1 || R == -1 || W == -1 || W != R)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(O);
	return (W);
}
