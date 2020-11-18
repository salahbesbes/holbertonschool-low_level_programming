#include "header.h"
#include <stdlib.h>


/**
* free_Garbage_coll - free each element in the array of string in the struct gc
* and then free the array of string allocated
* @GC: pointet to struct gc
*
* Return: void
*/

void free_Garbage_coll(gc *GC)
{
	int i = 0;

	if (!GC)
		return;

	/* free each string existing*/

	for (i = 0; i < GC->length; i++)
	{
		free(GC->str_coll[i]);
	}
	free(GC->str_coll);
	printf("-------ok-------------\n");
	/*
	*/
	/* free NULL (defaul initialisation)*/
}
