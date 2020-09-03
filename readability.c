//This program should grade text based on word complexity from 1 to 16+
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int count_letters(string text);

int main(void)
{
    string text = get_string("Text: ");
    int L = count_letters(text);
    printf("%d letter(s)\n", L);


    for(int i = 0; text[i] != '\0'; i++)
    {
        char t = text[i];
        int isspace(int t);
    }
    printf("%d space(s)\n", i);
}


int count_letters(string text)
{
    return strlen(text);
}
