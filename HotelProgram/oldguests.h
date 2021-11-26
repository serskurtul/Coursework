#pragma once
std::string pathtoold = "oldrecords.db";

namespace HotelProgram {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для oldguests
	/// </summary>
	public ref class oldguests : public System::Windows::Forms::Form
	{
	public:
		oldguests(void)
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
		~oldguests()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Label^ label1;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(13, 59);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(843, 385);
			this->dataGridView1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Constantia", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(13, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(338, 46);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Минулі поселення";
			// 
			// oldguests
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(869, 457);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"oldguests";
			this->Text = L"oldguests";
			this->Load += gcnew System::EventHandler(this, &oldguests::oldguests_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void oldguests_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Rows->Clear();
		std::vector<DataBase::Record> records = DataBase::GetInfo(pathtoold);
		int size = records.size();
		if (!size)
			return;
		std::string** data = new std::string * [size];
		for (int i = 0; i < size; i++) {
			data[i] = new std::string[5];
		}
		for (int i = 0; i < size; i++) {
			data[i][0] = std::to_string(records[i].room);
			data[i][1] = records[i].Name;
			data[i][2] = records[i].phone;
			data[i][3] = records[i].arrival.GetDate_str();
			data[i][4] = records[i].departure.GetDate_str();
		}

		dataGridView1->ColumnCount = 5;
		dataGridView1->Columns[0]->Name = "Номер";
		dataGridView1->Columns[1]->Name = "Ім'я";
		dataGridView1->Columns[2]->Name = "Телефон";
		dataGridView1->Columns[3]->Name = "Дата прибуття";
		dataGridView1->Columns[4]->Name = "Дата відправлення";

		dataGridView1->Rows->Add(size);
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < 5; j++) {
				dataGridView1->Rows[i]->Cells[j]->Value = gcnew String(data[i][j].c_str());
			}
		}
	}
	};
}
