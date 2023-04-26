#include <stdio.h>
#include <unistd.h>

int	check_correct(char buff, char str)
{
	if ((str == ')' && buff == '(') || (str == ']' && buff == '[') || (str == '}' && buff == '{'))
		return (1);
	return (0);
}

void	check_str(char *str)
{
	int	charCount;
	int buffCount;
	char buffer[4000];

	charCount = 0;
	buffCount = 0;
	if (str == NULL)
		write(1, "\n", 1);
	while (str[charCount])
	{
		if (str[charCount] == '(' || str[charCount] == '{' || str[charCount] == '[')
		{
			buffer[buffCount] = str[charCount];
			buffCount++;
		}
		else if (str[charCount] == ')' || str[charCount] == '}' || str[charCount] == ']')
		{
			if (check_correct(buffer[buffCount - 1], str[charCount]))
				buffCount--;
			else
				buffCount = -1;
		}
		charCount++;
	}
	if (buffCount != 0)
		write(1, "error\n", 6);
	else if (buffCount == 0)
		write(1, "ok\n", 3);
}

int main(int argc, char *argv[])
{
	int counter;

	counter = 1;
	if (argc < 2)
		write(1, "error", 6);

	while (argv[counter])
	{
		check_str(argv[counter]);
		counter++;
	}
}