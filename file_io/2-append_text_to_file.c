#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
* append_text_to_file - appends text at the end of a file
* @filename: filename
* @text_content: added content
* Return: 1 on sucess and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, bytesWritten;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytesWritten = write(file, text_content, _strlen(text_content));
		if (bytesWritten != _strlen(text_content))
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
