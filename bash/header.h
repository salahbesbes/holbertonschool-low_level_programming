#ifndef GARD
#define GARD

#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<unistd.h> 
#include<sys/types.h> 
#include<sys/wait.h> 
#include<readline/readline.h> 
#include<readline/history.h> 
#include <fcntl.h>
typedef struct buf {
	char ch;
	struct buf *next;
} buf_Node;

typedef struct List_path {
	char *path;
	struct List_path *next;
} List_path;

typedef struct G_collecttor {
	char **str_coll;
	int length;
} gc;

char *_strparse(char **buffer, char *deli);
int parsedPipe(char *str, char **strpiped);
char *_trim(char **str, gc *GC);
void printList(List_path *header);
List_path *addToEnd(List_path **header, char *str);
char *_getenv(char *name, char **Dir);
char *GetAllDir(char **str);
int checkName(char *Name, char *ARG, char ch);
int deleteNode(char *Name, List_path **header);
int addNode(char *Name, char *Variable, List_path **header);
char *_strConcatEnv(char *str1, char *cop, int ch, gc *GC);
void free_list(List_path *head);
void parseSpecialChar(char *str, char **parsed, char *sep, char *sep2);
int _insertTo_GC(gc *GC, char *str);
int _setenv(char **env, char *Name, char *value, int overwrite, gc *GC);
int _delete_env(char **env, char *Name);
char *delete_comment(char *str);
void free_Garbage_coll(gc *GC);
char *_copAlloc(char *str, gc *GC);
char *delete_comment(char *str);
char *_strparse(char **buf, char *sep);

typedef struct cln_cmd
{
	char *command;
	char *args;
	char next_oper;
} cmd_t;




#endif
