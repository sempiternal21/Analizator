#pragma once
#include <string>
#include <windows.h>
#include <string>
#include <vector>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <vcclr.h>

#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>
#include <fstream>
#include <Windows.h>
using namespace msclr::interop;
using namespace System;
namespace Curs {
	static int countDirs = 0;
	static int countFiles = 0;
	static double outSize=0;
	static unsigned long long size = 0;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonStart;

	private: System::Windows::Forms::Label^ lb1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ lb11;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lb2;
	private: System::Windows::Forms::Label^ lb3;



	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TabPage^ tabPage4;

















	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;


	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Button^ button6;


	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;


	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ListView^ listView2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton9;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::ListView^ listView3;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::ListBox^ listBox4;
private: System::Windows::Forms::ColumnHeader^ columnHeader5;
private: System::Windows::Forms::ColumnHeader^ columnHeader6;

































	protected:

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
		void GetFilesR(std::vector<std::string>& result, std::vector<std::string>& dirs, const char* path, bool withVl);
		void GetFilesR3(std::vector<std::string>& result, std::vector<std::string>& date, const char* path, String^ d, String^ y, String^ m, bool withVl);
		void GetFilesR2(std::vector<std::string>& result, const char* path, std::vector<long long>& siz, bool withVl);
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->lb1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->lb11 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lb2 = (gcnew System::Windows::Forms::Label());
			this->lb3 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(13, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(452, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Программа анализирует выбранную директорию";
			// 
			// buttonStart
			// 
			this->buttonStart->Location = System::Drawing::Point(177, 101);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(169, 36);
			this->buttonStart->TabIndex = 1;
			this->buttonStart->Text = L"Старт";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Visible = false;
			this->buttonStart->Click += gcnew System::EventHandler(this, &MyForm::buttonStart_Click);
			// 
			// lb1
			// 
			this->lb1->AutoSize = true;
			this->lb1->Location = System::Drawing::Point(127, 167);
			this->lb1->Name = L"lb1";
			this->lb1->Size = System::Drawing::Size(0, 13);
			this->lb1->TabIndex = 3;
			this->lb1->Click += gcnew System::EventHandler(this, &MyForm::lb1_Click);
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(3, 31);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(376, 290);
			this->listBox1->TabIndex = 4;
			this->listBox1->Visible = false;
			// 
			// lb11
			// 
			this->lb11->AutoSize = true;
			this->lb11->Location = System::Drawing::Point(14, 167);
			this->lb11->Name = L"lb11";
			this->lb11->Size = System::Drawing::Size(105, 13);
			this->lb11->TabIndex = 5;
			this->lb11->Text = L"Количество папок: ";
			this->lb11->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 190);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Количество файлов: ";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 213);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Размер в байтах: ";
			this->label3->Visible = false;
			// 
			// lb2
			// 
			this->lb2->AutoSize = true;
			this->lb2->Location = System::Drawing::Point(127, 190);
			this->lb2->Name = L"lb2";
			this->lb2->Size = System::Drawing::Size(0, 13);
			this->lb2->TabIndex = 8;
			this->lb2->Click += gcnew System::EventHandler(this, &MyForm::lb2_Click);
			// 
			// lb3
			// 
			this->lb3->AutoSize = true;
			this->lb3->Location = System::Drawing::Point(127, 213);
			this->lb3->Name = L"lb3";
			this->lb3->Size = System::Drawing::Size(0, 13);
			this->lb3->TabIndex = 9;
			this->lb3->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(15, 33);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(40, 17);
			this->radioButton1->TabIndex = 13;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Да";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(15, 55);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(44, 17);
			this->radioButton2->TabIndex = 14;
			this->radioButton2->Text = L"Нет";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 32);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(39, 17);
			this->radioButton3->TabIndex = 15;
			this->radioButton3->Text = L"КБ";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Checked = true;
			this->radioButton4->Location = System::Drawing::Point(6, 56);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(41, 17);
			this->radioButton4->TabIndex = 16;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"МБ";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(6, 80);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(38, 17);
			this->radioButton5->TabIndex = 17;
			this->radioButton5->Text = L"ГБ";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(874, 657);
			this->tabControl1->TabIndex = 19;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->splitContainer1);
			this->tabPage1->Controls->Add(this->linkLabel1);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->lb3);
			this->tabPage1->Controls->Add(this->lb2);
			this->tabPage1->Controls->Add(this->lb1);
			this->tabPage1->Controls->Add(this->buttonStart);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->lb11);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(866, 631);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Обзор директорий";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(182, 64);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 27;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(17, 54);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(158, 23);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Выбрать директорию...";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->splitContainer1->Location = System::Drawing::Point(28, 244);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->label6);
			this->splitContainer1->Panel1->Controls->Add(this->listBox1);
			this->splitContainer1->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::splitContainer1_Panel1_Paint);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->listBox3);
			this->splitContainer1->Panel2->Controls->Add(this->label10);
			this->splitContainer1->Size = System::Drawing::Size(811, 334);
			this->splitContainer1->SplitterDistance = 387;
			this->splitContainer1->TabIndex = 25;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(145, 4);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 24);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Файлы:";
			this->label6->Visible = false;
			// 
			// listBox3
			// 
			this->listBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(7, 31);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(400, 290);
			this->listBox3->TabIndex = 21;
			this->listBox3->Visible = false;
			this->listBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox3_SelectedIndexChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(164, 4);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(69, 24);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Папки:";
			this->label10->Visible = false;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->LinkColor = System::Drawing::Color::Silver;
			this->linkLabel1->Location = System::Drawing::Point(-44, 136);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(6961, 13);
			this->linkLabel1->TabIndex = 24;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = resources->GetString(L"linkLabel1.Text");
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Location = System::Drawing::Point(704, 21);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(114, 112);
			this->groupBox2->TabIndex = 20;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Указывать размер в:";
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(522, 21);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(130, 112);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"С учетом вложенных директорий:";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox4);
			this->tabPage2->Controls->Add(this->listView2);
			this->tabPage2->Controls->Add(this->listBox2);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->groupBox3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(866, 631);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Самый большой файл";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &MyForm::tabPage2_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox4->Controls->Add(this->radioButton6);
			this->groupBox4->Controls->Add(this->radioButton7);
			this->groupBox4->Location = System::Drawing::Point(656, 74);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(130, 95);
			this->groupBox4->TabIndex = 40;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"С учетом вложенных директорий:";
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(15, 55);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(44, 17);
			this->radioButton6->TabIndex = 14;
			this->radioButton6->Text = L"Нет";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Checked = true;
			this->radioButton7->Location = System::Drawing::Point(15, 33);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(40, 17);
			this->radioButton7->TabIndex = 13;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Да";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// listView2
			// 
			this->listView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader3, this->columnHeader4 });
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(15, 235);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(590, 225);
			this->listView2->TabIndex = 39;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			this->listView2->Visible = false;
			this->listView2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listView2_SelectedIndexChanged);
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Имя файла";
			this->columnHeader3->Width = 500;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Размер КБ";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->columnHeader4->Width = 82;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(15, 235);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(531, 316);
			this->listBox2->TabIndex = 32;
			this->listBox2->Visible = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(15, 175);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(169, 36);
			this->button4->TabIndex = 31;
			this->button4->Text = L"Старт";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(180, 55);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 30;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(15, 45);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(158, 23);
			this->button3->TabIndex = 29;
			this->button3->Text = L"Выбрать директорию...";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(11, 12);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(848, 24);
			this->label14->TabIndex = 28;
			this->label14->Text = L"Программа ищет заданное количество файлов, размер которых больше заданного размер"
				L"а.";
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->numericUpDown1);
			this->groupBox3->Controls->Add(this->comboBox1);
			this->groupBox3->Controls->Add(this->numericUpDown2);
			this->groupBox3->Location = System::Drawing::Point(15, 74);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(590, 95);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 30);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(311, 13);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Введите количество файлов, которое необходимо вывести:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 55);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(209, 13);
			this->label9->TabIndex = 5;
			this->label9->Text = L"Введите минимальный размер файлов:";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(323, 55);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Байт", L"КБ", L"МБ", L"ГБ" });
			this->comboBox1->Location = System::Drawing::Point(449, 55);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->Text = L"МБ";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(323, 23);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 20);
			this->numericUpDown2->TabIndex = 3;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown2_ValueChanged);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->groupBox6);
			this->tabPage3->Controls->Add(this->listView1);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->groupBox5);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(866, 631);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Самый новый файл";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Click += gcnew System::EventHandler(this, &MyForm::tabPage3_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox6->Controls->Add(this->radioButton8);
			this->groupBox6->Controls->Add(this->radioButton9);
			this->groupBox6->Location = System::Drawing::Point(640, 78);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(130, 95);
			this->groupBox6->TabIndex = 41;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"С учетом вложенных директорий:";
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(15, 55);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(44, 17);
			this->radioButton8->TabIndex = 14;
			this->radioButton8->Text = L"Нет";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Checked = true;
			this->radioButton9->Location = System::Drawing::Point(15, 33);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(40, 17);
			this->radioButton9->TabIndex = 13;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"Да";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// listView1
			// 
			this->listView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->columnHeader2 });
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(3, 237);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(590, 225);
			this->listView1->TabIndex = 38;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->Visible = false;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Имя файла";
			this->columnHeader1->Width = 500;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Дата изменения";
			this->columnHeader2->Width = 200;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(6, 179);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(158, 35);
			this->button6->TabIndex = 33;
			this->button6->Text = L"Go";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(171, 48);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 13);
			this->label7->TabIndex = 32;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(6, 38);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(158, 23);
			this->button5->TabIndex = 31;
			this->button5->Text = L"Выбрать директорию...";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox5->Controls->Add(this->label12);
			this->groupBox5->Controls->Add(this->label13);
			this->groupBox5->Controls->Add(this->dateTimePicker1);
			this->groupBox5->Controls->Add(this->numericUpDown4);
			this->groupBox5->Location = System::Drawing::Point(6, 78);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(590, 95);
			this->groupBox5->TabIndex = 7;
			this->groupBox5->TabStop = false;
			this->groupBox5->Visible = false;
			this->groupBox5->Enter += gcnew System::EventHandler(this, &MyForm::groupBox5_Enter);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 30);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(311, 13);
			this->label12->TabIndex = 4;
			this->label12->Text = L"Введите количество файлов, которое необходимо вывести:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 55);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(173, 13);
			this->label13->TabIndex = 5;
			this->label13->Text = L"Введите начальную дату поиска:";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"";
			this->dateTimePicker1->Location = System::Drawing::Point(323, 55);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 0;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker1_ValueChanged);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(323, 23);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(120, 20);
			this->numericUpDown4->TabIndex = 3;
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown4_ValueChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 12);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(516, 13);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Программа находит заданное количество файлов, которые были созданы после некоторо"
				L"го числа.";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->listBox4);
			this->tabPage4->Controls->Add(this->button9);
			this->tabPage4->Controls->Add(this->listView3);
			this->tabPage4->Controls->Add(this->label17);
			this->tabPage4->Controls->Add(this->label16);
			this->tabPage4->Controls->Add(this->button8);
			this->tabPage4->Controls->Add(this->numericUpDown3);
			this->tabPage4->Controls->Add(this->button7);
			this->tabPage4->Controls->Add(this->textBox1);
			this->tabPage4->Controls->Add(this->label15);
			this->tabPage4->Controls->Add(this->button1);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(866, 631);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Поиск дубликатов";
			this->tabPage4->UseVisualStyleBackColor = true;
			this->tabPage4->Click += gcnew System::EventHandler(this, &MyForm::tabPage4_Click);
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(94, 330);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(120, 95);
			this->listBox4->TabIndex = 10;
			this->listBox4->Visible = false;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(733, 118);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 9;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Visible = false;
			// 
			// listView3
			// 
			this->listView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader5, this->columnHeader6 });
			this->listView3->HideSelection = false;
			this->listView3->Location = System::Drawing::Point(23, 176);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(716, 137);
			this->listView3->TabIndex = 8;
			this->listView3->UseCompatibleStateImageBehavior = false;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Имя файла";
			this->columnHeader5->Width = 500;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Размер в байтах";
			this->columnHeader6->Width = 100;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(753, 99);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(41, 13);
			this->label17->TabIndex = 7;
			this->label17->Text = L"label17";
			this->label17->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(750, 61);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(41, 13);
			this->label16->TabIndex = 6;
			this->label16->Text = L"label16";
			this->label16->Visible = false;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(159, 122);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(128, 23);
			this->button8->TabIndex = 5;
			this->button8->Text = L"Поиск по размеру";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click_1);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(23, 122);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { -1530494976, 232830, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 20);
			this->numericUpDown3->TabIndex = 4;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(159, 81);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(128, 23);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Поиск по имени";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(23, 84);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(202, 33);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 13);
			this->label15->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(23, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(162, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Выбрать директорию...";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(897, 681);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Work File System";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->ResumeLayout(false);

		}
		void sort(std::vector<std::string>& v1, std::vector<long long>& v2);
		
#pragma endregion
private: System::Void buttonStart_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void lb1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lb2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
}
private: System::Void splitContainer1_Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox5_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e);

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   
private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	   
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) ;
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void vScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	
}
private: System::Void numericUpDown4_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	if (numericUpDown4->Value != 0) {
		button6->Visible = true;
	}
	else {
		button6->Visible = false;
	}
}
private: System::Void listView2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ text1 = folderBrowserDialog1->SelectedPath;
		label15->Text = text1;
		//System::Diagnostics::Debug::Write(324325325);
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	listView3->Items->Clear();
	label16->Text = textBox1->Text;
	String^ text1;
	text1 = label15->Text;
	std::wstring abc = marshal_as < std::wstring >(text1);
	std::string s2(abc.begin(), abc.end());

	std::vector < std::string > files;
	std::vector < long long > siz;
	GetFilesR2(files, s2.c_str(), siz, true);
	int k = 0;
	listView3->View = View::Details;
	//Allow the user to change text
	listView3->LabelEdit = true;
	listView3->GridLines = true;
	for (int i = 0; i < files.size(); i++) {
		System::String^ ss = gcnew System::String(files[i].c_str());
		System::String^ managed = label16->Text;
		std::string unmanaged = msclr::interop::marshal_as<std::string>(managed);
		
		unsigned int position1 = 0;

		for (int j = 0; j < files[i].size(); ++j) {

			if (files[i].at(j) == '\\') {

				position1 = j;

			}

		}
		System::Diagnostics::Debug::WriteLine(gcnew System::String(unmanaged.c_str()));
		System::Diagnostics::Debug::WriteLine(gcnew System::String(files[i].substr(position1++).c_str()));
		if (strcmp(unmanaged.c_str(), files[i].substr(position1).c_str()) == 0) {
			listView3->Items->Add(ss);
			std::string sx = std::to_string(siz[i]);
			ss = gcnew System::String(sx.c_str());
			listView3->Items[k++]->SubItems->Add(ss);
		}
	}
}
private: System::Void button8_Click_1(System::Object^ sender, System::EventArgs^ e) {
	listView3->Items->Clear();
	label17->Text = numericUpDown3->Text;
	label16->Text = textBox1->Text;
	String^ text1;
	text1 = label15->Text;
	std::wstring abc = marshal_as < std::wstring >(text1);
	std::string s2(abc.begin(), abc.end());

	std::vector < std::string > files;
	std::vector < long long > siz;
	GetFilesR2(files, s2.c_str(), siz, true);
	int k = 0;
	listView3->View = View::Details;
	//Allow the user to change text
	listView3->LabelEdit = true;
	listView3->GridLines = true;
	for (int i = 0; i < files.size(); i++) {
		System::String^ ss = gcnew System::String(files[i].c_str());
		System::String^ managed = label17->Text;
		std::string unmanaged = msclr::interop::marshal_as<std::string>(managed);
		System::Diagnostics::Debug::WriteLine(ss);
		System::Diagnostics::Debug::WriteLine(managed);
		std::string sx = std::to_string(siz[i]);
		if (strcmp(unmanaged.c_str(), sx.c_str()) == 0) {
			listView3->Items->Add(ss);
			std::string sx = std::to_string(siz[i]);
			ss = gcnew System::String(sx.c_str());
			listView3->Items[k++]->SubItems->Add(ss);
		}

	}
}
private: System::Void tabPage4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
