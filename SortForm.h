#pragma once
#include "math.h"
#include <stdlib.h>
#include <ctime>
#include <algorithm>


namespace CourseworkAaSDrepos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;
	using namespace std;

	/// <summary>
	/// Сводка для SortForm
	/// </summary>
	public ref class SortForm : public System::Windows::Forms::Form
	{
	public:
		SortForm(void)
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
		~SortForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBoxC;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBoxB;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBoxA;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBoxN;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dataGridViewSource;


	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ textBoxPermutation;
	private: System::Windows::Forms::TextBox^ textBoxCompare;
	private: System::Windows::Forms::TextBox^ textBoxTime;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ buttonSort;
	private: System::Windows::Forms::Button^ buttonClear;


	private: System::Windows::Forms::DataGridView^ dataGridViewSorted;



	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NumberSource;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ElementSource;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NumberSorted;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ElementSorted;







	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SortForm::typeid));
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxC = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxB = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxA = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxN = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewSource = (gcnew System::Windows::Forms::DataGridView());
			this->NumberSource = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ElementSource = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxPermutation = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCompare = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTime = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSort = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->dataGridViewSorted = (gcnew System::Windows::Forms::DataGridView());
			this->NumberSorted = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ElementSorted = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSource))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSorted))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonExit
			// 
			this->buttonExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExit->Location = System::Drawing::Point(268, 14);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(180, 48);
			this->buttonExit->TabIndex = 0;
			this->buttonExit->Text = L"Назад";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &SortForm::buttonExit_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(6, 47);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(286, 145);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(6, 224);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(286, 62);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 265);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(303, 292);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Вероятностный закон распределения";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(68, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(161, 21);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Обратная функция";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(5, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(298, 21);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Функция распределения Брэдфорда";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox2->Controls->Add(this->textBoxC);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->textBoxB);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBoxA);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBoxN);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(12, 34);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(303, 225);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Входные данные";
			// 
			// textBoxC
			// 
			this->textBoxC->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxC->Location = System::Drawing::Point(68, 190);
			this->textBoxC->Name = L"textBoxC";
			this->textBoxC->Size = System::Drawing::Size(100, 29);
			this->textBoxC->TabIndex = 9;
			this->textBoxC->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxC->TextChanged += gcnew System::EventHandler(this, &SortForm::textBoxN_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(13, 190);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(26, 29);
			this->textBox7->TabIndex = 8;
			this->textBox7->TabStop = false;
			this->textBox7->Text = L" C";
			// 
			// textBoxB
			// 
			this->textBoxB->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxB->Location = System::Drawing::Point(68, 155);
			this->textBoxB->Name = L"textBoxB";
			this->textBoxB->Size = System::Drawing::Size(100, 29);
			this->textBoxB->TabIndex = 7;
			this->textBoxB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxB->TextChanged += gcnew System::EventHandler(this, &SortForm::textBoxN_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(13, 155);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(26, 29);
			this->textBox5->TabIndex = 6;
			this->textBox5->TabStop = false;
			this->textBox5->Text = L" B";
			// 
			// textBoxA
			// 
			this->textBoxA->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxA->Location = System::Drawing::Point(68, 120);
			this->textBoxA->Name = L"textBoxA";
			this->textBoxA->Size = System::Drawing::Size(100, 29);
			this->textBoxA->TabIndex = 5;
			this->textBoxA->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxA->TextChanged += gcnew System::EventHandler(this, &SortForm::textBoxN_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(13, 120);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(26, 29);
			this->textBox3->TabIndex = 4;
			this->textBox3->TabStop = false;
			this->textBox3->Text = L" A";
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(13, 50);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(26, 29);
			this->textBox2->TabIndex = 3;
			this->textBox2->TabStop = false;
			this->textBox2->Text = L" n";
			// 
			// textBoxN
			// 
			this->textBoxN->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxN->Location = System::Drawing::Point(68, 50);
			this->textBoxN->Name = L"textBoxN";
			this->textBoxN->Size = System::Drawing::Size(100, 29);
			this->textBoxN->TabIndex = 2;
			this->textBoxN->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxN->TextChanged += gcnew System::EventHandler(this, &SortForm::textBoxN_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(289, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Коэффициенты обратной функции";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(262, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Количество элементов массива";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Control;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(259, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(243, 31);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Сортировка данных";
			// 
			// dataGridViewSource
			// 
			this->dataGridViewSource->AllowUserToAddRows = false;
			this->dataGridViewSource->AllowUserToDeleteRows = false;
			this->dataGridViewSource->AllowUserToResizeColumns = false;
			this->dataGridViewSource->AllowUserToResizeRows = false;
			this->dataGridViewSource->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridViewSource->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSource->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->NumberSource,
					this->ElementSource
			});
			this->dataGridViewSource->Location = System::Drawing::Point(319, 58);
			this->dataGridViewSource->Name = L"dataGridViewSource";
			this->dataGridViewSource->ReadOnly = true;
			this->dataGridViewSource->RowHeadersVisible = false;
			this->dataGridViewSource->RowTemplate->Height = 30;
			this->dataGridViewSource->Size = System::Drawing::Size(228, 309);
			this->dataGridViewSource->TabIndex = 6;
			this->dataGridViewSource->TabStop = false;
			// 
			// NumberSource
			// 
			this->NumberSource->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->NumberSource->HeaderText = L"Номер";
			this->NumberSource->Name = L"NumberSource";
			this->NumberSource->ReadOnly = true;
			this->NumberSource->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// ElementSource
			// 
			this->ElementSource->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ElementSource->HeaderText = L"Элемент";
			this->ElementSource->Name = L"ElementSource";
			this->ElementSource->ReadOnly = true;
			this->ElementSource->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox3->Controls->Add(this->textBoxPermutation);
			this->groupBox3->Controls->Add(this->textBoxCompare);
			this->groupBox3->Controls->Add(this->textBoxTime);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Location = System::Drawing::Point(319, 373);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(460, 114);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Выходные данные";
			// 
			// textBoxPermutation
			// 
			this->textBoxPermutation->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxPermutation->Location = System::Drawing::Point(268, 77);
			this->textBoxPermutation->Name = L"textBoxPermutation";
			this->textBoxPermutation->ReadOnly = true;
			this->textBoxPermutation->Size = System::Drawing::Size(100, 29);
			this->textBoxPermutation->TabIndex = 9;
			this->textBoxPermutation->TabStop = false;
			this->textBoxPermutation->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxCompare
			// 
			this->textBoxCompare->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxCompare->Location = System::Drawing::Point(268, 45);
			this->textBoxCompare->Name = L"textBoxCompare";
			this->textBoxCompare->ReadOnly = true;
			this->textBoxCompare->Size = System::Drawing::Size(100, 29);
			this->textBoxCompare->TabIndex = 8;
			this->textBoxCompare->TabStop = false;
			this->textBoxCompare->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxTime
			// 
			this->textBoxTime->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxTime->Location = System::Drawing::Point(268, 12);
			this->textBoxTime->Name = L"textBoxTime";
			this->textBoxTime->ReadOnly = true;
			this->textBoxTime->Size = System::Drawing::Size(100, 29);
			this->textBoxTime->TabIndex = 7;
			this->textBoxTime->TabStop = false;
			this->textBoxTime->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(34, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(161, 21);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Время сортировки";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(34, 81);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(219, 21);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Количество перестановок";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(34, 49);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(194, 21);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Количество сравнений";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox4->Controls->Add(this->buttonSort);
			this->groupBox4->Controls->Add(this->buttonClear);
			this->groupBox4->Controls->Add(this->buttonExit);
			this->groupBox4->Location = System::Drawing::Point(319, 489);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(460, 68);
			this->groupBox4->TabIndex = 9;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Панель управления";
			// 
			// buttonSort
			// 
			this->buttonSort->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonSort->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSort->Location = System::Drawing::Point(10, 14);
			this->buttonSort->Name = L"buttonSort";
			this->buttonSort->Size = System::Drawing::Size(120, 48);
			this->buttonSort->TabIndex = 2;
			this->buttonSort->Text = L"Сортировка";
			this->buttonSort->UseVisualStyleBackColor = true;
			this->buttonSort->Click += gcnew System::EventHandler(this, &SortForm::buttonSort_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClear->Location = System::Drawing::Point(136, 14);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(126, 48);
			this->buttonClear->TabIndex = 1;
			this->buttonClear->Text = L"Очистка";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &SortForm::buttonClear_Click);
			// 
			// dataGridViewSorted
			// 
			this->dataGridViewSorted->AllowUserToAddRows = false;
			this->dataGridViewSorted->AllowUserToDeleteRows = false;
			this->dataGridViewSorted->AllowUserToResizeColumns = false;
			this->dataGridViewSorted->AllowUserToResizeRows = false;
			this->dataGridViewSorted->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridViewSorted->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSorted->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->NumberSorted,
					this->ElementSorted
			});
			this->dataGridViewSorted->Location = System::Drawing::Point(551, 58);
			this->dataGridViewSorted->Name = L"dataGridViewSorted";
			this->dataGridViewSorted->ReadOnly = true;
			this->dataGridViewSorted->RowHeadersVisible = false;
			this->dataGridViewSorted->RowTemplate->Height = 30;
			this->dataGridViewSorted->Size = System::Drawing::Size(228, 309);
			this->dataGridViewSorted->TabIndex = 10;
			this->dataGridViewSorted->TabStop = false;
			// 
			// NumberSorted
			// 
			this->NumberSorted->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->NumberSorted->HeaderText = L"Номер";
			this->NumberSorted->Name = L"NumberSorted";
			this->NumberSorted->ReadOnly = true;
			this->NumberSorted->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// ElementSorted
			// 
			this->ElementSorted->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ElementSorted->HeaderText = L"Элемент";
			this->ElementSorted->Name = L"ElementSorted";
			this->ElementSorted->ReadOnly = true;
			this->ElementSorted->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::Control;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(356, 34);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(154, 21);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Исходный массив";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::Control;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(564, 34);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(203, 21);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Упорядоченный массив";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox3->Location = System::Drawing::Point(319, 34);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(460, 333);
			this->pictureBox3->TabIndex = 13;
			this->pictureBox3->TabStop = false;
			// 
			// SortForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->ControlBox = false;
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->dataGridViewSorted);
			this->Controls->Add(this->dataGridViewSource);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"SortForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Метод Timsort";
			this->Load += gcnew System::EventHandler(this, &SortForm::SortForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSource))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSorted))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	const int RUN = 64;
	System::Void checkfields()
	{
		Regex^ regex = gcnew Regex("^-?[0-9]*\\,?[0-9]*$");
		this->buttonSort->Enabled =
			regex->IsMatch(this->textBoxN->Text) &&
			regex->IsMatch(this->textBoxA->Text) &&
			regex->IsMatch(this->textBoxB->Text) &&
			regex->IsMatch(this->textBoxC->Text) &&
			this->textBoxN->Text != "" &&
			this->textBoxA->Text != "" &&
			this->textBoxB->Text != "" &&
			this->textBoxC->Text != "" &&

			this->textBoxN->Text != "-" &&
			this->textBoxC->Text != "-" &&


			this->textBoxN->Text != "," &&
			this->textBoxA->Text != "," &&
			this->textBoxB->Text != "," &&
			this->textBoxC->Text != "," &&


			this->textBoxN->Text != "0" &&
			this->textBoxA->Text != "0" &&
			this->textBoxB->Text != "0" &&
			this->textBoxC->Text != "0" &&

			this->textBoxA->Text != "0" &&
			this->textBoxB->Text != "0," &&
			this->textBoxC->Text != "0," &&

			this->textBoxC->Text != "-";

		this->buttonClear->Enabled =
			regex->IsMatch(this->textBoxN->Text) &&
			regex->IsMatch(this->textBoxA->Text) &&
			regex->IsMatch(this->textBoxB->Text) &&
			regex->IsMatch(this->textBoxC->Text) &&

			this->textBoxN->Text != "" &&
			this->textBoxA->Text != "" &&
			this->textBoxB->Text != "" &&
			this->textBoxC->Text != "";

	}

	double get_Bradford(double A, double B, double C) {
		int r = rand();
		double u = (double)r / ((double)RAND_MAX + 1);
		double par = ((B - A) * (pow((C + 1), u) - 1)) / C;
		double y = A + par;
		return y;
	}

	void get_rand(double N, double A, double B, double C, double *arr)
	{
		srand((unsigned)time(0));
		for (int i = 0; i < N; i++)
		{
			arr[i] = get_Bradford(A, B, C);
		}
	}

	void fillDataGridView(DataGridView^ dgv, int N, double* arr, String^ numberColumnName, String^ elementColumnName)
	{
		dgv->Rows->Clear();
		for (int i = 0; i < N; i++)
		{
			dgv->Rows->Add();
			dgv->Rows[i]->Cells[numberColumnName]->Value = i + 1;
			dgv->Rows[i]->Cells[elementColumnName]->Value = arr[i];
		}
	}

	void insertionSort(double *arr, int left, int right, int &c, int &s)
	{
		for (int i = left + 1; i <= right; i++) 
		{
			double temp = arr[i];
			int j = i - 1;
			while (j >= left && arr[j] > temp) 
			{
				c++;
				arr[j + 1] = arr[j];
				j--;
				s++;
			}
			c++;
			arr[j + 1] = temp;
			s++;
		}
	}

	// Функция слияния объединяет отсортированные участки
	void merge(double *arr, int l, int m, int r,int &c, int &s)
	{

		// Исходный массив разбит на две части:
		// левый и правый массив
		int len1 = m - l + 1, len2 = r - m;
		
		double* left = new double[len1];
		double* right = new double[len2];

		for (int i = 0; i < len1; i++)
			left[i] = arr[l + i];
		for (int i = 0; i < len2; i++)
			right[i] = arr[m + 1 + i];

		int i = 0, j = 0, k = l;

		// после сравнения, мы
		// объединяем два массива
		// в большой подмассив
		while (i < len1 && j < len2) 
		{
			c++;
			if (left[i] <= right[j]) {
				arr[k] = left[i];
				i++;
			}
			else {
				arr[k] = right[j];
				j++;
			}
			s++;
			k++;
		}

		// Копируем ост элементы
		// из левого массива, если есть
		while (i < len1) {
			arr[k] = left[i];
			k++;
			i++;
			s++;
		}

		// Копируем ост элементы
		// из правого массива, если есть
		while (j < len2) {
			arr[k] = right[j];
			k++;
			j++;
			s++;
		}
	}

	//  Итеративная функция Timsoft для сортировки
	// массива	[0...n-1] (похожа на сортировку слиянием)
	void TimSort(double* arr, int n, int &c, int &s)
	{
		// Сортируем отдельные подмассивы размера RUN
		for (int i = 0; i < n; i += RUN)
			insertionSort(arr, i, min((i + RUN - 1), (n - 1)),c,s);

		// Начинаем слияние с размера RUN 
		// Сливаем до 
		// формирования размера 64, затем 128, 256 
		// м так далее .... 
		for (int size = RUN; size < n; size = 2 * size) {

			// выбираем начальную точку
			// левого подмассива. Мы собираемся
			// сливать
			// arr[left..left+size-1] 
			// и arr[left+size, left+2*size-1] 
			// После каждого слияния мы
			// увеличиваем left на 2*size 
			for (int left = 0; left < n; left += 2 * size) {

				// Находим конечную точку
				// левого подмассива 
				// mid+1 - начальная точка 
				// правого подмассив
				int mid = left + size - 1;
				int right = min((left + 2 * size - 1), (n - 1));

				// сливаем подмассивы arr[left.....mid] & 
				// arr[mid+1....right]
				if (mid < right)
					merge(arr, left, mid, right,c,s);
			}
		}
	}


