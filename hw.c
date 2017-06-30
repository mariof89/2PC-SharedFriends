#include <stdio.h>
#include <obliv.h>
#include <malloc.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include "hw.h"

int main(int argc, char *argv[])
{
  // Number of Friends
  int N = argc-2;

  // ID of Party. It is the 2nd argument of the command line 
  int partyID = atoi(argv[1]);

  Party *p = (Party *)malloc(sizeof(Party)); 
  p->id = partyID;
  p->numFriends=N;
  
  // We create a pointer in order to store N elements (Friend)
  Friend *friendList =(Friend *)malloc((N)*sizeof(Friend));
  
  int k=0;

  for (int i = 2; i < argc; i++)
  {
    copyString(friendList[k].name, argv[i]);
    k++;
  }
  p->friendList=friendList;

  ProtocolDesc pd;

  clock_t begin = clock();
  
  protocolUseStdio(&pd);
  setCurrentParty(&pd,argv[1][0]=='1'?1:2);
  execYaoProtocol(&pd,evaluateCommonFriends,p);
  cleanupProtocol(&pd);

  clock_t end = clock();
  double timeSpent = (double)(end-begin)/CLOCKS_PER_SEC;
 
  fprintf(stderr, "\nTime Spent by party %d: %f s\n",partyID, timeSpent);
  
  if(p->res!=0)
  {
    fprintf(stderr, "\nNumber common Friends evaluated by Party %d: %d\n",partyID,p->res);
    printCommonFriends(p);
  }
  else
    fprintf(stderr, "\nNo common Friends.\n");
  fprintf(stderr, "\n");


  return 0;
}


