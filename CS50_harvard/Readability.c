// this is a program that computes the approximate grade level needed to comprehend some text
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{

    // counters initialization
    int lc = 0, wc = 1, sc = 0;

    // get the string
    string text = get_string("Text : ");


    for (int i = 0; i < strlen(text); i++)
    {
        // letters count
        if (text[i] != ' ' && text[i] != '!' &&  text[i] != '.' && text[i] != ',' && text[i] != '?' && text[i] != '-' && text[i] != 39
            && text[i] != ';' && text[i] != ':')
        {
            lc++;
        }
        // word count
        if (text[i] == ' ')
        {
            wc++;
        }
        // sentences count
        if (text[i] == '!' || text[i] == '.' || text[i] == '?')
        {
            sc++;
        }
    }

    // average number of letters per 100 words in the text
    float L = ((float) lc / (float) wc) * 100;

    // the average number of sentences per 100 words in the text
    float S = ((float) sc / (float) wc) * 100;

    // The Coleman-Liau index formula
    float index = 0.0588 * L - 0.296 * S - 15.8;

    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %.0f\n", index);
    }
}
