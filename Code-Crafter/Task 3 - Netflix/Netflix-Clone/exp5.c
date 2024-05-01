#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isKeyword(char buffer[])
{
    char keywords[15][10] = {"break", "char", "const", "continue", "default", "do", "while", "int", "float", "long", "return", "void", "switch", "if", "else"};

    int i, flag = 0;
    for (i = 0; i < 15; ++i)
    {
        if (strcmp(keywords[i], buffer) == 0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

// Lexical Analyzer
void main()
{
    char ch, operators[] = "+-*/%=", seperators[] = ",.;:()<>", buffer[10];
    int i, j = 0;
    FILE *fp1;
    fp1 = fopen("program.txt", "r");

    while (!feof(fp1))
    {
        ch = fgetc(fp1);
        // Operator
        for (i = 0; i < 6; ++i)
        {
            if (ch == operators[i])
            {
                printf("\n%c is Operator", ch);
            }
        }
        // Seperators
        for (i = 0; i < 8; i++)
        {
            if (ch == seperators[i])
            {
                printf("\n%c is Seperator", ch);
            }
        }

        if (isalnum(ch))
        {
            buffer[j] = ch;
            j++;
        }
        else if ((ch == ' ' || ch == '\n') && (j != 0))
        {
            buffer[j] = '\0';
            j = 0;

            if (isKeyword(buffer) == 1)
            {
                printf("\n%s is Keyword", buffer);
            }
            else
            {
                printf("\n%s is Indentifier", buffer);
            }
        }
    }

    fclose(fp1);
}