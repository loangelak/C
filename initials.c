#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("Name: ");
    char initials[4];
    //initials[0] = 'H';
    //intials[1] = 'A';
   // initials[2] = 'M';
   // initials[3] ='\0';
   int counter = 0;
   for(int i = 0, n = strlen(name); i < n; i++ )
   {
       if(isupper(name[i]))
       {
           initials[counter] = name[i];
           counter++;
       }
   }
   initials[counter] = '\0';
    printf("%s\n", initials);
}
