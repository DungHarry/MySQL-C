/*
	Author: Dung Harry
	Date created: 1st, November 2013
	Operating System: Ubuntu 13.04 Desktop x86_64
	Compiler: GNU compiler 4.8.1

	Description: this is the header file for the sample about how to fetch all table name in specific database in C programming language
*/

#ifndef _TABLE_NAME_H_

#define _TABLE_NAME_H_

#include "connector.h"

#define ERROR_NULL_CON_FDT -1
#define ERROR_CREATE_QUERY_FDT -2
#define SUCCESS_RESULT_QUERY 0

int iFetchData(MYSQL **connector, const char *lpcQuery, MYSQL_RES **res);
void vPrintResult(MYSQL_RES **res, MYSQL_ROW *row);
void vFileResult(MYSQL_RES **res, MYSQL_ROW *row);
void vPrint(MYSQL **connector, const char *lpcQuery, MYSQL_RES **res, MYSQL_ROW *row);

#endif
