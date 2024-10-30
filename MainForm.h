#pragma once
#include "SortForm.h"
#include "EqForm.h"
#include "InfoForm.h"








namespace CourseworkAaSDrepos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonSort;
	protected:

	private: System::Windows::Forms::Button^ buttonEqConnection;
	protected:





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ buttonInfo;

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
			this->buttonSort = (gcnew System::Windows::Forms::Button());
			this->buttonEqConnection = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->buttonInfo = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonSort
			// 
			this->buttonSort->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonSort->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSort->Location = System::Drawing::Point(355, 489);
			this->buttonSort->Name = L"buttonSort";
			this->buttonSort->Size = System::Drawing::Size(135, 60);
			this->buttonSort->TabIndex = 0;
			this->buttonSort->Text = L"Сортировка";
			this->buttonSort->UseVisualStyleBackColor = true;
			this->buttonSort->Click += gcnew System::EventHandler(this, &MainForm::buttonSort_Click);
			// 
			// buttonEqConnection
			// 
			this->buttonEqConnection->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonEqConnection->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonEqConnection->Location = System::Drawing::Point(496, 489);
			this->buttonEqConnection->Name = L"buttonEqConnection";
			this->buttonEqConnection->Size = System::Drawing::Size(135, 60);
			this->buttonEqConnection->TabIndex = 1;
			this->buttonEqConnection->Text = L"Уравнение связи";
			this->buttonEqConnection->UseVisualStyleBackColor = true;
			this->buttonEqConnection->Click += gcnew System::EventHandler(this, &MainForm::buttonEqConnection_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(107, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(571, 23);
			this->label1->TabIndex = 4;
			this->label1->Text = L"МИНИСТЕРСТВО НАУКИ И ВЫСШЕГО ОБРАЗОВАНИЯ РФ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(126, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(510, 23);
			this->label2->TabIndex = 5;
			this->label2->Text = L"ФГБОУ ВО «Курганский государственный университет»";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(102, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(604, 23);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Кафедра «Программное обеспечение автоматизированных систем»";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(289, 166);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(211, 33);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Курсовая работа";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(323, 224);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(313, 23);
			this->label5->TabIndex = 8;
			this->label5->Text = L"«Алгоритмы и структуры данных»";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(169, 224);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(148, 23);
			this->label6->TabIndex = 8;
			this->label6->Text = L"по дисциплине:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(102, 274);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(358, 23);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Выполнил студент группы ИТ-0940323";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(102, 339);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(228, 23);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Проверил преподаватель";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(497, 339);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(139, 23);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Семахин А. М.";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(498, 274);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(138, 23);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Белоусов К. А.";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(324, 427);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(136, 23);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Курган 2024 г.";
			// 
			// buttonInfo
			// 
			this->buttonInfo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonInfo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonInfo->Location = System::Drawing::Point(637, 489);
			this->buttonInfo->Name = L"buttonInfo";
			this->buttonInfo->Size = System::Drawing::Size(135, 60);
			this->buttonInfo->TabIndex = 2;
			this->buttonInfo->Text = L"О программе";
			this->buttonInfo->UseVisualStyleBackColor = true;
			this->buttonInfo->Click += gcnew System::EventHandler(this, &MainForm::buttonInfo_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonInfo);
			this->Controls->Add(this->buttonEqConnection);
			this->Controls->Add(this->buttonSort);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->HelpButton = true;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Курсовая работа";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void buttonSort_Click(System::Object^ sender, System::EventArgs^ e) 
{
	System::Windows::Forms::DialogResult dr;
	SortForm^ newDlg = gcnew SortForm();
Sortm:
	dr = newDlg->ShowDialog();
	if (dr == System::Windows::Forms::DialogResult::OK)
		return;
	else
	{
		MessageBox::Show("Ошибка закрытия окна");
		goto Sortm;
	}




}
private: System::Void buttonEqConnection_Click(System::Object^ sender, System::EventArgs^ e) 
{
	System::Windows::Forms::DialogResult dr;
	EqForm^ newDlg = gcnew EqForm();
Eqm:
	dr = newDlg->ShowDialog();
	if (dr == System::Windows::Forms::DialogResult::OK)
		return;
	else
	{
		MessageBox::Show("Ошибка закрытия окна");
		goto Eqm;
	}
}
private: System::Void buttonInfo_Click(System::Object^ sender, System::EventArgs^ e) 
{
	System::Windows::Forms::DialogResult dr;
	InfoForm^ newDlg = gcnew InfoForm();
Infom:
	dr = newDlg->ShowDialog();
	if (dr == System::Windows::Forms::DialogResult::OK)
		return;
	else
	{
		MessageBox::Show("Ошибка закрытия окна");
		goto Infom;
	}
}
private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Close();
}
};
}
