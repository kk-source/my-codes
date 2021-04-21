#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("---------------------------------------------------------------------------------------\n");
    printf("-----------------------------WELCOME---------------------------------------------------\n");
    printf("---------------------------------------------------------------------------------------\n\n");

    char name[50];
    int class,sub[5];
    char section;
    
    printf("Enter the student's name\n");
    gets(name);

    printf("Enter the class in which the student is studying\n");
    scanf("%d", &class);

    getchar();

    printf("Enter the section of the student\n");
    scanf("%c", &section);

    printf("Enter marks scored in following subjects out of 100\n");

    printf("Mathematics: ");
    scanf("%d", &sub[0]);

    printf("English: ");
    scanf("%d", &sub[1]);

    printf("Hindi: ");
    scanf("%d", &sub[2]);

    printf("Science: ");
    scanf("%d", &sub[3]);

    printf("Social Science: ");
    scanf("%d", &sub[4]);

    printf("\n");

    int result = 0;
    char grade;

    for (int i = 0; i < 5; i++)
    {
        result += sub[i];
    }
    if (result >= 450 && result <= 500)
    {
        grade = 'A';
    }
    else if (result >= 400 && result < 450)
    {
        grade = 'B';
    }
    else if (result >= 350 && result < 400)
    {
        grade = 'C';
    }
    else if (result >= 300 && result < 350)
    {
        grade = 'D';
    }
    else if (result >= 200 && result < 300)
    {
        grade = 'E';
    }
    else if (result >= 0 && result < 200)
    {
        grade = 'F';
    }
    else {
        printf("One or the other outputs entered by you is invalid. Please try again!!!\n");
    }
    printf("Report card is being generated. Please wait.....\n\n");
    usleep(10000000);
    printf("---------------------------------------------------------------------------------------\n");
    printf("Jawahar Navodaya Vidyalaya\n");

    printf("\t Annual Report Card\n\n");

    printf("Name: %s\n", name);

    printf("Standard: %d\n", class);

    printf("Section: %c\n\n", section);

    printf("Marks secured out of 100\n");

    printf("Mathematics: %d\n",sub[0]);

    printf("English: %d\n",sub[1]);

    printf("Hindi: %d\n",sub[2]);

    printf("Science: %d\n",sub[3]);

    printf("Social Science: %d\n\n",sub[4]);

    printf("Total marks secured: %d\n", result);

    printf("Grade: %c\n", grade);

    printf("---------------------------------------------------------------------------------------\n\n");

    printf("Thank you your report card has been generated successfully\n");

    return 0;
}