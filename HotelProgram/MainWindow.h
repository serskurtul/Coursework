#pragma once

#include "Settlement.h"
#include "AdmPass.h"
#include "RoomInfo.h"
#include "oldguests.h"

std::vector<DataBase::Record> oldrecords;

time_t now = time(0);
tm* date = localtime(&now);

namespace HotelProgram {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
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
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^ tabPage2;
	protected:
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ room15;
	private: System::Windows::Forms::Button^ room14;
	private: System::Windows::Forms::Button^ room13;
	private: System::Windows::Forms::Button^ room12;
	private: System::Windows::Forms::Button^ room11;
	private: System::Windows::Forms::Button^ room10;
	private: System::Windows::Forms::Button^ room9;
	private: System::Windows::Forms::Button^ room8;
	private: System::Windows::Forms::Button^ room7;
	private: System::Windows::Forms::Button^ room6;
	private: System::Windows::Forms::Button^ room5;
	private: System::Windows::Forms::Button^ room4;
	private: System::Windows::Forms::Button^ room3;
	private: System::Windows::Forms::Button^ room2;
	private: System::Windows::Forms::Button^ room1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ main;
	private: System::Windows::Forms::Button^ Guests;
	private: System::Windows::Forms::Panel^ panel1;

	protected:


	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->room15 = (gcnew System::Windows::Forms::Button());
			this->room14 = (gcnew System::Windows::Forms::Button());
			this->room13 = (gcnew System::Windows::Forms::Button());
			this->room12 = (gcnew System::Windows::Forms::Button());
			this->room11 = (gcnew System::Windows::Forms::Button());
			this->room10 = (gcnew System::Windows::Forms::Button());
			this->room9 = (gcnew System::Windows::Forms::Button());
			this->room8 = (gcnew System::Windows::Forms::Button());
			this->room7 = (gcnew System::Windows::Forms::Button());
			this->room6 = (gcnew System::Windows::Forms::Button());
			this->room5 = (gcnew System::Windows::Forms::Button());
			this->room4 = (gcnew System::Windows::Forms::Button());
			this->room3 = (gcnew System::Windows::Forms::Button());
			this->room2 = (gcnew System::Windows::Forms::Button());
			this->room1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Guests = (gcnew System::Windows::Forms::Button());
			this->main = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Transparent;
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 33);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4);
			this->tabPage2->Size = System::Drawing::Size(1422, 576);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gainsboro;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(1150, 54);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(259, 46);
			this->button5->TabIndex = 22;
			this->button5->Text = L"Попередні поселення";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainWindow::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Constantia", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(14, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(375, 53);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Наявні поселення";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Gainsboro;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(14, 476);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(127, 93);
			this->button4->TabIndex = 20;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gainsboro;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Constantia", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(165, 476);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(244, 93);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Поселення";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click_1);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(14, 106);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1395, 364);
			this->dataGridView1->TabIndex = 13;
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(-6, 13);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1430, 613);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Transparent;
			this->tabPage1->Controls->Add(this->room15);
			this->tabPage1->Controls->Add(this->room14);
			this->tabPage1->Controls->Add(this->room13);
			this->tabPage1->Controls->Add(this->room12);
			this->tabPage1->Controls->Add(this->room11);
			this->tabPage1->Controls->Add(this->room10);
			this->tabPage1->Controls->Add(this->room9);
			this->tabPage1->Controls->Add(this->room8);
			this->tabPage1->Controls->Add(this->room7);
			this->tabPage1->Controls->Add(this->room6);
			this->tabPage1->Controls->Add(this->room5);
			this->tabPage1->Controls->Add(this->room4);
			this->tabPage1->Controls->Add(this->room3);
			this->tabPage1->Controls->Add(this->room2);
			this->tabPage1->Controls->Add(this->room1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->monthCalendar1);
			this->tabPage1->Location = System::Drawing::Point(4, 33);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(1422, 576);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			// 
			// room15
			// 
			this->room15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->room15->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->room15->Location = System::Drawing::Point(931, 390);
			this->room15->Name = L"room15";
			this->room15->Size = System::Drawing::Size(140, 140);
			this->room15->TabIndex = 58;
			this->room15->Text = L"15";
			this->room15->UseVisualStyleBackColor = true;
			this->room15->Click += gcnew System::EventHandler(this, &MainWindow::room9_Click);
			// 
			// room14
			// 
			this->room14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->room14->BackColor = System::Drawing::Color::DarkGray;
			this->room14->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->room14->Location = System::Drawing::Point(754, 390);
			this->room14->Name = L"room14";
			this->room14->Size = System::Drawing::Size(140, 140);
			this->room14->TabIndex = 57;
			this->room14->Text = L"14";
			this->room14->UseVisualStyleBackColor = false;
			this->room14->Click += gcnew System::EventHandler(this, &MainWindow::room9_Click);
			// 
			// room13
			// 
			this->room13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->room13->BackColor = System::Drawing::Color::PaleGreen;
			this->room13->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->room13->Location = System::Drawing::Point(577, 390);
			this->room13->Name = L"room13";
			this->room13->Size = System::Drawing::Size(140, 140);
			this->room13->TabIndex = 56;
			this->room13->Text = L"13";
			this->room13->UseVisualStyleBackColor = false;
			this->room13->Click += gcnew System::EventHandler(this, &MainWindow::room9_Click);
			// 
			// room12
			// 
			this->room12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->room12->BackColor = System::Drawing::Color::LightCoral;
			this->room12->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->room12->Location = System::Drawing::Point(400, 390);
			this->room12->Name = L"room12";
			this->room12->Size = System::Drawing::Size(140, 140);
			this->room12->TabIndex = 55;
			this->room12->Text = L"12";
			this->room12->UseVisualStyleBackColor = false;
			this->room12->Click += gcnew System::EventHandler(this, &MainWindow::room9_Click);
			// 
			// room11
			// 
			this->room11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->room11->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->room11->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->room11->Location = System::Drawing::Point(223, 390);
			this->room11->Name = L"room11";
			this->room11->Size = System::Drawing::Size(140, 140);
			this->room11->TabIndex = 54;
			this->room11->Text = L"11";
			this->room11->UseVisualStyleBackColor = false;
			this->room11->Click += gcnew System::EventHandler(this, &MainWindow::room9_Click);
			// 
			// room10
			// 
			this->room10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->room10->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->room10->Location = System::Drawing::Point(931, 210);
			this->room10->Name = L"room10";
			this->room10->Size = System::Drawing::Size(140, 140);
			this->room10->TabIndex = 53;
			this->room10->Text = L"10";
			this->room10->UseVisualStyleBackColor = true;
			this->room10->Click += gcnew System::EventHandler(this, &MainWindow::room9_Click);
			// 
			// room9
			// 
			this->room9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->room9->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->room9->Location = System::Drawing::Point(754, 210);
			this->room9->Name = L"room9";
			this->room9->Size = System::Drawing::Size(140, 140);
			this->room9->TabIndex = 52;
			this->room9->Text = L"9";
			this->room9->UseVisualStyleBackColor = true;
			this->room9->Click += gcnew System::EventHandler(this, &MainWindow::room9_Click);
			// 
			// room8
			// 
			this->room8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->room8->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->room8->Location = System::Drawing::Point(577, 210);
			this->room8->Name = L"room8";
			this->room8->Size = System::Drawing::Size(140, 140);
			this->room8->TabIndex = 51;
			this->room8->Text = L"8";
			this->room8->UseVisualStyleBackColor = true;
			this->room8->Click += gcnew System::EventHandler(this, &MainWindow::room9_Click);
			// 
			// room7
			// 
			this->room7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->room7->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->room7->Location = System::Drawing::Point(400, 210);
			this->room7->Name = L"room7";
			this->room7->Size = System::Drawing::Size(140, 140);
			this->room7->TabIndex = 50;
			this->room7->Text = L"7";
			this->room7->UseVisualStyleBackColor = true;
			this->room7->Click += gcnew System::EventHandler(this, &MainWindow::room9_Click);
			// 
			// room6
			// 
			this->room6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->room6->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->room6->Location = System::Drawing::Point(223, 210);
			this->room6->Name = L"room6";
			this->room6->Size = System::Drawing::Size(140, 140);
			this->room6->TabIndex = 49;
			this->room6->Text = L"6";
			this->room6->UseVisualStyleBackColor = true;
			this->room6->Click += gcnew System::EventHandler(this, &MainWindow::room9_Click);
			// 
			// room5
			// 
			this->room5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->room5->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->room5->Location = System::Drawing::Point(931, 30);
			this->room5->Name = L"room5";
			this->room5->Size = System::Drawing::Size(140, 140);
			this->room5->TabIndex = 48;
			this->room5->Text = L"5";
			this->room5->UseVisualStyleBackColor = true;
			this->room5->Click += gcnew System::EventHandler(this, &MainWindow::room9_Click);
			// 
			// room4
			// 
			this->room4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->room4->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->room4->Location = System::Drawing::Point(754, 30);
			this->room4->Name = L"room4";
			this->room4->Size = System::Drawing::Size(140, 140);
			this->room4->TabIndex = 47;
			this->room4->Text = L"4";
			this->room4->UseVisualStyleBackColor = true;
			this->room4->Click += gcnew System::EventHandler(this, &MainWindow::room9_Click);
			// 
			// room3
			// 
			this->room3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->room3->BackColor = System::Drawing::Color::Transparent;
			this->room3->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->room3->Location = System::Drawing::Point(577, 30);
			this->room3->Name = L"room3";
			this->room3->Size = System::Drawing::Size(140, 140);
			this->room3->TabIndex = 46;
			this->room3->Text = L"3";
			this->room3->UseVisualStyleBackColor = false;
			this->room3->Click += gcnew System::EventHandler(this, &MainWindow::room9_Click);
			// 
			// room2
			// 
			this->room2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->room2->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->room2->Location = System::Drawing::Point(400, 30);
			this->room2->Name = L"room2";
			this->room2->Size = System::Drawing::Size(140, 140);
			this->room2->TabIndex = 45;
			this->room2->Text = L"2";
			this->room2->UseVisualStyleBackColor = true;
			this->room2->Click += gcnew System::EventHandler(this, &MainWindow::room9_Click);
			// 
			// room1
			// 
			this->room1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->room1->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->room1->Location = System::Drawing::Point(223, 30);
			this->room1->Name = L"room1";
			this->room1->Size = System::Drawing::Size(140, 140);
			this->room1->TabIndex = 44;
			this->room1->Text = L"1";
			this->room1->UseVisualStyleBackColor = true;
			this->room1->Click += gcnew System::EventHandler(this, &MainWindow::room9_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Constantia", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(1114, 30);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(278, 500);
			this->textBox1->TabIndex = 43;
			this->textBox1->Tag = L"";
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->monthCalendar1->BackColor = System::Drawing::Color::RoyalBlue;
			this->monthCalendar1->CalendarDimensions = System::Drawing::Size(1, 2);
			this->monthCalendar1->Font = (gcnew System::Drawing::Font(L"Constantia", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->monthCalendar1->Location = System::Drawing::Point(9, 13);
			this->monthCalendar1->MaxSelectionCount = 1;
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 59;
			this->monthCalendar1->TitleBackColor = System::Drawing::Color::Maroon;
			this->monthCalendar1->TitleForeColor = System::Drawing::Color::Maroon;
			this->monthCalendar1->TrailingForeColor = System::Drawing::Color::Maroon;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &MainWindow::monthCalendar1_DateChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightGray;
			this->panel1->Controls->Add(this->Guests);
			this->panel1->Controls->Add(this->main);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Location = System::Drawing::Point(-6, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1430, 71);
			this->panel1->TabIndex = 1;
			// 
			// Guests
			// 
			this->Guests->Dock = System::Windows::Forms::DockStyle::Left;
			this->Guests->FlatAppearance->BorderSize = 0;
			this->Guests->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Guests->Font = (gcnew System::Drawing::Font(L"Constantia", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Guests->Location = System::Drawing::Point(338, 0);
			this->Guests->Name = L"Guests";
			this->Guests->Size = System::Drawing::Size(338, 71);
			this->Guests->TabIndex = 3;
			this->Guests->Text = L"Поселення";
			this->Guests->UseVisualStyleBackColor = true;
			this->Guests->Click += gcnew System::EventHandler(this, &MainWindow::Guests_Click_1);
			this->Guests->MouseEnter += gcnew System::EventHandler(this, &MainWindow::Guests_Click);
			this->Guests->MouseLeave += gcnew System::EventHandler(this, &MainWindow::Guests_MouseLeave);
			// 
			// main
			// 
			this->main->Dock = System::Windows::Forms::DockStyle::Left;
			this->main->FlatAppearance->BorderSize = 0;
			this->main->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->main->Font = (gcnew System::Drawing::Font(L"Constantia", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->main->Location = System::Drawing::Point(0, 0);
			this->main->Name = L"main";
			this->main->Size = System::Drawing::Size(338, 71);
			this->main->TabIndex = 0;
			this->main->Text = L"Головна";
			this->main->UseVisualStyleBackColor = true;
			this->main->Click += gcnew System::EventHandler(this, &MainWindow::main_Click_1);
			this->main->MouseEnter += gcnew System::EventHandler(this, &MainWindow::main_Click);
			this->main->MouseLeave += gcnew System::EventHandler(this, &MainWindow::main_MouseLeave);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->Location = System::Drawing::Point(1131, 14);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(283, 41);
			this->button2->TabIndex = 41;
			this->button2->Text = L"Панель адміністратора";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click_1);
			// 
			// MainWindow
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1419, 630);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->Activated += gcnew System::EventHandler(this, &MainWindow::MainWindow_Activated);
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		

	System::Drawing::Color GetColor(DataBase::Date datearrival, DataBase::Date datedepart, System::DateTime date) {
			System::DateTime datedep(datedepart.year, datedepart.month, datedepart.day);
			System::DateTime datearr(datearrival.year, datearrival.month, datearrival.day);
			if (date <= datedep && date >= datearr) {
				return System::Drawing::Color::IndianRed;
			}
			else if (date < datearr) {
				return System::Drawing::Color::PaleGoldenrod;
			}
			else {
				return System::Drawing::Color::PaleGreen;
			}

		}

	void WriteData(DataGridView^ dataGridView) {
		dataGridView->Rows->Clear();
		std::vector<DataBase::Record> records = DataBase::GetInfo();
		int size = records.size();
		if (!size)
			return;
		std::string ** data = new std::string*[size];
		for (int i = 0; i < size; i++) {
			data[i] = new std::string [5];
		}
		for (int i = 0; i < size; i++) {
			data[i][0] = std::to_string(records[i].room);
			data[i][1] = records[i].Name;
			data[i][2] = records[i].phone;
			data[i][3] = records[i].arrival.GetDate_str();
			data[i][4] = records[i].departure.GetDate_str();
		}
		
		dataGridView->ColumnCount = 5;
		dataGridView->Columns[0]->Name = "Номер";
		dataGridView->Columns[1]->Name = "Ім'я";
		dataGridView->Columns[2]->Name = "Телефон";
		dataGridView->Columns[3]->Name = "Дата прибуття";
		dataGridView->Columns[4]->Name = "Дата відправлення";
		
		dataGridView->Rows->Add(size);
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < 5; j++) {
				dataGridView->Rows[i]->Cells[j]->Value = gcnew String(data[i][j].c_str());
			}
		}	
	}

	void WriteButtons() {
		{
		room1->BackColor = System::Drawing::Color::PaleGreen;
		room2->BackColor = System::Drawing::Color::PaleGreen;
		room3->BackColor = System::Drawing::Color::PaleGreen;
		room4->BackColor = System::Drawing::Color::PaleGreen;
		room5->BackColor = System::Drawing::Color::PaleGreen;
		room6->BackColor = System::Drawing::Color::PaleGreen;
		room7->BackColor = System::Drawing::Color::PaleGreen;
		room8->BackColor = System::Drawing::Color::PaleGreen;
		room9->BackColor = System::Drawing::Color::PaleGreen;
		room10->BackColor = System::Drawing::Color::PaleGreen;
		room11->BackColor = System::Drawing::Color::PaleGreen;
		room12->BackColor = System::Drawing::Color::PaleGreen;
		room13->BackColor = System::Drawing::Color::PaleGreen;
		room14->BackColor = System::Drawing::Color::PaleGreen;
		room15->BackColor = System::Drawing::Color::PaleGreen;
		}


		std::vector<Admin::Room> rooms = Info::GetInfo();
		std::vector<DataBase::Record> guests = DataBase::GetInfo();
		for (int i = 0; i < rooms.size(); i++) {
			// Даємо сірий колір недоступним кімнатам
			if (rooms[i].nonavaible) {
				switch (rooms[i].number) {
				case 1:
					room1->BackColor = System::Drawing::Color::DarkGray;
					break;
				case 2:
					room2->BackColor = System::Drawing::Color::DarkGray;
					break;
				case 3:
					room3->BackColor = System::Drawing::Color::DarkGray;
					break;
				case 4:
					room4->BackColor = System::Drawing::Color::DarkGray;
					break;
				case 5:
					room5->BackColor = System::Drawing::Color::DarkGray;
					break;
				case 6:
					room6->BackColor = System::Drawing::Color::DarkGray;
					break;
				case 7:
					room7->BackColor = System::Drawing::Color::DarkGray;
					break;
				case 8:
					room8->BackColor = System::Drawing::Color::DarkGray;
					break;
				case 9:
					room9->BackColor = System::Drawing::Color::DarkGray;
					break;
				case 10:
					room10->BackColor = System::Drawing::Color::DarkGray;
					break;
				case 11:
					room11->BackColor = System::Drawing::Color::DarkGray;
					break;
				case 12:
					room12->BackColor = System::Drawing::Color::DarkGray;
					break;
				case 13:
					room13->BackColor = System::Drawing::Color::DarkGray;
					break;
				case 14:
					room14->BackColor = System::Drawing::Color::DarkGray;
					break;
				case 15:
					room15->BackColor = System::Drawing::Color::DarkGray;
					break;
				}
				continue;
			}
			DataBase::Record guest;
			if (DataBase::FindGuests(rooms[i].number, guests, guest, monthCalendar1->SelectionStart)) {
				System::Drawing::Color color = GetColor(guest.arrival, guest.departure, monthCalendar1->SelectionStart);
				
				
				
				if (color == System::Drawing::Color::PaleGreen)
					continue;
				switch (rooms[i].number) {
				case 1:
					room1->BackColor = color;
					break;
				case 2:
					room2->BackColor = color;
					break;
				case 3:
					room3->BackColor = color;
					break;
				case 4:
					room4->BackColor = color;
					break;
				case 5:
					room5->BackColor = color;
					break;
				case 6:
					room6->BackColor = color;
					break;
				case 7:
					room7->BackColor = color;
					break;
				case 8:
					room8->BackColor = color;
					break;
				case 9:
					room9->BackColor = color;
					break;
				case 10:
					room10->BackColor = color;
					break;
				case 11:
					room11->BackColor = color;
					break;
				case 12:
					room12->BackColor = color;
					break;
				case 13:
					room13->BackColor = color;
					break;
				case 14:
					room14->BackColor = color;
					break;
				case 15:
					room15->BackColor = color;
					break;
				}
			}
		}
	}
	void WriteInfo() {
		std::vector<DataBase::Record> records = DataBase::GetInfo();
		textBox1->Text = "";
		
		for (int i = 0; i < records.size(); i++) {
			if (records[i].departure.day == date->tm_mday && records[i].departure.month == date->tm_mon + 1) {
				textBox1->Text += gcnew System::String(records[i].Name) + " з кімнати №" + gcnew System::String(std::to_string(records[i].room).c_str()) + " сьогодні має звільнити кімнату." + Environment::NewLine + "--------------------------------------------" + Environment::NewLine;
			}
			else if (records[i].arrival.day == date->tm_mday+1 && records[i].arrival.month == date->tm_mon + 1) {
				textBox1->Text += gcnew System::String(records[i].Name) + " прибуде завтра в кімнату №" + gcnew System::String(std::to_string(records[i].room).c_str()) + Environment::NewLine + "--------------------------------------------" + Environment::NewLine;
			}
			else if (records[i].departure.day == date->tm_mday + 1 && records[i].departure.month == date->tm_mon + 1) {
				textBox1->Text += gcnew System::String(records[i].Name) + " з кімнати №" + gcnew System::String(std::to_string(records[i].room).c_str()) + " завтра має звільнити кімнату." + Environment::NewLine + "--------------------------------------------" + Environment::NewLine;
			}
		}
	}
	private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) {	monthCalendar1->MinDate = DateTime::Now;
		std::vector<DataBase::Record> records = DataBase::GetInfo();
		for (int i = 0; i < records.size(); i++) {
			DateTime today = DateTime::Now;
			DateTime departure = DateTime(records[i].departure.year, records[i].departure.month, records[i].departure.day);
			if (today > departure) {
				DataBase::introduction(records[i], pathtoold);
				records.erase(records.begin() + i);
				i--;
			}
		}
		DataBase::introduction(records);
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	AdmPass ad;
	ad.ShowDialog();
}

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Settlement st;
	st.ShowDialog();
}

private: System::Void MainWindow_Activated(System::Object^ sender, System::EventArgs^ e) {
	
	//Малюємо кнопочки
	WriteButtons();
	WriteInfo();
	WriteData(dataGridView1);
}

private: System::Void main_Click(System::Object^ sender, System::EventArgs^ e) {
	main->BackColor = System::Drawing::Color::DarkGray;
}
private: System::Void Guests_Click(System::Object^ sender, System::EventArgs^ e) {
	Guests->BackColor = System::Drawing::Color::DarkGray;
}
private: System::Void Guests_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	Guests->BackColor = System::Drawing::Color::LightGray;
}
private: System::Void main_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	main->BackColor = System::Drawing::Color::LightGray;
}
private: System::Void main_Click_1(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectedIndex = 0;
}
private: System::Void Guests_Click_1(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectedIndex = 1;
}
private: System::Void room9_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ b;
	b = (Button^)sender;
	
	/*String^ d = sender->ToString();
	d = d[35].ToString();*/
	
	Info::date.setDate(monthCalendar1->SelectionRange->Start);
	Info::datestr = Info::date.GetDate_str();
	RoomInfo info;
	info.number = Int32::Parse(b->Text);
	if (b->BackColor == System::Drawing::Color::IndianRed) {
		info.mode = 0;
		info.status = Status::Busy;
	}
	else if (b->BackColor == System::Drawing::Color::PaleGoldenrod) {
		info.mode = 1;
		info.status = Status::Reserved;
	}
	info.ShowDialog();
}

private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	AdmPass admin;
	admin.ShowDialog();
}
private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
	WriteButtons();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	oldguests old;
	old.ShowDialog();
}
};
}