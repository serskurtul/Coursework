#pragma once
#include <string>
#include <vector>
#include <msclr\marshal_cppstd.h>
#include <fstream>
#include <Windows.h>



namespace LOGIN {
	std::string password = "none";
	std::string login;
	bool success_login = 0;
	std::string PATH_TO_PASSWORD = "D:/Projects/labs/Курсова/HotelProgram/HotelProgram/password.txt";
	void setPasswordLogin() {
		std::ifstream f;
		f.open(PATH_TO_PASSWORD, std::ios_base::app);
		if (f.is_open()) {
			f >> password >> login;
		}
	}
}
namespace DataBase {
	std::string PATH_TO_DataBase = "records.db";
	struct Date {
		int day;
		int month;
		int year;
		Date(int day, int month, int year) {
			this->day = day;
			this->month = month;
			this->year = year;
		}
		Date(){}
		void setDate (System::DateTime date) {

			this->day = date.Day;
			this->month = date.Month;
			this->year = date.Year;
		}
		std::string GetDate_str() {
			return std::to_string(day) + "." + std::to_string(month) + "." + std::to_string(year);
		}
		bool operator==(Date date) {
			if (this->day == date.day && this->month == date.month && this->year == date.year)
					return 1;
			else return 0;
		}

	};
	class Record {
	public:
		int room;
		char Name[100];
		char phone[15];
		Date arrival;
		Date departure;
		void SetName(System::String^ desc) {
			std::string nameS = msclr::interop::marshal_as<std::string>(desc);
			for (int i = 0; i < nameS.length(); i++) {
				Name[i] = nameS[i];
			}
			Name[nameS.length()] = '\0';
		}
		void SetPhone(System::String^ desc) {
			std::string tempphone = msclr::interop::marshal_as<std::string>(desc);
			for (int i = 0; i < tempphone.length(); i++) {
				phone[i] = tempphone[i];
			}
			phone[tempphone.length()] = '\0';
		}
	};
	bool FindGuest(int number, std::vector<Record> records, Record &newrecord) {
		for (int i = 0; i < records.size(); i++) {
			if (records[i].room == number) {
				newrecord = records[i];
				return true;
			}
		}
		return false;
	}

	int GetDays(Date date) {
		int days;
		int daysinmonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		for (int i = 0; i < date.month; i++) {
			days += daysinmonth[i];
		}
		return days;
	}
	int GetDays(System::DateTime date) {
		int days;
		int daysinmonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		for (int i = 0; i < date.Month; i++) {
			days += daysinmonth[i];
		}
		return days;
	}
	void introduction(Record record, std::string path = PATH_TO_DataBase) {
		std::ofstream f;
		f.open(path, std::ios_base::app | std::ios_base::binary);
		if (f.is_open()) {
			f.write((char*)&record, sizeof(Record));
		}
		f.close();
	}
	void introduction(std::vector<Record> records ) {
		std::ofstream f;
		f.open(PATH_TO_DataBase, std::ios_base::out | std::ios_base::binary);
		for (int i = 0; i < records.size(); i++) {
			if (f.is_open()) {
				f.write((char*)&records[i], sizeof(Record));
			}
		}
		f.close();
	}
	std::vector<Record> GetInfo(std::string path = PATH_TO_DataBase) {
		std::vector<Record> records;
		std::ifstream f;
		f.open(path, std::ios_base::app | std::ios_base::binary);
		if (f.is_open()) {
			Record temp;
			for (int i = 0; f.read((char*)&temp, sizeof(Record)); i++) {
				records.push_back(temp);
			}
		}
		else { System::Windows::Forms::MessageBox::Show("Не вдалося відкрити файл"); exit(0); }

		return records;
	}
	bool GetRecord(int number, Record &record) {
		std::vector<Record> rooms;
		std::ifstream f;
		f.open(PATH_TO_DataBase, std::ios_base::app | std::ios_base::binary);
		if (f.is_open()) {
			Record temp;
			for (int i = 0; f.read((char*)&temp, sizeof(Record)); i++) {
				rooms.push_back(temp);
			}
		}
		else { System::Windows::Forms::MessageBox::Show("Не вдалося відкрити файл"); exit(0); }

		
		for (int i = 0; i < rooms.size(); i++) {
			if (rooms[i].room == number) {
				record = rooms[i];
				return true;
			}
		}
		return false;
	}
}

namespace Admin {
	//enum Status {
	//	Free, 
	//	Busy,
	//	Reserved,
	//	NotAvailable
	//};
	std::string PATH_TO_ROOMS = "room.db";
	bool changing = false;
	class Room {
	public:
		int number;
		char description[120];
		int price;
		bool nonavaible;
		void SetDescription(System::String^ desc) {
			std::string nameS = msclr::interop::marshal_as<std::string>(desc);
			for (int i = 0; i < nameS.length(); i++) {
				description[i] = nameS[i];
			}
			description[nameS.length()] = '\0';
		}
	};
	void introduction(Room room) {
		std::ofstream f;
		f.open(PATH_TO_ROOMS, std::ios_base::app | std::ios_base::binary);
		if (f.is_open()) {
			f.write((char*)&room, sizeof(room));
		}
		f.close();
	}

}

namespace Info {
	int number;
	std::string date;
	Admin::Room GetRoom(int number) {
		std::vector<Admin::Room> rooms;
		std::ifstream f;
		f.open(Admin::PATH_TO_ROOMS, std::ios_base::app | std::ios_base::binary);
		if (f.is_open()) {
			Admin::Room temp;
			for (int i = 0; f.read((char*)&temp, sizeof(Admin::Room)); i++) {
				rooms.push_back(temp);
			}
		}
		else { System::Windows::Forms::MessageBox::Show("Не вдалося відкрити файл"); exit(0); }

		Admin::Room RoomLookingFor;
		for (int i = 0; i < rooms.size(); i++) {
			if (rooms[i].number == number) {
				RoomLookingFor = rooms[i];
				break;
			}
		}
		return RoomLookingFor;
	}

	std::vector<Admin::Room> GetInfo() {
		std::vector<Admin::Room> rooms;
		std::ifstream f;
		f.open(Admin::PATH_TO_ROOMS, std::ios_base::app | std::ios_base::binary);
		if (f.is_open()) {
			Admin::Room temp;
			for (int i = 0; f.read((char*)&temp, sizeof(Admin::Room)); i++) {
				rooms.push_back(temp);
			}
		}
		else { System::Windows::Forms::MessageBox::Show("Не вдалося відкрити файл"); exit(0); }

		return rooms;
	}
}

