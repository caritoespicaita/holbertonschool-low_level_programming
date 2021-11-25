#include "main.h"

/**
* main - copies the content of a file to another file
* @ac: ac
* @av: av
* Return: always 0.
*/
int main(int ac, char **av)
{
	int file_from = 0, file_to = 0, file_read = 0;
	char buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while ((file_read = read(file_from, buf, 1024)) > 0)
	{
		if (write(file_to, buf, file_read) != file_read)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
	}
	if (file_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(98);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(98);
	return (0);
}
