#include "hw.h"

void copyString(char *str1, char const *str2)
  {
    for (int i = 0; i < strlen(str2); i++)
    {
      str1[i] = str2[i];
    }
}

void printCommonFriends(Party * party)
{
	for (int i = 0; i < party-> res; i++)
    {
      fprintf(stderr, "%d - %s\n", i+1, party->commonFriends[i].name);
    }
}

