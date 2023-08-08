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
	char buffer[BUFFER_SIZE];
	ssize_t R, W;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from_file_to\n",
				argv[0]);
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file from %s\n",
				argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error:Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}
	while ((R = read(fd_from, buffer, sizeof(buffer))))
	{
		W = write(fd_to, buffer, R);
		if (W != R)
		{
			dprintf(STDERR_FILENO, "Error: Write to %s fail\n",
					argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (R == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file from %s\n",
				argv[1]);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				errno == EBADF ? fd_from : fd_to);
		exit(100);
	}
	return (0);
}
