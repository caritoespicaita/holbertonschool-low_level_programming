#include "main.h"

/**
* create_file - function that creates a file.
* @filename:file name.
* @text_content: size.
* Return: 1 on success, -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
	int file, size, wr;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (text_content != NULL)
	{
		for (size = 0; text_content[size] != '\0'; size++)
			continue;
		wr = write(file, text_content, size);
	}
	
	if (file == -1 || wr == -1)
		return (-1);
	close(file);
	return (1);
}
