#pragma once
DataBase::Record record;
namespace HotelProgram {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для GuestInfo
	/// </summary>
	public ref class GuestInfo : public System::Windows::Forms::Form
	{
	public:
		GuestInfo(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~GuestInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox3;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(329, 183);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(237, 44);
			this->textBox3->TabIndex = 13;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Constantia", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(329, 125);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(381, 40);
			this->textBox2->TabIndex = 12;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(329, 69);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(83, 44);
			this->textBox1->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(34, 189);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 37);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Телефон";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 128);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 37);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Ім\'я";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 72);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 37);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Номер";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Constantia", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(146, 9);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(411, 49);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Інформація про гостя";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(34, 251);
			this->label5->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(215, 37);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Дата прибуття";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(34, 308);
			this->label6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(241, 37);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Дата вирушення";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(329, 241);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(237, 44);
			this->textBox4->TabIndex = 17;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(329, 302);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(237, 44);
			this->textBox5->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(467, 373);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(243, 48);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Виселити гостя";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GuestInfo::button1_Click);
			// 
			// GuestInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(722, 433);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Constantia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name = L"GuestInfo";
			this->Text = L"GuestInfo";
			this->Load += gcnew System::EventHandler(this, &GuestInfo::GuestInfo_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GuestInfo_Load(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = record.room.ToString();
		textBox2->Text = gcnew System::String(record.Name);
		textBox3->Text = gcnew System::String(record.phone);
		textBox4->Text = gcnew System::String(record.arrival.GetDate_str().c_str());
		textBox5->Text = gcnew System::String(record.departure.GetDate_str().c_str());
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::DateTime dep(record.departure.year, record.departure.month, record.departure.day);
	System::DateTime today(System::DateTime::Now.Year, System::DateTime::Now.Month, System::DateTime::Now.Day);
	if (dep > today) {
		if (MessageBox::Show("Для гостя час ще не прийшов. Ви точно бажаєте його виселити?", "Попередження", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes){
			std::vector<DataBase::Record> records = DataBase::GetInfo();
			for (int i = 0; i < records.size(); i++) {
				if (records[i].room == record.room && records[i].departure == record.departure) {
					DataBase::introduction(records[i], pathtoold);
					records.erase(records.begin() + i);
					DataBase::introduction(records);
					break;
				}
			}
		}
	}
	else {
		if (MessageBox::Show("Виселити гостя?", "Попередження", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			std::vector<DataBase::Record> records = DataBase::GetInfo();
			for (int i = 0; i < records.size(); i++) {
				if (records[i].room == record.room && records[i].departure == record.departure) {
					DataBase::introduction(record, pathtoold);
					records.erase(records.begin() + i);
					DataBase::introduction(records);
					break;
				}
			}
		}
	}
}
};
}
