#include "main.h"

/**
* create_file - creates a file
* @filename: filename
* @text_content: content writed in the file
* Return: 1 on success. -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file, bytesWritten;
	size_t textLen = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[textLen])
			textLen++;

		bytesWritten = write(file, text_content, textLen);
		if (bytesWritten == -1 || (size_t)bytesWritten != textLen)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
