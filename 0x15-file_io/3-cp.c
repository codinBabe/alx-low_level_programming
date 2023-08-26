#include "main.h"
/**
 * main - a program that copies the content of a file to another file.
 * @argc:argument count
 * @argv:argument variable
 * Return: zero on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char *buffer;
	int R, W;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from_file_to\n",
				argv[0]);
		exit(97);
	}
	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if (!buffer)
		return (0);

	fd_to = open(argv[1], O_RDONLY);
	err_98(fd_to, buffer, argv[1]);
	fd_from = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	err_99(fd_from, buffer, argv[2]);
	do {
		R = read(fd_to, buffer, BUFFER_SIZE);
		if (R == 0)
			break;
		err_98(R, buffer, argv[1]);
		W = write(fd_from, buffer, R);
		err_99(W, buffer, argv[2]);
	} while (W >= BUFFER_SIZE);
	R = close(fd_from);
	err_100(R, buffer);
	R = close(fd_to);
	err_100(R, buffer);
	free(buffer);
	return (0);
}
/**
 * err_98 - print error with exit of 98
 * @fd_from:file descriptor to copy from
 * @buffer: buffer
 * @argv: argument vector
 */
void err_98(int fd_from, char *buffer, char *argv)
{

	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		free(buffer);
		exit(98);
	}
}
/**
 * err_99 - print error with exit of 99
 * @fd_from:file descriptor to copy from
 * @buffer: buffer
 * @argv: argument vector
 */
void err_99(int fd_from, char *buffer, char *argv)
{
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		free(buffer);
		exit(99);
	}
}
/**
 * err_100 - print error with exit of 100
 * @fd_from:file descriptor to copy from
 * @buffer: buffer
 */
void err_100(int fd_from, char *buffer)
{
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_from);
		free(buffer);
		exit(100);
	}
}
