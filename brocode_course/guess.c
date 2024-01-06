#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define MIN 1
#define MAX 100
#define MAX_GUESSES 10

int main()
{
	// const int MIN = 1;
	// const int MAX = 100;
	int guess;
	int guesses = 0;
	int answer;

	// uses the current time as a seed
	srand(time(0));

	answer = (rand() % MAX) + MIN;

	// printf("%d", answer);

	printf("********************\n");
  printf("Welcome to the Number Guessing Game!\n");
  printf("********************\n");

	do {
		printf("Enter a guess (between 1 and 100): ");
		scanf("%d", &guess);

		if (guess < MIN || guess > MAX) {
      printf("Invalid guess! Please enter a number between 1 and 100.\n");
      continue;
    }

    if (guess > answer) {
      printf("Too high!\n");
    } else if (guess < answer) {
      printf("Too low!\n");
    } else {
      printf("Correct!\n");
    }

		guesses++;
	} while (guess != answer && guesses < MAX_GUESSES);

	printf("********************\n");
  printf("Answer: %d\n", answer);
  printf("Guesses: %d\n", guesses);
  printf("********************\n");

  // printf("Press any key to close the window");
  // getchar();
  system("pause");

	return 0;
}