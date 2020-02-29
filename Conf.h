#pragma once 

#include <string>
#include <fstream>
#include <map>
#include <iostream>
#include <cstring>

using namespace std;

class Conf{
public:
	Conf();
	~Conf();
	void init(char* path);
	int getio_thread();
	string getport();
	int getlistenq();
	string getstorage();
	string getlogfile();
	int getkeep_alived();
	int getcapacity();

private:
	char conf[100];
	int io_thread;
	string port;
	int listenq;
	int keep_alived;
	string storage;
	string logfile;
	int capacity;

	int getpos(string &buf, int start, int end, bool flag);
	void Separate_kv(map<string,string>& m, string& buf);
	void solve_comment(string& buf);
};

Conf& getconf();