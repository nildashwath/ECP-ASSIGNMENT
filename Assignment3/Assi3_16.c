/*
Write a program to develop a very simple version of the ''guess the magic number" game. The
program generates a random magic number between 1 and 1000. Ask user to guess the
number. If guess is correct then print message “congrats! You won.” if the guess is less than
magic number print the message ** left ** otherwise print the message ** right **. Repeat the
procedure till player give accurate guess. Give maximum 10 chances to user.
Note: generates the magic number using the standard random number generator rand( ), which
returns an arbitrary number between 0 and RAND_MAX (which defines an integer value that
is 32,767 or larger). The rand( ) function requires the header <stdlib.h>.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int magicNumber, guess;
    int maxAttempts = 10;
    int attempts = 0;

    // Seed the random number generator
    srand(time(NULL));

    // Generate a random magic number between 1 and 1000
    magicNumber = rand() % 1000 + 1;

    printf("Welcome to the 'Guess the Magic Number' game!\n");
    printf("I have selected a number between 1 and 1000.\n");
    printf("You have %d attempts to guess it.\n", maxAttempts);

    // Loop for up to maxAttempts times
    while (attempts < maxAttempts) 
	{
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        // Check if the guess is correct
        if (guess == magicNumber) 
		{
            printf("Congrats! You won.\n");
            break; // Exit the loop
        } 
		else if (guess < magicNumber) 
		{
            printf("Left\n"); // The magic number is greater
        } 
		else 
		{
            printf("Right\n"); // The magic number is smaller
        }

        // Check if the user has used all attempts
        if (attempts == maxAttempts) 
		{
            printf("Sorry, you've used all your attempts. The magic number was %d.\n", magicNumber);
        }
    }

    return 0;
}

