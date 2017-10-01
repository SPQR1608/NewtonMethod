#pragma once
#include <math.h>
#include <fstream>
#include <string.h>
#include <string>
#include <vector>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Threading;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System::Xml;
	using namespace System::Text;
	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::ToolStripMenuItem^  optionsToolStripMenuItem;
	public:
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;

	public:

	public:array <String ^> ^FileName = gcnew array<String ^>(1);
	
	public:int rowIndex;
	public:int cellIndex;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	public:
	public:const int Kol = 19;

	protected:

		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^  button1;



	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Label^  label2_OPT;
	private: System::Windows::Forms::TextBox^  textBox2_OPT;
	private: System::Windows::Forms::TextBox^  textBox3_OPT;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2_OPT = (gcnew System::Windows::Forms::Label());
			this->textBox2_OPT = (gcnew System::Windows::Forms::TextBox());
			this->textBox3_OPT = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(354, 307);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 42);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Рассчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(334, 278);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(182, 23);
			this->progressBar1->TabIndex = 14;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(522, 92);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(300, 416);
			this->dataGridView1->TabIndex = 15;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(708, 514);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(114, 41);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(33, 92);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowTemplate->ReadOnly = true;
			this->dataGridView2->Size = System::Drawing::Size(295, 416);
			this->dataGridView2->TabIndex = 17;
			this->dataGridView2->CellMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MyForm::dataGridView2_CellMouseClick);
			this->dataGridView2->CellMouseDoubleClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MyForm::dataGridView2_CellMouseDoubleClick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->optionsToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(853, 28);
			this->menuStrip1->TabIndex = 18;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->openToolStripMenuItem });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(44, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(114, 24);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// optionsToolStripMenuItem
			// 
			this->optionsToolStripMenuItem->Name = L"optionsToolStripMenuItem";
			this->optionsToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->optionsToolStripMenuItem->Text = L"Options";
			this->optionsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::optionsToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(45, 24);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(33, 514);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 19;
			this->textBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyUp);
			// 
			// label2_OPT
			// 
			this->label2_OPT->Location = System::Drawing::Point(0, 0);
			this->label2_OPT->Name = L"label2_OPT";
			this->label2_OPT->Size = System::Drawing::Size(100, 23);
			this->label2_OPT->TabIndex = 0;
			// 
			// textBox2_OPT
			// 
			this->textBox2_OPT->Location = System::Drawing::Point(0, 0);
			this->textBox2_OPT->Name = L"textBox2_OPT";
			this->textBox2_OPT->Size = System::Drawing::Size(100, 20);
			this->textBox2_OPT->TabIndex = 0;
			// 
			// textBox3_OPT
			// 
			this->textBox3_OPT->Location = System::Drawing::Point(0, 0);
			this->textBox3_OPT->Name = L"textBox3_OPT";
			this->textBox3_OPT->Size = System::Drawing::Size(100, 20);
			this->textBox3_OPT->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(522, 513);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 42);
			this->button2->TabIndex = 20;
			this->button2->Text = L"График";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(55, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(232, 52);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Значения коэффициента трения и скорости";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(536, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(274, 62);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Значения кинетических характеристик коэффициента трения";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(853, 566);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"FRICTION";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 button2->Enabled = false;
				 button3->Enabled = false;
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
	}

			 double function1(double a, double b, double u, double v)
			 {
				 return 0.34*exp(-v*b) - 0.34*a*exp(-v*b)+0.34*a-u;
			 }

			 double function2(double a, double b, double u, double v)
			 {
				 return 0.34*exp(-v*b) - 0.34*a*exp(-v*b) + 0.34*a - u;
			 }

			 double func1x(double a, double b, double u, double v)
			 {
				 return -0.34*exp(-v*b)+0.34;
			 }

			 double func1y(double a, double b, double u, double v)
			 {
				 return (-0.34*v)*exp(-v*b) + (0.34*v)*a*exp(-v*b);
			 }

			 double func2x(double a, double b, double u, double v)
			 {
				 return -0.34*exp(-v*b) + 0.34;
			 }

			 double func2y(double a, double b, double u, double v)
			 {
				 return (-0.34*v)*exp(-v*b) + (0.34*v)*a*exp(v*b);
			 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 int i = 1, n;
			 double dx, dy, d;
			 double a, b, a1, b1;
			 double massU[20], massV[20];
			 double massA[20], massB[20];
			 System::String ^ readFileName = gcnew System::String("");
			 
			 if (FileName[0]->Empty){
			     readFileName = "test01.xml";
			 }
			 else
			 {
				 readFileName = FileName[0];
			 }
			 
			 XmlTextReader^ reader = gcnew XmlTextReader(readFileName);
			 for (n = 0; n < Kol; n++)
			 {
				 reader->ReadToFollowing("Values");
				 reader->MoveToFirstAttribute();
				 massU[n] = Convert::ToDouble(reader->GetAttribute("u"));
				 massV[n] = Convert::ToDouble(reader->GetAttribute("v"));		
			 }
			 valFricCoeffData(massU, massV, Kol);
			 reader->Close();

			 for (n = 0; n < Kol-1; n++)
			 {
				 a = 0.4075;
				 b = 0.42375;
				 
				 for (i = 1; i <= 20000; i++){
					 a1 = a;
					 b1 = b;
					 d = func1x(a, b, massU[n], massV[n])*func2y(a, b, massU[n + 1], massV[n + 1]) - func1y(a, b, massU[n], massV[n])*func2x(a, b, massU[n+1], massV[n+1]);
					 dx = function1(a, b, massU[n], massV[n])*func2y(a, b, massU[n + 1], massV[n + 1]) - function2(a, b, massU[n + 1], massV[n + 1])*func1y(a, b, massU[n], massV[n]);
					 dy = func1x(a, b, massU[n], massV[n])*function2(a, b, massU[n + 1], massV[n + 1]) - func2x(a, b, massU[n + 1], massV[n + 1])*function1(a, b, massU[n], massV[n]);
					 a = a1 - dx / d;
					 b = b1 - dy / d;

					 if (n % 2){
						 break;
					 }
				 }
				 massA[n] = abs(a);
				 massB[n] = abs(b);
			 }
			 
			 fricCoeffData(massA, massB, Kol);	
			 button2->Enabled = true;
			 button3->Enabled = true;
	}

			 public:void fricCoeffData(double massA[20], double massB[20], int lenght)
			 {				
				 DataGridViewTextBoxColumn^ Column1 = gcnew DataGridViewTextBoxColumn();
				 DataGridViewTextBoxColumn^ Column2 = gcnew DataGridViewTextBoxColumn();


				 dataGridView1->Columns->Clear();
				 dataGridView1->AllowUserToAddRows = false;
				 dataGridView1->AllowUserToDeleteRows = false;
				 dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				 dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
					 Column1,
						 Column2
				 });			

				 dataGridView1->Rows->Add(lenght);

				 Column1->HeaderText = "A";
				 Column1->MaxInputLength = 24;
				 Column1->Name = "Column1";
				 Column1->ReadOnly = true;
				 Column1->Width = 120;

				 Column2->HeaderText = "B";
				 Column2->MaxInputLength = 24;
				 Column2->Name = "Column2";
				 Column2->ReadOnly = true;
				 Column2->Width = 120;

				 dataGridView1->EditMode = DataGridViewEditMode::EditOnKeystroke;

				 dataGridView1->Rows->Add(lenght);

				 for (int i = 0; i < 2; i++){
					 for (int j = 0; j < lenght-1; j++)
					 {
						 this->progressBar1->Maximum = lenght-2;
						 progressBar1->Value = j;
						 if (i == 0)
							 dataGridView1->Rows[j]->Cells[i]->Value = Convert::ToString(Math::Round(massA[j], 3));

						 if (i == 1)
							 dataGridView1->Rows[j]->Cells[i]->Value = Convert::ToString(Math::Round(massB[j], 3));
					 }
				 }
			 }

