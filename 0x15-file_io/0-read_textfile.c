#include "main.h"

/**
* read_textfile - converts a binary number to an unsigned int.
* @filename:file name.
* @letters: size.
* Return: number of letters it could read and print.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, wr;
	int re, letr = letters;
	char *buf;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL || filename == NULL)
		return (0);
	re = read(file, buf, letters);
	if (re == -1)
		return (0);
	close(file);
	wr = write(0, buf, re);
	if (re < letr)
		re++;
	if (wr == -1)
		return (0);
	return (re);
}
