#include "main.h"

/**
* _closeFiles - closes two files
* @source: file descriptor of the source file
* @dest: file descriptor of the destination file
* Return: void
*/
void _closeFiles(int source, int dest)
{
	if (close(source) == -1 || close(dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d, %d\n", source, dest);
		exit(100);
	}
}

/**
* main - copies the content of a file to another file
* @argc: number of arguments passed to the program
* @argv: array of arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int sourceFile, destinationFile, bytesRead, bytesWritten;
	char buffer[1024];

	if (argc != 3)
	{	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	sourceFile = open(argv[1], O_RDONLY);
	if (sourceFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	destinationFile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (destinationFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytesRead = read(sourceFile, buffer, sizeof(buffer))) > 0)
	{
		bytesWritten = write(destinationFile, buffer, bytesRead);
		if (bytesWritten != bytesRead)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			_closeFiles(sourceFile, destinationFile);
			exit(99);
		}
	}
	if (bytesRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		_closeFiles(sourceFile, destinationFile);
		exit(98);
	}
	_closeFiles(sourceFile, destinationFile);
	return (0);
}
