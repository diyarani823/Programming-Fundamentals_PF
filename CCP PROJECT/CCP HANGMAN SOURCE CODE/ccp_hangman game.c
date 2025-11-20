#include <stdio.h>//printf(),scanf()
#include <stdlib.h>//rand(),srand()
#include <time.h>//time()
#include <string.h>//string operations

void Hangman(int chances);//function declaration

int main()//execution starts here
{
    printf("\n\t\t\t\t\tWelcome to the Hangman Game!\n\n");
    const int maxchances = 6;
    printf("Guess the secret food word! You have only %d chances!\n", maxchances);

    char *food[] = {"pizza", "cupcake", "sandwich", "icecream", "sushi"};//array of pointers
    
    srand(time(NULL)); //seed random number generator
    char secretword[30];
    strcpy(secretword, food[rand() % 5]); //copy the word to guess in secretword array

    int chances = maxchances;
    int length = strlen(secretword);
    char currentword[30];
    int i;

    for (i = 0; i < length; i++) 
	{
        currentword[i] = '_'; //fills currentword with underscores
    }
    currentword[length] = '\0'; //adds null character at the end

    char guess;
    int guessed = 0;

    while (chances > 0) //user still has chance to guess
	{
        printf("\nWord: %s\n", currentword);
        Hangman(chances); //function call

        printf("\nEnter a letter: ");
        scanf(" %c", &guess);//saves input letter in guess

        
        if (guess <= 'A' && guess >= 'Z') 
		{
            guess = guess + 32; //convert uppercase to lowercase manually
        }
        // could also be done using tolower()
        
        int correctguess = 0;
        for (i = 0; i < length; i++) //checks if user entered correct letter or not
		{
            if (secretword[i] == guess && currentword[i] == '_') 
			{
                currentword[i] = guess;
                correctguess = 1;// flag indicates guess was correct
            }
        }

        if (correctguess==0) // if guess is wrong
		{
            chances--; //chances= chances-1
            printf("Wrong guess! Chances left: %d\n", chances);
        }
        else 
		{
            printf("Correct guess!\n");
        }

        if (strcmp(currentword, secretword) == 0) //checks if both strings are exact same or not
		{
            printf("\nYOU WON! The word is: %s\n", secretword);
            guessed = 1; //indicates user guessed the whole word
            break; //while loop terminated
        }
    }

    if (guessed==0) // if chances=0 and still not guessed
	{
        printf("\nGAME OVER! The word was: %s\n", secretword); //user lost
        Hangman(0);//complete hangman
    }

    return 0;
}

void Hangman(int chancesleft)
{
   switch (chancesleft) 
    {
        case 6:
            printf(" _______\n");
            printf(" |     |\n");
            printf(" |     |\n");
            printf(" |      \n");
            printf(" |      \n");
            printf(" |      \n");
            printf(" |      \n");
            break;

        case 5:
            printf(" _______\n");
            printf(" |     |\n");
            printf(" |     |\n");
            printf(" |     O\n");
            printf(" |      \n");
            printf(" |      \n");
            printf(" |      \n");
            break;

        case 4:
            printf(" _______\n");
            printf(" |     |\n");
            printf(" |     |\n");
            printf(" |     O\n");
            printf(" |     |\n");
            printf(" |      \n");
            printf(" |      \n");
            break;

        case 3:
            printf(" _______\n");
            printf(" |     |\n");
            printf(" |     |\n");
            printf(" |     O\n");
            printf(" |    /|\n");
            printf(" |      \n");
            printf(" |      \n");
            break;

        case 2:
            printf(" _______\n");
            printf(" |     |\n");
            printf(" |     |\n");
            printf(" |     O\n");
            printf(" |    /|\\\n");
            printf(" |      \n");
            printf(" |      \n");
            break;

        case 1:
            printf(" _______\n");
            printf(" |     |\n");
            printf(" |     |\n");
            printf(" |     O\n");
            printf(" |    /|\\\n");
            printf(" |    / \n");
            printf(" |      \n");
            break;

        case 0:
            printf(" _______\n");
            printf(" |     |\n");
            printf(" |     |\n");
            printf(" |     O\n");
            printf(" |    /|\\\n");
            printf(" |    / \\\n");
            printf(" |        \n");
            
            break;
    }
}

