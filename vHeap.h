/*
 * vHeaps.h
 *
 *  Created on: Mar 18, 2015
 *      Author: David Monestel
 */
#ifndef VHEAP_H_
#define VHEAP_H_
#include <cstdint>
#include <stdio.h>
#include <stdlib.h>
#include "vRef.h"
#include <algorithm>
#include <string.h>
#include <ctype.h>

using namespace std;


class vHeap 	{
public:

	~vHeap();
    void *vMalloc(size_t pSize, void *pType); // debe de devolver un vRef
	void vFree(void* needToFree);
	void expandVHeap();
	static vHeap* getInstace();


private:
    int posActual=0;
    static int* _Size;
    static int _Overweight;
    vHeap(int pSize , int pOverweight);
	static bool instanceFlag;
	static vHeap * memoryManager;


};

#endif /* VHEAP_H_ */
//Prueba ediatda por Santi
