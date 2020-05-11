#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: name of file.
 * @letters: number of letters.
 * Return: number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, chars;
	char *buf;
	ssize_t bytes;

	/*allocating space in memory*/
	buf = malloc(sizeof(char) * letters + 1);
	/*if buffer or filename = NULL, then return 0.*/
	if (filename == NULL || buf == NULL)
		return (0);
	/*opening the file READ ONLY*/
	fd = open(filename, O_RDONLY);
	/*if the file can not be opened or read, return 0*/
	if (fd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	/*read the file*/
	bytes = read(fd, buf, letters);
	buf[bytes] = '\0';
	close(fd);
	if (bytes == -1)
	{
		free(buf);
		return (0);
	}
	chars = write(STDOUT_FILENO, buf, bytes);
	free(buf);
	/*if write fails or does not write the expected amount of bytes, return 0.*/
	if (chars == -1)
	{
		free(buf);
		return (0);
	}
	/*returns the actual number of letters it could read and print.*/
	return (chars);
}
