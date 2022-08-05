SQL: 

mysql-ctl cli ;
show databases ;
CREATE DATABASE dbname ;
drop database dbname ;
USE dbname;   => to use that particular database.
SELECT database ();     => in which database we are in.

CREATE TABLE employee
(
name varchar(50),
age INT,
salary INT
);

Datatypes: INT for numeric
	      varchar for string

show tables;
drop table employee;
describe employee; or desc employee;

CRUD operations
create - insert statements
read - select statements
update - update statements
delete - delete statements

Creation of table and Insert Statements
Employee table
You prefer to hire from bangalore

//DDL command
create table employee(
firstname varchar(50),
middlename varchar(50),
lastname varchar(50),
age INT,
salary INT,
location varchar(50)
);


select * from employee;   => to see record from employee.
INSERT INTO employee(firstname, middlename, lastname, age, salary, location) VALUES(‘Pandit’, ‘Rohit’, ‘Sharma’, 25, 25000, ‘Banglore’);
INSERT INTO employee(firstname,lastname,age,salary,location) values ('mohit','Sh_arma',25,25000,'Banglore');
INSERT INTO employee(firstname,lastname,age,salary,location) values ('mohit','Sh\’arma',25,25000,'Banglore');   => backslash means consider ‘ in name
 INSERT INTO employee(firstname, middlename, lastname, age, salary, location) VALUES("Pandit","Rohit", "Sharma", 25, 25000, "Banglore"),("mohit","kumar","verma",45,787,"Delhi"); => multiple records;

	NULL  Value means cannot know 
	======================
// Other fields cannot be null
create table employee(
firstname varchar(50) NOT NULL,
middlename varchar(50),
lastname varchar(50) NOT NULL,
age INT NOT NULL,
salary INT NOT NULL,
location varchar(50) NOT NULL
);

Default values 
============
=>If you do not give location then by default it will be banglore
=>Combination of not null and default
create table employee (
firstname varchar(50) NOT NULL,
middlename varchar(50),
lastname varchar(50) NOT NULL,
age INT NOT NULL,
salary INT NOT NULL,
location varchar(50) NOT NULL DEFAULT ‘banglore’
);

//if location is nullable then we can specify null value
INSERT INTO employee(firstname, middlename, lastname, age, salary, location) VALUES(‘Pandit’, ‘Rohit’, ‘Sharma’, 25, 25000, null);


=======================
Session 3
Primary key 
Auto Incriment Keys
Unique key 
Primary key vs Unique key

Primary key 
================
Uniquely identify each record in the table
It won’t allow any NULL value  and it also won’t allow any repeated value

create table employee (
Id int 
firstname varchar(50) NOT NULL,
middlename varchar(50),
lastname varchar(50) NOT NULL,
age INT NOT NULL,
salary INT NOT NULL,
location varchar(50) NOT NULL DEFAULT ‘banglore’
);

 INSERT INTO employee(id,firstname,lastname, age, salary,location) VALUES(1,'Rohit','Sharma', 25
, 25000,’Delhi’);

Same record will go into table we have to explicitly make id as Primary Key

create table employee (
 Id int PRIMARY KEY,
 firstname varchar(50) NOT NULL,
 middlename varchar(50),
 lastname varchar(50) NOT NULL,
age INT NOT NULL, 
salary INT NOT NULL,
location varchar(50) NOT NULL DEFAULT'banglore' );

Below Command work same way
create table employee(
Id int,
firstname varchar(50) NOT NULL,
middlename varchar(50),
lastname varchar(50) NOT NULL,
age INT NOT NULL, 
salary INT NOT NULL,
location varchar(50) NOT NULL DEFAULT"banglore",
PRIMARY KEY(id)
);
Composite Primary Key which is on two columns;
///////////////////
create table employee (
 Id int,
 firstname varchar(50) NOT NULL,
 middlename varchar(50),
 lastname varchar(50) NOT NULL,
age INT NOT NULL, 
salary INT NOT NULL,
location varchar(50) NOT NULL DEFAULT'banglore' ,
PRIMARY KEY(id,name);
);

create table employee (
 Id int AUTO_INCREMENT,
 firstname varchar(50) NOT NULL,
 middlename varchar(50),
 lastname varchar(50) NOT NULL,
age INT NOT NULL, 
salary INT NOT NULL,
location varchar(50) NOT NULL DEFAULT'banglore' ,
PRIMARY KEY(id)
);


UNIQUE key
=================
You can have only one primary key
And primary key cannot hold any NULL
We should use primary key when we have to uniquely identify each record.

Unique key can hold NULL
For example in mysql a unique key can hold any number of null values.
In some of other famous DBs unique key hold only one NULL.
  
The purpose of UNIQUE key is to make sure the values do not duplicate.
We can have only one primary key but multiple unique keys in a table.







Composite key
==========
create table employee (
 firstname varchar(50) NOT NULL,
 lastname varchar(50) NOT NULL,
age INT NOT NULL, 
PRIMARY KEY(firstname,lastname)
);

insert into employee values('rohit', 'kumar', 15);

create table employee (
Id int UNIQUE KEY,
 firstname varchar(50),
 lastname varchar(50),
age INT NOT NULL, 
);
Insert into employee values(null,"rohit","sharma",45);


create table employee (
 Id int,
 firstname varchar(50),
 lastname varchar(50),
age INT NOT NULL, 
UNIQUE KEY(Id,firstname)
);

-- Lecture 4

SELECT - read operation in CRUD
==================================
--selecting all columns
SELECT * FROM employee;

-- Selecting specific columns from table;
select firstname, lastname from employee;

-- Select by appling a where clause(filter condition , specific rows);
select * from employee WHERE age > 45;

-- By default it is caseinsensitive
select * from employee WHERE firstname = “rohit” ;

select * from employee WHERE firstname = “rohit” ;
-- The above statement will match the exact case and is case sensitive;
select * from employee WHERE binary firstname = “rohit” ;

–Alias
select firstname as  name, lastname as surname from employee;

UPDATE
=====================
update employee set lastname="Kalia" where firstname = "Murad";

Below code will match all records and update location.
update employee set location="Delhi";

update employee set salary=salary+500000;
update employee set location="Murthal" where firstname="Murad" and lastname = "Kalia";

Delete
====================
delete from employee where id=3;
--All records will be deleted
delete from employee;


-- Alter Command
-- Alter is to change the structure of the table
alter table employee add column jobtitle varchar(50);
alter table employee drop column jobtitle;
alter table employee modify column firstname varchar(30);
alter table employee drop PRIMARY KEY;
alter table employee add primary key(id);


DDL vs DML
===================
Data Definition Language--Deals with table structure
Create, Alter, Drop--DDL commands
Data Manupulation Language--Here we deal with data directly
insert update delete--DML commands

delete from employee; --DML
Truncate also removes all records--But DDL Command
truncate internally drops the table and recreates the table


SESSION 5
============
Foreign key constrain

Students TABLE
======
create table students(
student_id int AUTO_INCREMENT,
student_fname varchar(30) NOT NULL,
student_lname varchar(30) NOT NULL,
student_mname varchar(30),
student_email varchar(30) NOT NULL,
student_phone varchar(30) NOT NULL,
student_alternate_phone varchar(30),
enrolment_date TIMESTAMP NOT NULL,
years_of_exp int NOT NULL,
student_company varchar(30),
batch_date varchar(30) NOT NULL,
source_of_joining varchar(30), NOT NULL,
location varchar(30), NOT NULL
primary key (student_id),
unique key (student_email)
);