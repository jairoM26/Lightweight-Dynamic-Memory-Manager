/*
 * DataInfo.h
 *
 *  Created on: Mar 18, 2015
 *      Author: david
 */

#ifndef DATAINFO_H_
#define DATAINFO_H_

#include "string.h"
using namespace std;

#define Int 0
#define String 1
#define Char 2
#define Array 3



class DataInfo {
public:
	DataInfo(int pType);
	~DataInfo();

	bool isUsageFlag();

	void setUsageFlag(bool usageFlag);

	int getOffset();

	void setOffset(int offset);

	int getReferenceCounter();

	void setReferenceCounter(int referenceCounter);

	int getSize() ;

	void setSize(int size);

	int getType() ;

	void setType(int type);

private:
	int _Size;
	int _Offset;
	int _Type;
	int _ReferenceCounter;
	bool UsageFlag;





};

#endif /* DATAINFO_H_ */
