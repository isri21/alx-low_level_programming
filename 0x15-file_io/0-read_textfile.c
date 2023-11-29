#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the stdout
 * @filename: File to read
 * @letters: number of letters from file to read and print
 *
 * Return: number of letters read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer; /* create buffer to store text */
	int file_fd; /* create var for file descriptor */
	int write_ret; /* to store the return value of write */
	ssize_t num; /* to store number of bytes read */

	buffer = malloc(letters); /* allcoate memory for buffer */
	if (buffer == NULL) /* check if malloc failed */
		return (0);

	if (filename == NULL) /* Check if the file name enterd is NULL*/
		return (0);

	file_fd = open(filename, O_RDONLY); /* open the file in read-only mode */
	if (file_fd == -1) /* Check if open() failed */
		return (0);

	/* read the specified amount of bytes */
	num = read(file_fd, buffer, letters);
	if (num == -1) /* Check if read() failed */
		return (0);

	close(file_fd); /* close the file */

	buffer[num] = '\0'; /* NULL terminate the buffer */
	/* write the text read to stdout*/
	write_ret = write(STDOUT_FILENO, buffer, num);

	if (write_ret == -1) /* check if failed to write to the stdout*/
		return (0);
	free(buffer); /* free allocate memory for buffer */
	return (num); /* return number of bytes read */
}
