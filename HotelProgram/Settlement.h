#pragma once
#include <time.h>

namespace HotelProgram {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Settlement
	/// </summary>
	public ref class Settlement : public System::Windows::Forms::Form
	{
	public:
		Settlement(void)
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
		~Settlement()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label8;


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
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown1->Location = System::Drawing::Point(286, 115);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 36);
			this->numericUpDown1->TabIndex = 24;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Settlement::dateTimePicker2_ValueChanged);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(286, 277);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(257, 36);
			this->textBox3->TabIndex = 23;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(56, 284);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 29);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Телефон";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(129, 590);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(328, 62);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Зберегти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Settlement::button1_Click);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateTimePicker2->Location = System::Drawing::Point(286, 439);
			this->dateTimePicker2->MaxDate = System::DateTime(2030, 12, 31, 0, 0, 0, 0);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(257, 36);
			this->dateTimePicker2->TabIndex = 20;
			this->dateTimePicker2->Value = System::DateTime(2021, 10, 6, 0, 0, 0, 0);
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &Settlement::dateTimePicker2_ValueChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateTimePicker1->Location = System::Drawing::Point(286, 358);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(257, 36);
			this->dateTimePicker1->TabIndex = 19;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Settlement::dateTimePicker1_ValueChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(286, 196);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(257, 36);
			this->textBox2->TabIndex = 18;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(56, 446);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(193, 29);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Дата вирушення";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(56, 365);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(172, 29);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Дата прибуття";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(56, 203);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 29);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Ім\'я";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(56, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 29);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Кімната";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Constantia", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(165, 27);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 59);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Поселення";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(56, 525);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 29);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Ціна";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(286, 520);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 34);
			this->textBox1->TabIndex = 26;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(384, 524);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 29);
			this->label8->TabIndex = 27;
			this->label8->Text = L"грн.";
			// 
			// Settlement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(595, 695);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Settlement";
			this->Text = L"Settlement";
			this->Load += gcnew System::EventHandler(this, &Settlement::Settlement_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool Introduction(std::vector<Admin::Room> &rooms) {
			
			DataBase::Record Newrecord;
			Newrecord.room = Decimal::ToInt32(numericUpDown1->Value);
			Newrecord.SetName(textBox2->Text);
			Newrecord.SetPhone(textBox3->Text);
			Newrecord.arrival.setDate(dateTimePicker1->Value);
			Newrecord.departure.setDate(dateTimePicker2->Value);
			Newrecord.price = Convert::ToInt32(textBox3->Text);

			for (int i = 0; i < rooms.size(); i++) {
				if (rooms[i].number == Newrecord.room && rooms[i].nonavaible)
				{
					MessageBox::Show("Кімната недоступна!"); return false;
				}
			}

			std::vector<DataBase::Record> oldrecords;
			std::ifstream f;
			f.open(DataBase::PATH_TO_DataBase, std::ios_base::app | std::ios_base::binary);
			if (f.is_open()) {
				DataBase::Record temp;
				for (int i = 0; f.read((char*)&temp, sizeof(DataBase::Record)); i++) {
					oldrecords.push_back(temp);
				}
			}
			else { MessageBox::Show("Не вдалося відкрити файл"); exit(0); }

			// пошук в векторі oldrecords
			for (int i = 0; i < oldrecords.size(); i++) {
				if (oldrecords[i].room == Newrecord.room) {
					System::DateTime olddep(oldrecords[i].departure.year, oldrecords[i].departure.month, oldrecords[i].departure.day);
					System::DateTime oldarr(oldrecords[i].arrival.year, oldrecords[i].arrival.month, oldrecords[i].arrival.day);
					System::DateTime newdep(Newrecord.departure.year, Newrecord.departure.month, Newrecord.departure.day);
					System::DateTime newarr(Newrecord.arrival.year, Newrecord.arrival.month, Newrecord.arrival.day);
					if (newarr >= oldarr && newarr <= olddep || newdep >= oldarr && newdep <= olddep) {
						if (MessageBox::Show("На такі дати кімната зайнята, хочете змінити наявне посенення", "Попередження", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
							oldrecords[i] = Newrecord;
							std::ofstream f;
							f.open(DataBase::PATH_TO_DataBase, std::ios_base::out | std::ios_base::binary);
							f.close();

							for (int i1 = 0; i1 < oldrecords.size(); i1++) {
								DataBase::introduction(oldrecords[i1]);
							}
							return true;
						}
						else
							return false;
					}
					
					
				}
			}
			oldrecords.push_back(Newrecord);
			DataBase::introduction(Newrecord);
			return true;		
	}
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::vector<Admin::Room> rooms = Info::GetInfo();
		if (Introduction(rooms))
			this->Close();
	}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	this->dateTimePicker2->MinDate = dateTimePicker1->Value.AddDays(1);
}
private: System::Void Settlement_Load(System::Object^ sender, System::EventArgs^ e) {
	time_t now = time(0);
	tm* data = localtime(&now);
	this->dateTimePicker1->Value = System::DateTime::Now;
	dateTimePicker1_ValueChanged(sender, e);
	
}
private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	std::vector<Admin::Room> rooms = Info::GetInfo();
	for (int i = 0; i < rooms.size(); i++) {
		if (Decimal::ToInt32(numericUpDown1->Value) == rooms[i].number) {
			System::TimeSpan days = dateTimePicker2->Value.AddHours(12) - dateTimePicker1->Value;
			textBox1->Text = (days.Days * rooms[i].price).ToString();
		}
	}
}
};
}