public:void valFricCoeffData(double massU[20], double massV[20], int lenght)
{
		   DataGridViewTextBoxColumn^ Column1 = gcnew DataGridViewTextBoxColumn();
		   DataGridViewTextBoxColumn^ Column2 = gcnew DataGridViewTextBoxColumn();


		   dataGridView2->Columns->Clear();
		   dataGridView2->AllowUserToAddRows = false;
		   dataGridView2->AllowUserToDeleteRows = false;
		   dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		   dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
			   Column1,
				   Column2
		   });

		   dataGridView2->Rows->Add(lenght);

		   Column1->HeaderText = "u";
		   Column1->MaxInputLength = 24;
		   Column1->Name = "Column1";
		   Column1->ReadOnly = true;
		   Column1->Width = 120;

		   Column2->HeaderText = "v";
		   Column2->MaxInputLength = 24;
		   Column2->Name = "Column2";
		   Column2->ReadOnly = true;
		   Column2->Width = 120;

		   dataGridView1->EditMode = DataGridViewEditMode::EditOnKeystroke;

		   dataGridView2->Rows->Add(lenght);

		   for (int i = 0; i < 2; i++){
			   for (int j = 0; j < lenght; j++)
			   {
				   if (i == 0)
					   dataGridView2->Rows[j]->Cells[i]->Value = Convert::ToString(Math::Round(massU[j], 3));

				   if (i == 1)
					   dataGridView2->Rows[j]->Cells[i]->Value = Convert::ToString(Math::Round(massV[j], 3));
			   }
		   }
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 for (int i = 0; i<(dataGridView1->RowCount) - 1; i++)
			 {
				 dataGridView1[1, i]->Value = "";
				 dataGridView1[0, i]->Value = "";
			 }
			 progressBar1->Value = 0;
}
private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {			
			 OpenFileDialog^ fileOpenDialog = gcnew OpenFileDialog();
			 fileOpenDialog->Filter = "XML(*.xml)|*.xml";
			 fileOpenDialog->InitialDirectory = ".";
			 fileOpenDialog->ShowDialog();
			 FileName[0] = fileOpenDialog->FileName;
			 textBox1->Text = FileName[0];			 
}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}

