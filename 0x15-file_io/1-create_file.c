nclude "main.h"
/**
 * create_file - function that creates a file.
 * @filename: pointer to the name of the file to create.
 * @text_content: pointer to a string to write to the file.
 * Return: If the function fails returns (-1).
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr;
	int i = 0;

	if (filename == NULL)

	{

		return (-1);

	}


	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;

		}
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (op == -1)
	{

		return (-1);
	}


	wr = write(op, text_content, i);

	if (wr == -1)
	{

		close(op);
		return (-1);
	}
	close(op);
	return (1);
}

