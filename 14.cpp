// MARQUEZ CALDERON ISRAEL
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
int main()
{
char c;
printf ("Una letra: ");
scanf("%c",&c);
     if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
       printf ("La letra %c es una bocaln",c);
    else if ((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c==164)||(c==165))    
       printf ("La letra %c es consonante", c);
    else
       printf("No es letra");
    
}

