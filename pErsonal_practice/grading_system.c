#include <stdio.h>

/**
 * main - prints a corresponding letter grade.
 * @score: The learner's score.
 *
 * Result: 0 success.
 */
 int main(void)
{
	int score = 0;

	printf("Enter learner's score: ");
	scanf("%d", &score);

	if (score >= 70 && score <= 100)
	{
		printf("A");
	}
	else if (score >= 60 && score <= 69)
	{
		printf("B");
	}
	else if (score >= 50 && score <= 59)
	{
		printf("C");
	}
	else if (score >= 45 && score <= 49)
	{
		printf("D");
	}
	else if (score >= 40 && score <= 44)
	{
		printf("E");
	}
	else
		{
			printf("F");
		}
	printf("\n");
	return (0);
}
