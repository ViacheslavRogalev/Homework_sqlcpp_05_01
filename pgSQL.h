#pragma once
#include <pqxx/pqxx>
#include <iostream>

class DatabaseClients
{
public:
	DatabaseClients();
	void createDB();
	void addClient(std::string name, std::string surname, std::string email);
	int getClientID(std::string name, std::string surname);
	void addPhone(int client_id, std::string phone);
	void changeClient(int id, std::string name, std::string surname, std::string email);
	void deletePhone(int client_id);
	void deleteClient(int client_id);
	void findClient(std::string search);
	void printAll();

private:
	std::unique_ptr<pqxx::connection> conn;
};