/*
	Author: Dung Harry
	Date created: 1st, November 2013
	Operating System: Ubuntu 13.04 Desktop x86_64
	Compiler: GNU compiler 4.8.1

	Description: this is the sample about how to connect to specific table in the database in C programming language

	This is the header file for connector in the C programming language
*/

#ifndef _CONNECTOR_H_

#define _CONNECTOR_H_

#include <stdio.h>
#include <mysql.h>

MYSQL* lpSqlGetConnector(const char *lpcServer, const char *lpcUser, const char *lpcPassword, const char *lpcDatabase);
void vDestroyConnector(MYSQL **connector);

#endif
