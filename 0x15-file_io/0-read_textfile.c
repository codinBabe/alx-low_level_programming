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
	char buffer[1024];
	FILE *file_pointer;
	size_t byte_read;

	if (filename == NULL)
	{
		return (0);
	}

	file_pointer = fopen(filename, "r");
	if (file_pointer != NULL)
	{
		byte_read = fread(buffer, sizeof(char), letters, file_pointer);
		fclose(file_pointer);
		if (byte_read > 0)
		{
			fwrite(buffer, sizeof(char), byte_read, stdout);
			printf("\n");
			return (byte_read);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (0);
	}
}
