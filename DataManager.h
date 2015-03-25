/*
 * DataManager.h
 *
 *  Created on: Mar 18, 2015
 *      Author: david
 */

#ifndef DATAMANAGER_H_
#define DATAMANAGER_H_

#include "lista_enlazada.h"
#include "DataInfo.h"

class DataManager {
public:
	~DataManager();
	static DataManager* getInstace();
	void _insertNewObject(int pType );
	void _deleteData();
    DataInfo* newDato ;



private:
	DataManager();
    lista_enlazada<DataInfo>* listaMetaDatos;
	static bool instanceFlag;
	static DataManager * dataManager;
};

#endif /* DATAMANAGER_H_ */
