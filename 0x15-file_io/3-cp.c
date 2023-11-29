#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024
/**
 * main - copies content of a file to another file
 * @ac: number of arguments
 * @av: string array of arguments
 *
 * Return: 0 on success.
*/
int main(int ac, char **av)
{
	char *file_from, *file_to, *buffer;
	int ff_fd, ft_fd, rd_rt, wt_rt;

	if (ac != 3) /* Check if no of args is correct */
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = av[1]; /* set file_from to the first argument */
	file_to = av[2]; /* set file_to to the second argument */
	buffer = malloc(BUFFER_SIZE); /* allocate memory for buffer */
	/* open the source file in read-only mode */
	open_file_from(file_from, O_RDONLY, &ff_fd);
	/* open the destination file in write-only mode */
	open_file_to(file_to,  O_CREAT | O_TRUNC | O_WRONLY, &ft_fd, &ff_fd);
	while ((rd_rt = read(ff_fd, buffer, BUFFER_SIZE)) > 0)
	{
		wt_rt = write(ft_fd, buffer, rd_rt);
		if (wt_rt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close_file(&ff_fd);
			exit(99);
		}
	}
	if (rd_rt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	close_file(&ff_fd); /* close source file */
	close_file(&ft_fd); /* close source file */
	free(buffer); /* free allcocated memory for buffer */
	return (0);
}

/**
 * open_file_from - opens a file
 * @filename: pointer to file name to open
 * @flags: flags to open file by
 * @fd: pointer to the file descriptor of the file
 *
 * Return: void
*/
void open_file_from(const char *filename, int flags, int *fd)
{
	*fd = open(filename, flags);
	if (*fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
}

/**
 * open_file_to - opens or create a file
 * @filename: pointer to file name to open
 * @flags: flags to open file by
 * @fd: pointer to the file descriptor of the destination file
 * @ff_fd: pointer to the file descriptor of the source file
 *
 * Return: void
*/
void open_file_to(const char *filename, int flags, int *fd, int *ff_fd)
{
	*fd = open(filename, flags, 0664);
	if (*fd == -1) /* check if opening destination failed */
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		close_file(ff_fd);
		exit(99);
	}
}

/**
 * close_file - close a file that was open
 * @fd: pointer to the file descriptor of the open file
 *
 * Return: void
*/
void close_file(int *fd)
{
	int fdd = close(*fd); /* close destination file */

	if (fdd == -1) /* check if close destination file failed */
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *fd);
		exit(100);
	}
}
