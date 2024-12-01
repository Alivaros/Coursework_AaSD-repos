#pragma once
#include "MHKForm.h"
#include <cstdlib>
#include <ctime>
#include "math.h"
#include <stdlib.h>
#include <algorithm>
namespace CourseworkAaSDrepos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace std;
	/// <summary>
	/// Сводка для EqForm
	/// </summary>
	public ref class EqForm : public System::Windows::Forms::Form
	{
	public:
		EqForm(void)
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
		~EqForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ sample_size;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;



	private: System::Windows::Forms::DataGridView^ dataGridViewSourceStaticData;
	private: System::Windows::Forms::TextBox^ CHy_N;
	private: System::Windows::Forms::TextBox^ CHy_X_0;

























	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ CHy_Y;










	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ Coefficient_A_0;




	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TextBox^ CHy_X_Y;
	private: System::Windows::Forms::TextBox^ CHy_X_1;


	private: System::Windows::Forms::TextBox^ CHy_X_X;











	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::TextBox^ Coefficient_A_1;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::TextBox^ EqA_0;



	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::TextBox^ EqA_1;




	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ Coefficient_correlation;
	private: System::Windows::Forms::TextBox^ Coefficient_determination;



	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ Coefficient_elsatic;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ Coefficient_beta;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ buttonCalc;
	private: System::Windows::Forms::Button^ buttonClear;
	private: System::Windows::Forms::Button^ buttonMHK;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Number;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Time;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ SizeMassiv;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ x_x;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ x_y;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ y_y;


























	protected:

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
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EqForm::typeid));
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->sample_size = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataGridViewSourceStaticData = (gcnew System::Windows::Forms::DataGridView());
			this->CHy_N = (gcnew System::Windows::Forms::TextBox());
			this->CHy_X_0 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->CHy_X_Y = (gcnew System::Windows::Forms::TextBox());
			this->CHy_X_1 = (gcnew System::Windows::Forms::TextBox());
			this->CHy_X_X = (gcnew System::Windows::Forms::TextBox());
			this->CHy_Y = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Coefficient_A_0 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->Coefficient_A_1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->EqA_0 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->EqA_1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Coefficient_correlation = (gcnew System::Windows::Forms::TextBox());
			this->Coefficient_determination = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Coefficient_elsatic = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Coefficient_beta = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonCalc = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->buttonMHK = (gcnew System::Windows::Forms::Button());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->Number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SizeMassiv = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x_x = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x_y = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->y_y = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSourceStaticData))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonExit
			// 
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExit->Location = System::Drawing::Point(15, 114);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(91, 37);
			this->buttonExit->TabIndex = 0;
			this->buttonExit->Text = L"Назад";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &EqForm::buttonExit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(141, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(530, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Оценивание коэффициентов уравнения связи";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(8, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(140, 21);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Объём выборки";
			// 
			// sample_size
			// 
			this->sample_size->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sample_size->Location = System::Drawing::Point(154, 49);
			this->sample_size->Name = L"sample_size";
			this->sample_size->Size = System::Drawing::Size(100, 29);
			this->sample_size->TabIndex = 3;
			this->sample_size->TextChanged += gcnew System::EventHandler(this, &EqForm::sample_size_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(414, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(369, 21);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Точечный график и график уравнения связи";
			// 
			// chart
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart->Legends->Add(legend1);
			this->chart->Location = System::Drawing::Point(472, 82);
			this->chart->Name = L"chart";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Color = System::Drawing::Color::Orange;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			series1->YValuesPerPoint = 6;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series2->Color = System::Drawing::Color::Red;
			series2->Legend = L"Legend1";
			series2->Name = L"Series2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series3->Color = System::Drawing::Color::Blue;
			series3->Legend = L"Legend1";
			series3->Name = L"Series3";
			this->chart->Series->Add(series1);
			this->chart->Series->Add(series2);
			this->chart->Series->Add(series3);
			this->chart->Size = System::Drawing::Size(300, 300);
			this->chart->TabIndex = 5;
			this->chart->Text = L"chart1";
			// 
			// dataGridViewSourceStaticData
			// 
			this->dataGridViewSourceStaticData->AllowUserToAddRows = false;
			this->dataGridViewSourceStaticData->AllowUserToDeleteRows = false;
			this->dataGridViewSourceStaticData->AllowUserToResizeColumns = false;
			this->dataGridViewSourceStaticData->AllowUserToResizeRows = false;
			this->dataGridViewSourceStaticData->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridViewSourceStaticData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSourceStaticData->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Number,
					this->Time, this->SizeMassiv, this->x_x, this->x_y, this->y_y
			});
			this->dataGridViewSourceStaticData->Location = System::Drawing::Point(12, 111);
			this->dataGridViewSourceStaticData->Name = L"dataGridViewSourceStaticData";
			this->dataGridViewSourceStaticData->ReadOnly = true;
			this->dataGridViewSourceStaticData->RowHeadersVisible = false;
			this->dataGridViewSourceStaticData->RowTemplate->Height = 30;
			this->dataGridViewSourceStaticData->Size = System::Drawing::Size(454, 153);
			this->dataGridViewSourceStaticData->TabIndex = 7;
			this->dataGridViewSourceStaticData->TabStop = false;
			// 
			// CHy_N
			// 
			this->CHy_N->BackColor = System::Drawing::SystemColors::Window;
			this->CHy_N->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CHy_N->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CHy_N->Location = System::Drawing::Point(4, 24);
			this->CHy_N->Name = L"CHy_N";
			this->CHy_N->ReadOnly = true;
			this->CHy_N->Size = System::Drawing::Size(84, 32);
			this->CHy_N->TabIndex = 9;
			this->CHy_N->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// CHy_X_0
			// 
			this->CHy_X_0->BackColor = System::Drawing::SystemColors::Window;
			this->CHy_X_0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CHy_X_0->Location = System::Drawing::Point(152, 24);
			this->CHy_X_0->Name = L"CHy_X_0";
			this->CHy_X_0->ReadOnly = true;
			this->CHy_X_0->Size = System::Drawing::Size(136, 32);
			this->CHy_X_0->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 87);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(256, 21);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Исходные статические данные";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->CHy_X_Y);
			this->groupBox1->Controls->Add(this->CHy_X_1);
			this->groupBox1->Controls->Add(this->CHy_X_X);
			this->groupBox1->Controls->Add(this->CHy_Y);
			this->groupBox1->Controls->Add(this->CHy_N);
			this->groupBox1->Controls->Add(this->CHy_X_0);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Controls->Add(this->pictureBox3);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->pictureBox4);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 270);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(454, 116);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Система нормальных уравнений";
			// 
			// CHy_X_Y
			// 
			this->CHy_X_Y->BackColor = System::Drawing::SystemColors::Window;
			this->CHy_X_Y->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CHy_X_Y->Location = System::Drawing::Point(347, 67);
			this->CHy_X_Y->Name = L"CHy_X_Y";
			this->CHy_X_Y->ReadOnly = true;
			this->CHy_X_Y->Size = System::Drawing::Size(98, 32);
			this->CHy_X_Y->TabIndex = 24;
			// 
			// CHy_X_1
			// 
			this->CHy_X_1->BackColor = System::Drawing::SystemColors::Window;
			this->CHy_X_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CHy_X_1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CHy_X_1->Location = System::Drawing::Point(4, 67);
			this->CHy_X_1->Name = L"CHy_X_1";
			this->CHy_X_1->ReadOnly = true;
			this->CHy_X_1->Size = System::Drawing::Size(84, 32);
			this->CHy_X_1->TabIndex = 22;
			this->CHy_X_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// CHy_X_X
			// 
			this->CHy_X_X->BackColor = System::Drawing::SystemColors::Window;
			this->CHy_X_X->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CHy_X_X->Location = System::Drawing::Point(152, 67);
			this->CHy_X_X->Name = L"CHy_X_X";
			this->CHy_X_X->ReadOnly = true;
			this->CHy_X_X->Size = System::Drawing::Size(136, 32);
			this->CHy_X_X->TabIndex = 23;
			// 
			// CHy_Y
			// 
			this->CHy_Y->BackColor = System::Drawing::SystemColors::Window;
			this->CHy_Y->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CHy_Y->Location = System::Drawing::Point(347, 25);
			this->CHy_Y->Name = L"CHy_Y";
			this->CHy_Y->ReadOnly = true;
			this->CHy_Y->Size = System::Drawing::Size(98, 32);
			this->CHy_Y->TabIndex = 20;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(274, 64);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(88, 38);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 25;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(275, 21);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(88, 38);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 20;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(86, 62);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(71, 43);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 26;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(86, 19);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(71, 43);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 21;
			this->pictureBox4->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(8, 395);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(271, 21);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Коэффициенты уравнения связи";
			// 
			// Coefficient_A_0
			// 
			this->Coefficient_A_0->BackColor = System::Drawing::SystemColors::Window;
			this->Coefficient_A_0->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Coefficient_A_0->Location = System::Drawing::Point(351, 391);
			this->Coefficient_A_0->Name = L"Coefficient_A_0";
			this->Coefficient_A_0->ReadOnly = true;
			this->Coefficient_A_0->Size = System::Drawing::Size(111, 32);
			this->Coefficient_A_0->TabIndex = 19;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(277, 389);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(73, 38);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 27;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(468, 389);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(80, 38);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 28;
			this->pictureBox6->TabStop = false;
			// 
			// Coefficient_A_1
			// 
			this->Coefficient_A_1->BackColor = System::Drawing::SystemColors::Window;
			this->Coefficient_A_1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Coefficient_A_1->Location = System::Drawing::Point(544, 391);
			this->Coefficient_A_1->Name = L"Coefficient_A_1";
			this->Coefficient_A_1->ReadOnly = true;
			this->Coefficient_A_1->Size = System::Drawing::Size(116, 32);
			this->Coefficient_A_1->TabIndex = 29;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(8, 433);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(144, 21);
			this->label6->TabIndex = 30;
			this->label6->Text = L"Уравнение связи";
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::White;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(154, 428);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(73, 38);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 32;
			this->pictureBox7->TabStop = false;
			// 
			// EqA_0
			// 
			this->EqA_0->BackColor = System::Drawing::SystemColors::Window;
			this->EqA_0->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EqA_0->Location = System::Drawing::Point(220, 430);
			this->EqA_0->Name = L"EqA_0";
			this->EqA_0->ReadOnly = true;
			this->EqA_0->Size = System::Drawing::Size(100, 32);
			this->EqA_0->TabIndex = 31;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::White;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(303, 427);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(73, 38);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 33;
			this->pictureBox8->TabStop = false;
			// 
			// EqA_1
			// 
			this->EqA_1->BackColor = System::Drawing::SystemColors::Window;
			this->EqA_1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EqA_1->Location = System::Drawing::Point(359, 430);
			this->EqA_1->Name = L"EqA_1";
			this->EqA_1->ReadOnly = true;
			this->EqA_1->Size = System::Drawing::Size(100, 32);
			this->EqA_1->TabIndex = 34;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::White;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(441, 427);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(73, 38);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 35;
			this->pictureBox9->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(12, 477);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(219, 21);
			this->label7->TabIndex = 36;
			this->label7->Text = L"Коэффициент корреляции";
			// 
			// Coefficient_correlation
			// 
			this->Coefficient_correlation->BackColor = System::Drawing::SystemColors::Window;
			this->Coefficient_correlation->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Coefficient_correlation->Location = System::Drawing::Point(228, 470);
			this->Coefficient_correlation->Name = L"Coefficient_correlation";
			this->Coefficient_correlation->ReadOnly = true;
			this->Coefficient_correlation->Size = System::Drawing::Size(100, 32);
			this->Coefficient_correlation->TabIndex = 37;
			// 
			// Coefficient_determination
			// 
			this->Coefficient_determination->BackColor = System::Drawing::SystemColors::Window;
			this->Coefficient_determination->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Coefficient_determination->Location = System::Drawing::Point(569, 466);
			this->Coefficient_determination->Name = L"Coefficient_determination";
			this->Coefficient_determination->ReadOnly = true;
			this->Coefficient_determination->Size = System::Drawing::Size(96, 32);
			this->Coefficient_determination->TabIndex = 39;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(327, 475);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(239, 21);
			this->label8->TabIndex = 38;
			this->label8->Text = L"Коэффициент детерминации";
			// 
			// Coefficient_elsatic
			// 
			this->Coefficient_elsatic->BackColor = System::Drawing::SystemColors::Window;
			this->Coefficient_elsatic->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Coefficient_elsatic->Location = System::Drawing::Point(252, 508);
			this->Coefficient_elsatic->Name = L"Coefficient_elsatic";
			this->Coefficient_elsatic->ReadOnly = true;
			this->Coefficient_elsatic->Size = System::Drawing::Size(100, 32);
			this->Coefficient_elsatic->TabIndex = 41;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(12, 517);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(234, 21);
			this->label9->TabIndex = 40;
			this->label9->Text = L"Коэффициент эластичности";
			// 
			// Coefficient_beta
			// 
			this->Coefficient_beta->BackColor = System::Drawing::SystemColors::Window;
			this->Coefficient_beta->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Coefficient_beta->Location = System::Drawing::Point(568, 508);
			this->Coefficient_beta->Name = L"Coefficient_beta";
			this->Coefficient_beta->ReadOnly = true;
			this->Coefficient_beta->Size = System::Drawing::Size(96, 32);
			this->Coefficient_beta->TabIndex = 43;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(410, 517);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(156, 21);
			this->label10->TabIndex = 42;
			this->label10->Text = L"бета-коэффициент";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->buttonCalc);
			this->groupBox2->Controls->Add(this->buttonClear);
			this->groupBox2->Controls->Add(this->buttonExit);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(666, 391);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(117, 158);
			this->groupBox2->TabIndex = 44;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Панель управления";
			// 
			// buttonCalc
			// 
			this->buttonCalc->Enabled = false;
			this->buttonCalc->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCalc->Location = System::Drawing::Point(15, 28);
			this->buttonCalc->Name = L"buttonCalc";
			this->buttonCalc->Size = System::Drawing::Size(91, 37);
			this->buttonCalc->TabIndex = 2;
			this->buttonCalc->Text = L"Расчёт";
			this->buttonCalc->UseVisualStyleBackColor = true;
			this->buttonCalc->Click += gcnew System::EventHandler(this, &EqForm::buttonCalc_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClear->Location = System::Drawing::Point(15, 71);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(91, 37);
			this->buttonClear->TabIndex = 1;
			this->buttonClear->Text = L"Очистка";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &EqForm::buttonClear_Click);
			// 
			// buttonMHK
			// 
			this->buttonMHK->BackColor = System::Drawing::SystemColors::Control;
			this->buttonMHK->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMHK->Location = System::Drawing::Point(572, 428);
			this->buttonMHK->Name = L"buttonMHK";
			this->buttonMHK->Size = System::Drawing::Size(88, 32);
			this->buttonMHK->TabIndex = 45;
			this->buttonMHK->Text = L"МНК";
			this->buttonMHK->UseVisualStyleBackColor = false;
			this->buttonMHK->Click += gcnew System::EventHandler(this, &EqForm::buttonMHK_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::White;
			this->pictureBox10->Location = System::Drawing::Point(154, 427);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(360, 39);
			this->pictureBox10->TabIndex = 46;
			this->pictureBox10->TabStop = false;
			// 
			// Number
			// 
			this->Number->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Number->HeaderText = L"Номер";
			this->Number->Name = L"Number";
			this->Number->ReadOnly = true;
			this->Number->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Time
			// 
			this->Time->HeaderText = L"Время, у";
			this->Time->Name = L"Time";
			this->Time->ReadOnly = true;
			this->Time->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// SizeMassiv
			// 
			this->SizeMassiv->HeaderText = L"Размер массива, x";
			this->SizeMassiv->Name = L"SizeMassiv";
			this->SizeMassiv->ReadOnly = true;
			this->SizeMassiv->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->SizeMassiv->Width = 75;
			// 
			// x_x
			// 
			this->x_x->HeaderText = L"x*x";
			this->x_x->Name = L"x_x";
			this->x_x->ReadOnly = true;
			this->x_x->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// x_y
			// 
			this->x_y->HeaderText = L"x*y";
			this->x_y->Name = L"x_y";
			this->x_y->ReadOnly = true;
			this->x_y->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->x_y->Width = 70;
			// 
			// y_y
			// 
			this->y_y->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->y_y->HeaderText = L"y*y";
			this->y_y->Name = L"y_y";
			this->y_y->ReadOnly = true;
			this->y_y->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// EqForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->ControlBox = false;
			this->Controls->Add(this->dataGridViewSourceStaticData);
			this->Controls->Add(this->buttonMHK);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->Coefficient_beta);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->Coefficient_elsatic);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Coefficient_determination);
			this->Controls->Add(this->Coefficient_correlation);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->EqA_1);
			this->Controls->Add(this->EqA_0);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Coefficient_A_1);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->Coefficient_A_0);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->chart);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->sample_size);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pictureBox10);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"EqForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Уравнение связи";
			this->Load += gcnew System::EventHandler(this, &EqForm::EqForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSourceStaticData))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	System::Void checkfields() 
	{
		Regex^ regex = gcnew Regex("^[0-9]*$");
		this->buttonCalc->Enabled =
			regex->IsMatch(this->sample_size->Text) &&
			this->sample_size->Text != "1" &&
			this->sample_size->Text != "0" &&
			this->sample_size->Text != " " &&
			this->sample_size->Text != "";
	}
		

	const int RUN = 64;
	void init_rand() 
	{ 
		srand((unsigned)time(0));
	}
	void get_rand(double N, double A, double B, double C, double* arr)
	{
		for (int i = 0; i < N; i++)
		{
			arr[i] = get_Bradford(A, B, C);
		}
	}
	int gen_rand()
	{
		int start = 9000;
		int end = 50000;
		return rand() % (end - start + 1) + start;
	}
	double get_Bradford(double A, double B, double C) {
		int r = rand();
		double u = (double)r / ((double)RAND_MAX + 1);
		double par = ((B - A) * (pow((C + 1), u) - 1)) / C;
		double y = A + par;
		return y;
	}
	void insertionSort(double* arr, int left, int right)
	{
		for (int i = left + 1; i <= right; i++)
		{
			double temp = arr[i];
			int j = i - 1;
			while (j >= left && arr[j] > temp)
			{
				
				arr[j + 1] = arr[j];
				j--;
				
			}
			
			arr[j + 1] = temp;
		
		}
	}

	// Функция слияния объединяет отсортированные участки
	void merge(double* arr, int l, int m, int r)
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
		
			if (left[i] <= right[j]) 
			{
				arr[k] = left[i];
				i++;
			}
			else {
				arr[k] = right[j];
				j++;
			}
		
			k++;
		}

		// Копируем ост элементы
		// из левого массива, если есть
		while (i < len1) 
		{
			arr[k] = left[i];
			k++;
			i++;
		
		}

		// Копируем ост элементы
		// из правого массива, если есть
		while (j < len2) 
		{
			arr[k] = right[j];
			k++;
			j++;
		
		}
	}

	//  Итеративная функция Timsoft для сортировки
	// массива	[0...n-1] (похожа на сортировку слиянием)
	void TimSort(double* arr, int n)
	{
		
		// Сортируем отдельные подмассивы размера RUN
		for (int i = 0; i < n; i += RUN)
			insertionSort(arr, i, min((i + RUN - 1), (n - 1)));

		// Начинаем слияние с размера RUN 
		// Сливаем до 
		// формирования размера 64, затем 128, 256 
		// так далее .... 
		for (int size = RUN; size < n; size = 2 * size) 
		{

			// выбираем начальную точку
			// левого подмассива. Мы собираемся
			// сливать
			// arr[left..left+size-1] 
			// и arr[left+size, left+2*size-1] 
			// После каждого слияния мы
			// увеличиваем left на 2*size 
			for (int left = 0; left < n; left += 2 * size) 
			{

				// Находим конечную точку
				// левого подмассива 
				// mid+1 - начальная точка 
				// правого подмассив
				int mid = left + size - 1;
				int right = min((left + 2 * size - 1), (n - 1));

				// сливаем подмассивы arr[left.....mid] & 
				// arr[mid+1....right]
				if (mid < right)
					merge(arr, left, mid, right);
			}
		}
		
	}

	void fillDataGridView(int size, unsigned int* t, int* N)
	{
		this->dataGridViewSourceStaticData->Rows->Clear();

		for (int i = 0; i < size; i++)
		{
			this->dataGridViewSourceStaticData->Rows->Add();

			int rIndex = this->dataGridViewSourceStaticData->Rows->Count - 1;

			this->dataGridViewSourceStaticData->Rows[rIndex]->Cells[this->Number->Index]->Value = i + 1;
			this->dataGridViewSourceStaticData->Rows[rIndex]->Cells[this->Time->Index]->Value = t[i];
			this->dataGridViewSourceStaticData->Rows[rIndex]->Cells[this->SizeMassiv->Index]->Value = N[i];
			this->dataGridViewSourceStaticData->Rows[rIndex]->Cells[this->x_x->Index]->Value = N[i] * N[i];
			this->dataGridViewSourceStaticData->Rows[rIndex]->Cells[this->x_y->Index]->Value = N[i] * t[i];
			this->dataGridViewSourceStaticData->Rows[rIndex]->Cells[this->y_y->Index]->Value = t[i] * t[i];
		}
		
	}
	
	







