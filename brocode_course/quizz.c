#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	char questions[][100] = {"1. What year did the C language debut?: ",
														"2. Who is credited with creating C?: ",
														"3. What is the predecessor of C?: "
													};

	char options[][100] = {"A. 1969", "B. 1972", "C. 1975", "D. 1999",
														"A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Niklaus Wirth",
														"A. Objective C", "B. B", "C. C++", "D. C#",
														};

	char answers[3] = {'B', 'A', 'B'};

	int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

	char guess;
	int score = 0;

	for (int i = 0; i < numberOfQuestions; i++)
	{
		printf("%s\n", questions[i]);

		for (int j = (i * 4); j < (i * 4) + 4; j++)
		{
			printf("%s\n", options[j]);
		}

		printf("Guess: ");
		scanf(" %c", &guess);
		// scanf("%c"); // clear \n from input buffer // does't wotk properly

		guess = toupper(guess);

		// printf("answer: %c", answers[i]);
		// printf("guess: %c", guess);

		if (guess == answers[i])
		{
			printf("Correct!\n");
			score++;
		}
		else 
		{
			printf("Wrong!\n");
		}
	}

	printf("Final Score: %d/%d\n", score, numberOfQuestions);
	system("pause");

	return 0;
}