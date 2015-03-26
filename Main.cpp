/*
 * Main.cpp
 *
 *  Created on: Mar 18, 2015
 *      Author: david
 */
#include "vHeap.h"
#include "vint.h"
#include "iostream"

using namespace std;

int main(){

    vInt vint = 2;
    vInt vint2 = vint;

    cout << vint2.getVData()<<endl;

	return 0;
};