private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}

private: System::Void buttonMHK_Click(System::Object^ sender, System::EventArgs^ e) 
{
	System::Windows::Forms::DialogResult dr;
	MHKForm^ newDlg = gcnew MHKForm();
MHKm:
	dr = newDlg->ShowDialog();
	if (dr == System::Windows::Forms::DialogResult::OK)
		return;
	else
	{
		MessageBox::Show("Ошибка закрытия окна");
		goto MHKm;
	}

}
private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) 
{
	chart->Series["Series1"]->Points->Clear();
	chart->Series["Series2"]->Points->Clear();
	chart->Series["Series3"]->Points->Clear();
	this->dataGridViewSourceStaticData->Rows->Clear();
	sample_size->Clear();
	CHy_N->Clear();
	CHy_X_0->Clear();
	CHy_Y->Clear();
	CHy_X_1->Clear();
	CHy_X_X->Clear();
	CHy_X_Y->Clear();
	Coefficient_A_0->Clear();
	Coefficient_A_1->Clear();
	EqA_0->Clear();
	EqA_1->Clear();
	Coefficient_correlation->Clear();
	Coefficient_elsatic->Clear();
	Coefficient_determination->Clear();
	Coefficient_beta->Clear();
	buttonCalc->Enabled = false;
	




}
private: System::Void buttonCalc_Click(System::Object^ sender, System::EventArgs^ e) {

	chart->Series["Series1"]->Points->Clear();
	chart->Series["Series2"]->Points->Clear();
	chart->Series["Series3"]->Points->Clear();
	const int size = Convert::ToInt32(this->sample_size->Text);
	const int n = size;
	unsigned int *t = new unsigned int[size];
	int *N = new int[size];
	init_rand();
	for (int i = 0; i < size; i++)
	{
		unsigned int t1 = 0, t2 = 0;
		this->dataGridViewSourceStaticData->Rows->Clear();
	
		N[i] = gen_rand();
		double A = 0.5;
		double B = 1.0;
		double C = 1.0;
		double *Massiv = new double[N[i]];
		get_rand(N[i], A, B, C, Massiv);
		t1 = clock();
		TimSort(Massiv, N[i]);
		t2 = clock();
		t[i] = t2 - t1;
		chart->Series["Series2"]->Points->AddXY(N[i], t[i]);
		
		delete[] Massiv;
	
	}
	fillDataGridView(size, t, N);

	double sumy = 0, sumx = 0, sumx_x = 0, sumx_y = 0, sumy_y = 0;
	double avg_x, avg_y, coef_elsat, coef_beta, s_x, s_y;
	double delta = 0, delta_a0 = 0, delta_a1 = 0;
	for (int i = 0; i < this->dataGridViewSourceStaticData->Rows->Count; i++) {
		if (!this->dataGridViewSourceStaticData->Rows[i]->IsNewRow) {
			if (this->dataGridViewSourceStaticData->Columns->Count > this->Time->Index && 
				this->dataGridViewSourceStaticData->Rows[i]->Cells[this->Time->Index]->Value != nullptr) {
				sumy += Convert::ToDouble(this->dataGridViewSourceStaticData->Rows[i]->Cells[this->Time->Index]->Value);
			}
			if (this->dataGridViewSourceStaticData->Columns->Count > this->SizeMassiv->Index && 
				this->dataGridViewSourceStaticData->Rows[i]->Cells[this->SizeMassiv->Index]->Value != nullptr) {
				sumx += Convert::ToDouble(this->dataGridViewSourceStaticData->Rows[i]->Cells[this->SizeMassiv->Index]->Value);
			}
			if (this->dataGridViewSourceStaticData->Columns->Count > this->x_x->Index && 
				this->dataGridViewSourceStaticData->Rows[i]->Cells[this->x_x->Index]->Value != nullptr) {
				sumx_x += Convert::ToDouble(this->dataGridViewSourceStaticData->Rows[i]->Cells[this->x_x->Index]->Value);
			}
			if (this->dataGridViewSourceStaticData->Columns->Count > this->x_y->Index && 
				this->dataGridViewSourceStaticData->Rows[i]->Cells[this->x_y->Index]->Value != nullptr) {
				sumx_y += Convert::ToDouble(this->dataGridViewSourceStaticData->Rows[i]->Cells[this->x_y->Index]->Value);
			}
			if (this->dataGridViewSourceStaticData->Columns->Count > this->y_y->Index && 
				this->dataGridViewSourceStaticData->Rows[i]->Cells[this->y_y->Index]->Value != nullptr) {
				sumy_y += Convert::ToDouble(this->dataGridViewSourceStaticData->Rows[i]->Cells[this->y_y->Index]->Value);
			}
		}
	}
	
	

	delta = (n * sumx_x) - (sumx * sumx);
	delta_a0 = (sumy * sumx_x) - (sumx * sumx_y);
	delta_a1 = (n * sumx_y) - (sumy * sumx);

	double a_0 = delta_a0 / delta;
	double a_1 = delta_a1 / delta;
	double ryx = ((n * sumx_y) - (sumx * sumy)) / (sqrt(n * sumx_x - (pow(sumx, 2))) * sqrt(n * sumy_y - (pow(sumy, 2))));
	double ryx_2 = pow(ryx, 2);
	
	avg_x = sumx / n;
	avg_y = sumy / n;

	
	double sumx_deviation = 0, sumy_deviation = 0;
	for (int i = 0; i < this->dataGridViewSourceStaticData->Rows->Count; i++)
	{
		if (!this->dataGridViewSourceStaticData->Rows[i]->IsNewRow)
		{
			if (this->dataGridViewSourceStaticData->Columns->Count > this->SizeMassiv->Index &&
				this->dataGridViewSourceStaticData->Rows[i]->Cells[this->SizeMassiv->Index]->Value != nullptr &&
				this->dataGridViewSourceStaticData->Columns->Count > this->Time->Index &&
				this->dataGridViewSourceStaticData->Rows[i]->Cells[this->Time->Index]->Value != nullptr);
		}
		double x_i = Convert::ToDouble(this->dataGridViewSourceStaticData->Rows[i]->Cells[SizeMassiv->Index]->Value);
		double y_i = Convert::ToDouble(this->dataGridViewSourceStaticData->Rows[i]->Cells[Time->Index]->Value);
		
		sumx_deviation += pow(x_i - avg_x, 2);
		sumy_deviation += pow(y_i - avg_y, 2);

	}

	s_x = sqrt(sumx_deviation/n);
	s_y = sqrt(sumy_deviation/n);

	coef_elsat = (a_1 * avg_x) / avg_y;
	coef_beta = (a_1 * s_x) / s_y;




	for (int x=9000; x<= 50000; x+=1000)
	{
		double y = a_0 + a_1 * x;
		chart->Series["Series1"]->Points->AddXY(x, y);
	}
	for (int i = 0; i < size; i++)
	{
		double y_point = a_0 + a_1 * N[i];

		chart->Series["Series3"]->Points->AddXY(N[i], y_point);
	}


	CHy_N->Text = Convert::ToString(size);
	CHy_X_0->Text = Convert::ToString(sumx);
	CHy_Y->Text = Convert::ToString(sumy);
	CHy_X_1->Text = Convert::ToString(sumx);
	CHy_X_X->Text = Convert::ToString(sumx_x);
	CHy_X_Y->Text = Convert::ToString(sumx_y);
	Coefficient_A_0->Text = Convert::ToString(a_0);
	Coefficient_A_1->Text = Convert::ToString(a_1);
	EqA_0->Text = Convert::ToString(a_0);
	EqA_1->Text = Convert::ToString(a_1);
	Coefficient_correlation->Text = String::Format("{0:F3}", ryx);
	Coefficient_determination->Text = String::Format("{0:F3}", ryx_2 );
	Coefficient_beta->Text = Convert::ToString(coef_beta);
	Coefficient_elsatic->Text = Convert::ToString(coef_elsat);










	Console::WriteLine("Сумма Time: " + sumy);
	Console::WriteLine("Сумма SizeMassiv: " + sumx);
	Console::WriteLine("Сумма x_x: " + sumx_x);
	Console::WriteLine("Сумма x_y: " + sumx_y);
	Console::WriteLine("delta: " + delta);
	Console::WriteLine("delta_0: " + delta_a0);
	Console::WriteLine("delta_1: " + delta_a1);
	Console::WriteLine("a_0: " + a_0);
	Console::WriteLine("a_1: " + a_1);
	Console::WriteLine("Коэф корреляции " + ryx);
	Console::WriteLine("Коэф б " + coef_beta);
	Console::WriteLine("Коэф э " + coef_elsat);








	delete[] t;
	delete[] N;
	

}
private: System::Void sample_size_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
	checkfields();
}
private: System::Void EqForm_Load(System::Object^ sender, System::EventArgs^ e) 
{
	buttonCalc->Enabled = false;
}
};
}
