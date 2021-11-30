#pragma once
#include "GuestInfo.h"
#include "Logic.h"

enum Status {
	Free,
	Busy,
	Reserved
};

namespace HotelProgram {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� RoomInfo
	/// </summary>
	public ref class RoomInfo : public System::Windows::Forms::Form
	{
	public:
		RoomInfo(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~RoomInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	public:	bool mode; // mode 0 - color red; 1 - yellow
		  int number;
		  
		Status status;
	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Constantia", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(15, 35);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(493, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"���������� ��� ������ �� ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(63, 119);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 37);
			this->label2->TabIndex = 1;
			this->label2->Text = L"�����";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(63, 181);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 37);
			this->label3->TabIndex = 2;
			this->label3->Text = L"����";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(63, 377);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 37);
			this->label4->TabIndex = 3;
			this->label4->Text = L"������";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(287, 116);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 44);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(287, 181);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(331, 115);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(287, 370);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(260, 44);
			this->textBox3->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(287, 433);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(260, 45);
			this->button1->TabIndex = 8;
			this->button1->Text = L"���������� ��� �����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &RoomInfo::button1_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(412, 319);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(57, 29);
			this->label10->TabIndex = 16;
			this->label10->Text = L"���.";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Constantia", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(287, 312);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(119, 44);
			this->textBox5->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(63, 312);
			this->label6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(218, 37);
			this->label6->TabIndex = 17;
			this->label6->Text = L"������� �� ��";
			// 
			// RoomInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(646, 502);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Constantia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->Name = L"RoomInfo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"RoomInfo";
			this->Load += gcnew System::EventHandler(this, &RoomInfo::RoomInfo_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void RoomInfo_Load(System::Object^ sender, System::EventArgs^ e) {
		Admin::Room room = Info::GetRoom(number);
		label1->Text += gcnew String(Info::datestr.c_str());
		textBox1->Text = room.number.ToString();
		textBox2->Text = gcnew System::String(room.description);
		textBox5->Text = gcnew  System::String(room.price.ToString());
		if (room.nonavaible) {
			textBox3->Text = "����������";
		}
		else { switch (status) {
		case Status::Busy:
			textBox3->Text = "�������";
			break;
		case Status::Reserved:
			textBox3->Text = "�������������";
			break;
		default:
			textBox3->Text = "³����";
		} }
		std::vector<DataBase::Record> records;
		if (DataBase::FindGuests(number, records)) {
			switch (mode) {
			case 0:
				for (int i = 0; i < records.size(); i++) {
					System::DateTime dep(records[i].departure.year, records[i].departure.month, records[i].departure.day);
					System::DateTime arr(records[i].arrival.year, records[i].arrival.month, records[i].arrival.day);
					System::DateTime date(Info::date.year, Info::date.month, Info::date.day);
					if (date >= arr && date <= dep) {
						record = records[i];
						button1->Visible = true;
						return;
					}
				}
				break;
			case 1:
				System::DateTime date1(3000,1,1);
				DataBase::Record fordate1;
				for (int i = 0; i < records.size(); i++) {
					System::DateTime arr(records[i].arrival.year, records[i].arrival.month, records[i].arrival.day);
					System::DateTime date(Info::date.year, Info::date.month, Info::date.day);
					if (date < arr) {
						if (arr < date1) {
							date1 = System::DateTime(records[i].arrival.year, records[i].arrival.month, records[i].arrival.day);
							record = records[i];
							button1->Visible = true;
						}
					}
				}
			}
				

			
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	GuestInfo gi;
	gi.ShowDialog();
}

};
}
