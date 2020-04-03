#include <stdio.h>
#include <cs50.h>

//a tool to tell you the year you were born in

int main(void)
{
    int i = get_int("What's your age?\n");
    {
        printf("You were born in %i\n", 2020 - i);
    }
}
//currently it's not giving the age based on month calculations. will need to be added later on.
//on option is to convert the year into months and then subtract the month count then convert back to years. 

