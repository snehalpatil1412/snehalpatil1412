#include <stdio.h>
#include <conio.h>
#include <process.h>

int ch;
char c, fileName1[20], fileName2[20];
FILE *fp1, *fp2;

void create();
void display();
void copy();
void Delete();
void Append();

void main()
{
    int ch;
    char l[10];
    do
    {
        printf("\nTEXT EDITOR\n");
        printf("1. CREATE\n");
        printf("2. DISPLAY\n");
        printf("3. COPY\n");
        printf("4. DELETE\n");
        printf("5. APPEND\n");
        printf("6. EXIT\n");
        printf("Enter your option : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            copy();
            break;
        case 4:
            Delete();
            break;
        case 5:
            Append();
            break;
        case 6:
            exit(0);
        }

    } while (ch != 6);
}

void create()
{
    printf("\nEnter the File name : ");
    scanf("%s", fileName1);

    fp1 = fopen(fileName1, "w");
    printf("Enter the Content of file and press '.' to close the File \n");

    while (1)
    {
        c = getchar();
        fputc(c, fp1);

        if (c == '.')
        {
            fclose(fp1);
            break;
        }
    }
}

void display()
{
    printf("\nEnter the File name : ");
    scanf("%s", fileName1);

    fp1 = fopen(fileName1, "r");

    if (fp1 == NULL)
    {
        fclose(fp1);
        printf("File Does not Exists !!");

        goto end1;
    }
    while (!feof(fp1))
    {
        ch = getc(fp1);
        printf("%c", ch);
    }

end1:
    printf("\nPress Any key to continue ... ");
    getch();
}

void copy()
{
    printf("\nEnter Old file name : ");
    scanf("%s", fileName1);

    fp1 = fopen(fileName1, "r");
    if (fp1 == NULL)
    {
        printf("File Does not exists !!");
        goto end2;
    }
    printf("\nEnter New File name : ");
    scanf("%s", fileName2);
    fp2 = fopen(fileName2, "w");
    while (!feof(fp1))
    {
        ch = getc(fp1);
        putc(ch, fp2);
    }

end2:
    printf("\nPress Any key to continue ...");
    fclose(fp1);
    fclose(fp2);
}

void Delete()
{
    printf("\nEnter the File name : ");
    scanf("%s", fileName1);

    if (fp1 == NULL)
    {
        fclose(fp1);
        printf("File Does not Exists !!");

        goto end3;
    }
    fclose(fp1);

    if (remove(fileName1) == 0)
    {
        printf("File Deleted Successfully !!");
        goto end3;
    }
    else
    {
        printf("\nError !!");
    }

end3:
    printf("\nPress Any Key to Continue ...");
    getch();
}

void Append()
{
    printf("\nEnter the File name : ");
    scanf("%s", fileName1);

    fp1 = fopen(fileName1, "r");
    if (fp1 == NULL)
    {
        fclose(fp1);
        printf("File Does not Exists !!");
        goto end4;
    }

    while (!feof(fp1))
    {
        c = getc(fp1);
        printf("%c", c);
    }
    fclose(fp1);
    fp1 = fopen(fileName1, "a");
    while (1)
    {
        scanf("%c", &c);
        putc(c, fp1);
        if (c == '.')
        {
            fclose(fp1);
            break;
        }
    }
end4:
    printf("\nPress Any Key to Continue ...");
    getch();
}