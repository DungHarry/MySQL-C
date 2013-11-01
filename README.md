MySQL-C
=======

MySQL API for C programming language 

Author: Dung Harry
	Date created: 1st, November 2013
	Operating System: Ubuntu 13.04 Desktop x86_64
	Compiler: GNU compiler 4.8.1

	Description: this is the sample about how to fetch data in MySQL database via C programming language

	Compile and run:
		gcc -c $(mysql_config --cflags) connector.c $(mysql_config --libs)
		gcc -c $(mysql_config --cflags) fetch_data.c $(mysql_config --libs)
		gcc -o mysql $(mysql_config --cflags) fetch_data.o connector.o main.c $(mysql_config --libs)

		./mysql

	Need to install libmysql++ by using the command:
		sudo apt-get install libmysql++-dev

	Testing:
	- Create a database with one table and insert a tuble into it in MySQL database:
		create database Test;

		use Test;

		create table User (
			Id int auto_increment not null,
			Name varchar(50) not null,
			Password varchar(50) not null,
			Email varchar(50),
			Address varchar(100),
			constraint Id primary key(Id) 
		);

		insert into User(Name, Password, Email, Address) values ("Dung Harry", "Hello C API for MySQL!", "dungharry@engine.com", "Hanoi University of Science and Technology")

	- Run program by using command in Terminal: ./mysql with:
		+ Server name: localhost
		+ User name: root
		+ Password: password
		+ Datbase name: Test
		+ The query: select * from User
