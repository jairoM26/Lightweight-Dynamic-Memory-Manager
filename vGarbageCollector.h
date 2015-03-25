#ifndef VGARBAGECOLLECTOR_H_
#define VGARBAGECOLLECTOR_H_
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include <DataInfo.h>
#include <vThread.h>

class vGarbageCollector {
private:

	int _gcFrecuency;
	DataInfo _dataInfo;
public:

	vGarbageCollector(DataInfo&, int);
	void avoidMemoryLeak();
};

#endif
