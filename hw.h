#define MAXL 50 // Max Length of string
#define MAXN 50	// Max Number of friends for each party

// Definition a new type for store friend informations
typedef struct Friend
{
	char name[MAXL];
}Friend;

// Definition of a new type for store party informations
typedef struct Party
{
	int id;
	int numFriends;
	int res;
	Friend commonFriends[MAXN];
	Friend *friendList;
}Party;

// Signatures of implemented functions
void evaluateCommonFriends(void *); 
bool oblivStrCmp(obliv char * , obliv char *);
void copyString(char *, char const *);
void revealOblivString(char *, obliv char const *);
void oblivStringCopy (obliv char * , char const *, int );
void printCommonFriends(Party *);



