#include <stdio.h>
#include <stdlib.h>

//added some more text

 int main()
{
 char card_name[3];
 int count = 0,val,mark=1;
  while (mark)
 {
  puts("Give a card name: ");
  scanf("%2s", card_name);
   switch (card_name[0])
  {
   case 'J':
   case 'Q':
   case 'K':
   val=10;
   break;
   case 'A':
   val=11;
   break;
   case 'X':
   mark=0;
   continue;
   default:
   val=atoi(card_name);
  }
   if(val<2 || val >11)
   puts ("Incorect value , will not be considered \n");
    else
   {
    if (val <7)
	 count--;
	else
	 count++;
   }
   printf("Curent count: %i\n", count);
 }
 printf("Final count: %i\n", count);
 return 0;
}