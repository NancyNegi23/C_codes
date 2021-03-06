#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word); //Declaring global function

int main(void)
{
    // Get input words from both players
    printf ("Player 1 :");
    scanf ("%s", word1);
    printf ("Player 2:");
    scanf ("%s", word2);

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    //Prints the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else if (score1 == score2)
    {
        printf("Tie!\n");
    }
}

// function to calculate the score of each player
int compute_score(string word)
{
    int score = 0;
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        if (isupper(word[i])) //check if the input is uppercase
        {
            score += POINTS[word[i] - 'A'];
        }
        else if (islower(word[i])) // check if the output is lowercase
        {
            score += POINTS[word[i] - 'a'];
        }
    }
    return score;
}
