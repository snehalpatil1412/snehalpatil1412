#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct symtab
{
    char label[10];
    int address;
    struct symtab *next;
};
int size = 0;
struct symtab *first, *last;
void insert();
void display();
void Delete();
int search(char lab[]);

int main()
{
    int ch;
    char l[10];
    do
    {
        printf("\nSYMBOL TABLE IMPLEMENTATION\n");
        printf("1. INSERT\n");
        printf("2. DISPLAY\n");
        printf("3. DELETE\n");
        printf("4. SEARCH\n");
        printf("5. END\n");
        printf("Enter your option : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            Delete();
            break;
        case 4:
            printf("\nEnter the Symbol : ");
            scanf("%s", l);
            int res = search(l);
            if (res == 1)
            {
                printf("\nSymbol Found !!");
            }
            else
            {
                printf("\nSymbol Not Found !!");
            }
            printf("\n");
            break;
        case 5:
            break;
        }

    } while (ch != 5);

    return 0;
}

void insert()
{
    char lbl[10];
    printf("\nEnter the Label : ");
    scanf("%s", lbl);
    int res = search(lbl);
    if (res == 1)
    {
        printf("Symbol Already Exists !!\n");
    }
    else
    {
        struct symtab *p;
        p = malloc(sizeof(struct symtab));
        strcpy(p->label, lbl);
        printf("Enter the address : ");
        scanf("%d", &p->address);
        p->next = NULL;

        if (size == 0)
        {
            first = p;
            last = p;
        }
        else
        {
            last->next = p;
            last = p;
        }
        size++;
    }
}

void display()
{
    int i = 0;
    struct symtab *temp;
    temp = first;
    printf("\nSymbol\t\tAddress");
    while (i < size)
    {
        printf("\n%s\t\t%d", temp->label, temp->address);
        temp = temp->next;
        i++;
    }
    printf("\n");
}

void Delete()
{
    int check;
    char lbl[10];

    printf("\nEnter the Label : ");
    scanf("%s", lbl);

    check = search(lbl);
    if (check == 0)
    {
        printf("Symbol Does not Exists !!\n");
    }
    else
    {
        struct symtab *temp, *temp1;
        temp = first;

        // For First Position
        if (strcmp(first->label, lbl) == 0)
        {
            first = first->next;
        }
        // For Last Position
        else if (strcmp(last->label, lbl) == 0)
        {
            temp1 = temp->next;
            while (strcmp(temp1->label, lbl) == 0)
            {
                temp = temp->next;
                temp1 = temp1->next;
            }
            temp->next = NULL;
            last = temp;
        }
        // For In Between
        else
        {
            temp1 = temp->next;
            while (strcmp(temp1->label, lbl) != 0)
            {
                temp1 = temp1->next;
                temp = temp->next;
            }
            temp->next = temp1->next;
        }
        size--;
        printf("Symbol Deleted Successfully !!\n");
    }
}

int search(char lab[])
{
    int i, flag = 0;
    struct symtab *p;
    p = first;

    for (i = 0; i < size; i++)
    {
        if (strcmp(p->label, lab) == 0)
        {
            flag = 1;
        }
        p = p->next;
    }
    return flag;
}