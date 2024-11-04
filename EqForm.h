#pragma once
#include "MHKForm.h"


namespace CourseworkAaSDrepos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataGridView^ dataGridViewSource;
	private: System::Windows::Forms::TextBox^ CHy_A_00;
	private: System::Windows::Forms::TextBox^ CHy_A_01;















	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Time;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SizeMassiv;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ x_x;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ x_y;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ CHy_ASUMM_0001;








	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ Coefficient_A_0;




	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TextBox^ CHy_ASUMM_1011;

	private: System::Windows::Forms::TextBox^ CHy_A_10;
	private: System::Windows::Forms::TextBox^ CHy_A_11;






	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::TextBox^ Coefficient_A_1;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ buttonCalc;
	private: System::Windows::Forms::Button^ buttonClear;
	private: System::Windows::Forms::Button^ buttonMHK;
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
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataGridViewSource = (gcnew System::Windows::Forms::DataGridView());
			this->Number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SizeMassiv = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x_x = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x_y = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CHy_A_00 = (gcnew System::Windows::Forms::TextBox());
			this->CHy_A_01 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->CHy_ASUMM_1011 = (gcnew System::Windows::Forms::TextBox());
			this->CHy_A_10 = (gcnew System::Windows::Forms::TextBox());
			this->CHy_A_11 = (gcnew System::Windows::Forms::TextBox());
			this->CHy_ASUMM_0001 = (gcnew System::Windows::Forms::TextBox());
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
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonCalc = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->buttonMHK = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSource))->BeginInit();
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
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(397, 57);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(369, 21);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Точечный график и график уравнения связи";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(472, 82);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			series1->YValuesPerPoint = 6;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series2->Legend = L"Legend1";
			series2->Name = L"Series2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series3->Legend = L"Legend1";
			series3->Name = L"Series3";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(300, 300);
			this->chart1->TabIndex = 5;
			this->chart1->Text = L"chart1";
			// 
			// dataGridViewSource
			// 
			this->dataGridViewSource->AllowUserToAddRows = false;
			this->dataGridViewSource->AllowUserToDeleteRows = false;
			this->dataGridViewSource->AllowUserToResizeColumns = false;
			this->dataGridViewSource->AllowUserToResizeRows = false;
			this->dataGridViewSource->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridViewSource->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSource->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Number,
					this->Time, this->SizeMassiv, this->x_x, this->x_y
			});
			this->dataGridViewSource->Location = System::Drawing::Point(12, 111);
			this->dataGridViewSource->Name = L"dataGridViewSource";
			this->dataGridViewSource->ReadOnly = true;
			this->dataGridViewSource->RowHeadersVisible = false;
			this->dataGridViewSource->RowTemplate->Height = 30;
			this->dataGridViewSource->Size = System::Drawing::Size(454, 153);
			this->dataGridViewSource->TabIndex = 7;
			this->dataGridViewSource->TabStop = false;
			// 
			// Number
			// 
			this->Number->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Number->HeaderText = L"Номер";
			this->Number->Name = L"Number";
			this->Number->ReadOnly = true;
			// 
			// Time
			// 
			this->Time->HeaderText = L"Время, у";
			this->Time->Name = L"Time";
			this->Time->ReadOnly = true;
			// 
			// SizeMassiv
			// 
			this->SizeMassiv->HeaderText = L"Размер массива, x";
			this->SizeMassiv->Name = L"SizeMassiv";
			this->SizeMassiv->ReadOnly = true;
			// 
			// x_x
			// 
			this->x_x->HeaderText = L"x*x";
			this->x_x->Name = L"x_x";
			this->x_x->ReadOnly = true;
			// 
			// x_y
			// 
			this->x_y->HeaderText = L"x*y";
			this->x_y->Name = L"x_y";
			this->x_y->ReadOnly = true;
			// 
			// CHy_A_00
			// 
			this->CHy_A_00->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CHy_A_00->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CHy_A_00->Location = System::Drawing::Point(4, 24);
			this->CHy_A_00->Name = L"CHy_A_00";
			this->CHy_A_00->Size = System::Drawing::Size(84, 32);
			this->CHy_A_00->TabIndex = 9;
			// 
			// CHy_A_01
			// 
			this->CHy_A_01->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CHy_A_01->Location = System::Drawing::Point(152, 24);
			this->CHy_A_01->Name = L"CHy_A_01";
			this->CHy_A_01->Size = System::Drawing::Size(100, 32);
			this->CHy_A_01->TabIndex = 11;
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
			this->groupBox1->Controls->Add(this->CHy_ASUMM_1011);
			this->groupBox1->Controls->Add(this->CHy_A_10);
			this->groupBox1->Controls->Add(this->CHy_A_11);
			this->groupBox1->Controls->Add(this->CHy_ASUMM_0001);
			this->groupBox1->Controls->Add(this->CHy_A_00);
			this->groupBox1->Controls->Add(this->CHy_A_01);
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
			// CHy_ASUMM_1011
			// 
			this->CHy_ASUMM_1011->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CHy_ASUMM_1011->Location = System::Drawing::Point(314, 67);
			this->CHy_ASUMM_1011->Name = L"CHy_ASUMM_1011";
			this->CHy_ASUMM_1011->Size = System::Drawing::Size(100, 32);
			this->CHy_ASUMM_1011->TabIndex = 24;
			// 
			// CHy_A_10
			// 
			this->CHy_A_10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CHy_A_10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CHy_A_10->Location = System::Drawing::Point(4, 67);
			this->CHy_A_10->Name = L"CHy_A_10";
			this->CHy_A_10->Size = System::Drawing::Size(84, 32);
			this->CHy_A_10->TabIndex = 22;
			// 
			// CHy_A_11
			// 
			this->CHy_A_11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CHy_A_11->Location = System::Drawing::Point(152, 67);
			this->CHy_A_11->Name = L"CHy_A_11";
			this->CHy_A_11->Size = System::Drawing::Size(100, 32);
			this->CHy_A_11->TabIndex = 23;
			// 
			// CHy_ASUMM_0001
			// 
			this->CHy_ASUMM_0001->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CHy_ASUMM_0001->Location = System::Drawing::Point(314, 25);
			this->CHy_ASUMM_0001->Name = L"CHy_ASUMM_0001";
			this->CHy_ASUMM_0001->Size = System::Drawing::Size(100, 32);
			this->CHy_ASUMM_0001->TabIndex = 20;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(234, 64);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(88, 38);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 25;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(235, 21);
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
			this->Coefficient_A_0->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Coefficient_A_0->Location = System::Drawing::Point(351, 391);
			this->Coefficient_A_0->Name = L"Coefficient_A_0";
			this->Coefficient_A_0->Size = System::Drawing::Size(100, 32);
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
			this->pictureBox6->Location = System::Drawing::Point(484, 389);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(80, 38);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 28;
			this->pictureBox6->TabStop = false;
			// 
			// Coefficient_A_1
			// 
			this->Coefficient_A_1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Coefficient_A_1->Location = System::Drawing::Point(560, 391);
			this->Coefficient_A_1->Name = L"Coefficient_A_1";
			this->Coefficient_A_1->Size = System::Drawing::Size(100, 32);
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
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(154, 428);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(73, 38);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 32;
			this->pictureBox7->TabStop = false;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(220, 430);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 32);
			this->textBox9->TabIndex = 31;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(303, 427);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(73, 38);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 33;
			this->pictureBox8->TabStop = false;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox11->Location = System::Drawing::Point(359, 430);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 32);
			this->textBox11->TabIndex = 34;
			// 
			// pictureBox9
			// 
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
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox12->Location = System::Drawing::Point(228, 470);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 32);
			this->textBox12->TabIndex = 37;
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox13->Location = System::Drawing::Point(573, 466);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(96, 32);
			this->textBox13->TabIndex = 39;
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
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox14->Location = System::Drawing::Point(252, 508);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 32);
			this->textBox14->TabIndex = 41;
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
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox15->Location = System::Drawing::Point(572, 508);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(96, 32);
			this->textBox15->TabIndex = 43;
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
			this->buttonCalc->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCalc->Location = System::Drawing::Point(15, 28);
			this->buttonCalc->Name = L"buttonCalc";
			this->buttonCalc->Size = System::Drawing::Size(91, 37);
			this->buttonCalc->TabIndex = 2;
			this->buttonCalc->Text = L"Расчёт";
			this->buttonCalc->UseVisualStyleBackColor = true;
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
			// EqForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->ControlBox = false;
			this->Controls->Add(this->buttonMHK);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Coefficient_A_1);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->Coefficient_A_0);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataGridViewSource);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->sample_size);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->label8);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"EqForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Уравнение связи";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSource))->EndInit();
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
