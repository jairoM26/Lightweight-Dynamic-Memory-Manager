/*
 * vHeap.cpp
 *
 *  Created on: Mar 18, 2015
 *      Author: David Monestel
 */

#include "vHeap.h"

bool vHeap::instanceFlag = false;
vHeap* vHeap::memoryManager = NULL;

int* vHeap::_Size= 0;
int vHeap:: _Overweight= 0;

void* vHeap::vMalloc(size_t pSize, void* pType)
{

   _Size += posActual;

   void* referenciaMemoria = (void*) sizeof(pType);
   return referenciaMemoria;
}


vHeap::vHeap(int pSize, int pOverWeight)
{
    vHeap::_Size  = (int*) malloc(pSize);
	if (_Size ==0)
	{
		printf("ERROR: Out of memory\n");
	}

    for (int i=0; i <=pSize ;i++)
	{
        vHeap::_Size[i] =0;
	}

}

vHeap::~vHeap() {
	// TODO Auto-generated destructor stub

	instanceFlag = false;
}

vHeap* vHeap::getInstace()
{
	if(! instanceFlag)
	    {
            memoryManager = new vHeap(400,_Overweight);
	        instanceFlag = true;
	        return memoryManager;
	    }
    else
    {
        return memoryManager;
    }
}