private: System::Void dataGridView2_CellMouseDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^  e) {
			 if (e->RowIndex >= 0 && e->ColumnIndex >= 0)
			 {
				 DataGridViewCell^ cell = this->dataGridView2->Rows[e->RowIndex]->Cells[e->ColumnIndex];
				 this->dataGridView2->CurrentCell = cell;
				 textBox1->Enabled = true;
				 textBox1->Text = cell->Value->ToString();
				 textBox1->Select();
				 button1->Enabled = false;
				 			
				 rowIndex = Convert::ToInt32(e->RowIndex);
				 cellIndex = Convert::ToInt32(e->ColumnIndex);
			 }
}

private: System::Void textBox1_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e->KeyCode != Keys::Enter){
				 dataGridView2->BeginEdit(true);
				 dataGridView2->Rows[rowIndex]->Cells[cellIndex]->Value = textBox1->Text;
			 }
			 else{
				 dataGridView2->EndEdit();
				 dataGridView2->Select();
				 button1->Enabled = true;
				 WriteChanges();
			 }
			 
}

public:void WriteChanges(){
		   System::String ^ readFileName = gcnew System::String("");
		   if (FileName[0]->Empty){
			   readFileName = "test01.xml";
		   }
		   else
		   {
			   readFileName = FileName[0];
		   }

		   XmlTextWriter^ writer = gcnew XmlTextWriter(readFileName, Encoding::UTF8);
		   writer->Formatting = Formatting::Indented;
		   writer->WriteStartDocument();
		   writer->WriteStartElement("Friction");
		   for (int i = 0; i < Kol; i++)
		   {
			   writer->WriteStartElement("Values");
			   writer->WriteAttributeString("u", "" + dataGridView2->Rows[i]->Cells[0]->Value);
			   writer->WriteAttributeString("v", "" + dataGridView2->Rows[i]->Cells[1]->Value);
			   writer->WriteEndElement();
		   }
		   writer->WriteEndElement();
		   writer->WriteEndDocument();
		   writer->Flush();
		   writer->Close();
}
private: System::Void dataGridView2_CellMouseClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^  e) {
			 if (e->RowIndex >= 0 && e->ColumnIndex >= 0)
			 {
				 textBox1->Enabled = false;
				 DataGridViewCell^ cell = this->dataGridView2->Rows[e->RowIndex]->Cells[e->ColumnIndex];
				 this->dataGridView2->CurrentCell = cell;
				 textBox1->Text = cell->Value->ToString();
			 }
}
private: System::Void optionsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form ^form = gcnew Form();
			 form->Show();

			 form->ClientSize = System::Drawing::Size(500, 300);
			 form->Name = L"Options";
			 form->Text = L"Options";

			 form->Controls->Add(label2_OPT);
			 label2_OPT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				 static_cast<System::Byte>(204)));
			 label2_OPT->AutoSize = true;
			 label2_OPT->Location = System::Drawing::Point(20, 20);
			 label2_OPT->Name = L"label2_OPT";
			 label2_OPT->Size = System::Drawing::Size(35, 13);
			 label2_OPT->TabIndex = 0;
			 label2_OPT->Text = L"Коэффициенты начального приближения";

			 form->Controls->Add(textBox2_OPT);
			 textBox2_OPT->Location = System::Drawing::Point(20, 50);
			 textBox2_OPT->Name = L"textBox2_OPT";
			 textBox2_OPT->Size = System::Drawing::Size(50, 20);
			 textBox2_OPT->TabIndex = 0;		 
}
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 double friction = 0, A = 0, B = 0, u = 0, v = 0;
			 Form^ form = gcnew Form();
			 form->Size = System::Drawing::Size(1000, 650);
			 form->Text = "График зависимости коэффициента трения от скорости";
			 form->Show();
			 Chart ^chart1 = gcnew Chart();
			 ChartArea  ^chartArea1 = gcnew ChartArea();
			 Legend  ^legend1 = gcnew Legend();
			 Series^ series1 = gcnew Series();
			 Series^ series2 = gcnew Series();
			 form->Controls->Add(chart1);

			 chart1->AccessibleRole = System::Windows::Forms::AccessibleRole::Window;
			 chartArea1->Name = L"ChartArea1";
			 chart1->ChartAreas->Add(chartArea1);
			 chart1->Dock = System::Windows::Forms::DockStyle::Fill;
			 legend1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			 legend1->Name = L"Legend1";
			 chart1->Legends->Add(legend1);
			 chart1->Location = System::Drawing::Point(0, 0);
			 chart1->Name = L"chart1";

			 series1->ChartArea = L"ChartArea1";
			 series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			 series1->Legend = L"Legend1";
			 series1->Name = L"Расчитанные данные f/v";
			 legend1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				 static_cast<System::Byte>(204)));
			 chart1->Series->Add(series1);

			 series2->ChartArea = L"ChartArea1";
			 series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			 series2->Legend = L"Legend1";
			 series2->Name = L"Экспериментальные данные f/v";
			 legend1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				 static_cast<System::Byte>(204)));
			 chart1->Series->Add(series2);

			 chart1->ChartAreas["ChartArea1"]->AxisX->Title = "V";
			 chart1->ChartAreas["ChartArea1"]->AxisX->TitleFont = gcnew System::Drawing::Font("Times New Roman", 14, FontStyle::Bold);
			 chart1->ChartAreas["ChartArea1"]->AxisX->TitleForeColor = Color::Black;

			 chart1->ChartAreas["ChartArea1"]->AxisY->Title = "f";
			 chart1->ChartAreas["ChartArea1"]->AxisY->TitleFont = gcnew System::Drawing::Font("Times New Roman", 14, FontStyle::Bold);
			 chart1->ChartAreas["ChartArea1"]->AxisY->TitleForeColor = Color::Black;

			 chart1->Size = System::Drawing::Size(900, 600);
			 chart1->TabIndex = 1;
			 chart1->Text = L"chart1";
			 chart1->Series->Clear();

			 series2->Color = Color::Red;
			 series2->IsVisibleInLegend = true;
			 series2->IsXValueIndexed = true;

			 series1->ChartType = SeriesChartType::Line;
			 series2->ChartType = SeriesChartType::Line;

			 chart1->Series->Add(series1);
			 chart1->Series->Add(series2);

			 for (int i = 0; i < Kol-1; i++){
				 A = Convert::ToDouble(dataGridView1->Rows[i]->Cells[0]->Value);
				 B = Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value);
				 u = Convert::ToDouble(dataGridView2->Rows[i]->Cells[0]->Value);
				 v = Convert::ToDouble(dataGridView2->Rows[i]->Cells[1]->Value);
				friction = 0.34*((1 - A)*exp(-B*v) + A);

				series1->Points->AddXY(v, friction);
				series2->Points->AddXY(v, u);
			 }

}
};
}