private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->DialogResult = System::Windows::Forms::DialogResult::OK;
	this->Close();
}

private: System::Void buttonSort_Click(System::Object^ sender, System::EventArgs^ e) 
{

	int c = 0, s = 0;
	unsigned int t1 = 0, t2 = 0, t = 0;
	this->dataGridViewSource->Rows->Clear();
	this->dataGridViewSorted->Rows->Clear();
	int N = Convert::ToInt32(this->textBoxN->Text);
	double A = Convert::ToDouble(this->textBoxA->Text);
	double B = Convert::ToDouble(this->textBoxB->Text);
	double C = Convert::ToDouble(this->textBoxC->Text);
	double* Massiv = new double[N];
	get_rand(N, A, B, C, Massiv);
	fillDataGridView(this->dataGridViewSource, N, Massiv, "NumberSource", "ElementSource");
	t1 = clock();
	TimSort(Massiv, N, c,s);
	t2 = clock();
	t = t2-t1;
	fillDataGridView(this->dataGridViewSorted, N, Massiv, "NumberSorted", "ElementSorted");
	textBoxTime->Text = t.ToString();
	textBoxCompare->Text = c.ToString();
	textBoxPermutation->Text = s.ToString();

	
	
	
}
private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBoxN->Clear();
	textBoxA->Clear();
	textBoxB->Clear();
	textBoxC->Clear();
	textBoxTime->Clear();
	textBoxCompare->Clear();
	textBoxPermutation->Clear();

	this->dataGridViewSource->Rows->Clear();
	this->dataGridViewSorted->Rows->Clear();
}
private: System::Void textBoxN_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
	checkfields();
}
private: System::Void SortForm_Load(System::Object^ sender, System::EventArgs^ e) 
{
	buttonSort->Enabled = false;
	buttonClear->Enabled = false;
}
};
}
