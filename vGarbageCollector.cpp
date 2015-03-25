#include "vGarbageCollector.h"

//pFrecuency sera el dato cargado desde el xml para utilizarlo
//en el sleep del thread
/*vGarbageCollector::vGarbageCollector(DataInfo& _pData, int pFrecuency)
{
	_pData = _dataInfo;
	_gcFrecuency = pFrecuency;
}

void vGarbageCollector::avoidMemoryLeak()
{
	vThread *gcThread = new vThread((void *)vGarbageCollector::avoidMemoryLeak(),nullptr);
	gcThread->run();

	if (_dataInfo.getReferenceCounter() == 0)
	{
		//vRef será el dato que contenga el counter = 0
		//O sea, se debe liberar de la memoria
		/*if(vRef == NULL)
		{
			return;
		}
		else
		{
			void free(void *vRef);
			vRef = NULL;
		}*/
/*
	}usleep(_gcFrecuency);
}
*/
