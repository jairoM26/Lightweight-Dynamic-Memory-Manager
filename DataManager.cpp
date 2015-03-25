/*
 * DataManager.cpp
 *
 *  Created on: Mar 18, 2015
 *      Author: david
 */

#include "DataManager.h"

bool DataManager::instanceFlag = false;
DataManager* DataManager::dataManager = nullptr;

DataManager::DataManager() {
    listaMetaDatos = new lista_enlazada<DataInfo>();
}

void DataManager::_insertNewObject(int pType )
{
    //newDato = new DataInfo(pType);
    //listaMetaDatos->add_Dato_Atras(*newDato);
}

void DataManager::_deleteData()
{

}







DataManager::~DataManager() {
	instanceFlag = false;
}

DataManager* DataManager::getInstace()
{
	if(! instanceFlag)
	    {
            dataManager = new DataManager();
	        instanceFlag = true;
	        return dataManager;
	    }
	    else
	    {
	        return dataManager;
	    }
}




