#include"main.h"
/**
 * *_calloc-allocatesmemoryforanarrayof@nmembelementsof
 * *@sizebyteseachandreturnsapointertotheallocatedmemory.
 * *
 * *@nmemb:allocatememoryforarray
 * *@size:allocateelementofsizebytes
 * *
 * *Return:pointer totheallocatedmemory.
 * */
void*_calloc(unsignedintnmemb,unsignedintsize)
{
	char*a;
	unsignedintb;
	if(nmemb==0||size==0)
		return(NULL);
	a=malloc(nmemb*size);
	if(a==NULL)
		return(NULL);
	for(b=0;b<(nmemb*size);b++)
		a[b]=0;
	return(a);
}
