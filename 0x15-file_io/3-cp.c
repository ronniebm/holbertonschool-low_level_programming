#include "holberton.h"
#define MAXVAL 1024
#define STDERR STDERR_FILENO

/**
 * main - create the copy bash script
 * @argc: arguments counter.
 * @argv: arguments in string format.
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR, "usage: cp file_origin file_dest\n");
		exit(97);
	}
	_copy(argv[1], argv[2]);
	return (0);
}

/**
 * _copy - copy the data from file_origin to file_destiny.
 * @file_orig: origin file.
 * @file_dest: destiny file in which data should be copyed.
 * Return: void.
 */

void _copy(char *file_orig, char *file_dest)
{
	int fd1, fd2, read_val, write_val;
	char buffer[MAXVAL]; /*max. read bytes per time (1024 bytes).*/

	fd1 = open(file_orig, O_RDONLY);
	if (fd1 == -1)
		_exitprint("Error: Can't read from file %s\n", file_orig, 98);
	/*opening destiny file.*/
	fd2 = open(file_dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		_exitprint("Error: Can't write to %s\n", file_dest, 99);
	read_val = MAXVAL;
	/*reading & writing with a buff limit of 1024 bytes.*/
	while (read_val == MAXVAL)
	{
		read_val = read(fd1, buffer, MAXVAL);
		if (read_val == -1)
			_exitprint("Error: Can't read from file %s\n", file_orig, 98);
		write_val = write(fd2, buffer, read_val);
		if (write_val == -1)
			_exitprint("Error: Can't write to %s\n", file_dest, 99);
	}
	if (read_val == -1)
		_exitprint("Error: Can't read from file %s\n", file_orig, 98);
	/*closing both file descriptors.*/
	if (close(fd2) == -1)
	{
		dprintf(STDERR, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
}

/**
 * _exitprint - a helper function to dprintf and exit.
 * @string: Error message to be displayed.
 * @file: name of the file with the Error.
 * @code: exit code number.
 * Return: void.
 */

void _exitprint(char *string, char *file, int code)
{
	dprintf(STDERR, string, file);
	exit(code);
}
