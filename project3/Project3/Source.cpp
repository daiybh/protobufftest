#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "pb/code/cpp/broadcast.pb.h"

#pragma comment(lib,"libprotobufd.lib")
#pragma comment(lib,"libprotocd.lib")
#define FILE_PATH "c:\\logs\\bbb.txt"

void print(GoogleProtoBB::Value_Recorder_Train_In_Out &value)
{
	cout << "\n";
	
	cout << "\ncount:\t" << value.count();
	
	for (int i = 0; i < value.count(); i++)
	{
		cout << "\ntrainin:\t" << value.trainin()[i];
		cout << "\ntrainout:\t" << value.trainout()[i];
	}
}
void Add() {

	GoogleProtoBB::BroadCastData broadCastData;
	{
		GoogleProtoBB::Value_Recorder_Train_In_Out* value = broadCastData.mutable_recorder_train_in_out();
	value->set_count(1);
	value->add_trainin(2);
	value->add_trainout(3);
	int len = value->ByteSizeLong();
	print(*value); 
	}
	{
		GoogleProtoBB::Value_Player_Status *value = broadCastData.mutable_player_status();
		value->set_count(5);
		
		for (int i = 0; i < 5; i++)
		{
			GoogleProtoBB::Value_Player_Status_StatusInfo *pinfo = value->add_statusinfo();
			pinfo->set_id(i);
			pinfo->set_status(100*i);
		}
	}
	
	fstream output(FILE_PATH, ios::out | ios::trunc | ios::binary);
	broadCastData.SerializeToOstream(&output);
	
}

void read(const char *filePath) {
	GoogleProtoBB::BroadCastData broadCastData;
	
	fstream input(filePath, ios::in | ios::binary);
	if (!input) {
		cout << ": File not found.  Creating a new file." << endl;
		return;
	}

	if (!broadCastData.ParseFromIstream(&input)) {
		cerr << "Failed to parse address book." << endl;
		return;
	}
	GoogleProtoBB::Value_Recorder_Train_In_Out* value = broadCastData.mutable_recorder_train_in_out();

	print(*value);
}

int main()
{
	GOOGLE_PROTOBUF_VERIFY_VERSION;

	Add();

	cout << "\n\n\n\ndone\n\n\n\n\n" << endl;
	read(FILE_PATH);

	//read("c:\\logs\\aaaa.txt");
	return 0;
}