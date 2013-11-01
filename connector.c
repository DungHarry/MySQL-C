/*
	Author: Dung Harry
	Date created: 1st, November 2013
	Operating System: Ubuntu 13.04 Desktop x86_64
	Compiler: GNU compiler 4.8.1

	Description: this is the sample about how to connect to specific table in the database in C programming language

	This is the source code for connector in the C programming language
*/

#include "connector.h"

MYSQL* lpSqlGetConnector(const char *lpcServer, const char *lpcUser, const char *lpcPassword, const char *lpcDatabase) {
	MYSQL *connector;

	connector = mysql_init(NULL);

	if(!mysql_real_connect(connector, lpcServer, lpcUser, lpcPassword, lpcDatabase, 0, NULL, 0)) {
		connector = NULL;
	}

	return connector;
};

void vDestroyConnector(MYSQL **connector) {
	mysql_close(*connector);
}
