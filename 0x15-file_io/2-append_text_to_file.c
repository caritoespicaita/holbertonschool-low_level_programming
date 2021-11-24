#include "main.h"

/**
* append_text_to_file - appends text at the end of a file.
* @filename:file name.
* @text_content: The string to add to the end of the file.
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, size, wr;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
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
