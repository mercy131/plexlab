#pragma once
#include <string>
#include"TPoint.h"
#include"TLine.h"
#include<vector>

#include"Plex.h"
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	std::vector<TPoint*> Dots;
	std::vector<TLine*> Lines;
	Plex* pl;
	void MarshalString(String^ s, std::string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>

		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::Label^ label9;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Location = System::Drawing::Point(2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(951, 290);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::PictureBox1_Click);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pict_MouseDown);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(12, 303);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(208, 144);
			this->dataGridView1->TabIndex = 1;
			// 
			// dataGridView2
			// 
			this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(254, 303);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Size = System::Drawing::Size(244, 144);
			this->dataGridView2->TabIndex = 2;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::DataGridView2_CellContentClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(754, 429);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"MOVE POINT";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::Button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(555, 429);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"createLine";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::Button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(536, 403);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(43, 20);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(695, 402);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(67, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(776, 403);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(35, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(603, 403);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(48, 20);
			this->textBox4->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(829, 402);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(44, 20);
			this->textBox5->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(826, 386);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"move (y)";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::Label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(773, 387);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"move (x)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(692, 386);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"NameOfPoint";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::Label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(600, 387);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"endPoint";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(533, 387);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"startPoint";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(695, 349);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 15;
			this->button3->Text = L"SAVE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::Button3_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(555, 349);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(107, 23);
			this->button6->TabIndex = 18;
			this->button6->Text = L"LoadFromFile";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::Button6_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(542, 333);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(120, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Load from \"inputFile.txt\"";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::Label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(674, 333);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Save to \"outputFile.txt\"";
			this->label7->Click += gcnew System::EventHandler(this, &Form1::Label7_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(813, 349);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 21;
			this->button5->Text = L"Select";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::Button5_Click_1);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(810, 333);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(78, 13);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Choose a color";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(954, 478);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		Graphics ^ g;
		Bitmap ^ Im;
		SolidBrush ^ Brush;
		int DotN = -1;
		 int COLOR = -16777216;

		void PrintDotsDataGrid() {
			dataGridView1->RowCount = Dots.size();
			dataGridView1->ColumnCount = 3;
			dataGridView1->Columns[0]->HeaderCell->Value = "NameOfPoint";
			dataGridView1->Columns[1]->HeaderCell->Value = "x";
			dataGridView1->Columns[2]->HeaderCell->Value = "x";
			for (int i = 0; i < Dots.size(); i++) {
				System::String^ strCLR2 = gcnew System::String(Dots[i]->to_string().c_str());
				dataGridView1->Rows[i]->Cells[0]->Value = strCLR2;
				dataGridView1->Rows[i]->Cells[1]->Value = System::Convert::ToString(Dots[i]->GetX());
				dataGridView1->Rows[i]->Cells[2]->Value = System::Convert::ToString(Dots[i]->GetY());
			}
		}
		std::string TranslateTo26(int x) {
			std::string ans;
			while (x) {
				ans += char(x % 26 + 'A');
				x /= 26;
			}
			std::reverse(ans.begin(), ans.end());
			if (ans.size() == 0) {
				ans += 'A';
			}
			return ans;
		}
		void DrawDots() {
			/*for (int i = 0; i < Dots.size(); i++) {
				delete g;
				g = Graphics::FromImage(Im);
				pictureBox1->Image = Im;
				Dots[i]->Draw(g);
				pictureBox1->Refresh();
				pictureBox1->Invalidate();
			}*/
			for (int i = 0; i < Dots.size(); i++) {
				delete g;
				g = Graphics::FromImage(Im);
				pictureBox1->Image = Im;
				Dots[i]->SetColor(COLOR);
				Dots[i]->Draw(g);
				pictureBox1->Refresh();
				pictureBox1->Invalidate();
			}
		}

		void DrawLines() {
			for (int i = 0; i < Lines.size(); i++) {
				delete g;
				g = Graphics::FromImage(Im);
				pictureBox1->Image = Im;
				Lines[i]->SetColor(COLOR);
				Lines[i]->Draw(g);
				pictureBox1->Refresh();
				pictureBox1->Invalidate();
			}
		}
		std::string GenerateNewName() {
			return TranslateTo26(++DotN);
		}
		int FindNameInDots(std::string s) {
			for (int i = 0; i < Dots.size(); i++) {
				if (Dots[i]->GetName() == s) return i;
			}
			return -1;
		}

		void ClearPictureBox() {
			Im = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
			g->Clear(Color::White);
			pictureBox1->Image = Im;
			pictureBox1->Refresh();
			pictureBox1->Invalidate();
		}
		System::Void pict_MouseDown(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e) {

			int X = e->X;
			int Y = e->Y;
			std::string name = GenerateNewName();

			Dots.push_back(new TPoint(X, Y, name));

			PrintDotsDataGrid();
			DrawDots();
		}
		void PrintLinesDataGrid() {
			dataGridView2->RowCount = Lines.size();
			dataGridView2->ColumnCount = 5;
			dataGridView2->Columns[0]->HeaderCell->Value = "Name";
			dataGridView2->Columns[1]->HeaderCell->Value = "x0";
			dataGridView2->Columns[2]->HeaderCell->Value = "y0";
			dataGridView2->Columns[3]->HeaderCell->Value = "x1";
			dataGridView2->Columns[4]->HeaderCell->Value = "y1";
			for (int i = 0; i < Lines.size(); i++) {
				System::String^ strCLR2 = gcnew System::String(Lines[i]->to_string().c_str());
				dataGridView2->Rows[i]->Cells[0]->Value = strCLR2;
				dataGridView2->Rows[i]->Cells[1]->Value = System::Convert::ToString(((TPoint*)(Lines[i]->GetLeft()))->GetX());
				dataGridView2->Rows[i]->Cells[2]->Value = System::Convert::ToString(((TPoint*)(Lines[i]->GetLeft()))->GetY());
				dataGridView2->Rows[i]->Cells[3]->Value = System::Convert::ToString(((TPoint*)(Lines[i]->GetRight()))->GetX());
				dataGridView2->Rows[i]->Cells[4]->Value = System::Convert::ToString(((TPoint*)(Lines[i]->GetRight()))->GetY());
			}
		}
	private: System::Void Form1_Load(System::Object ^ sender, System::EventArgs ^ e) {
		Im = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
		g = Graphics::FromImage(Im);
		pictureBox1->Image = Im;
	
		pictureBox1->BackColor = Color::AntiqueWhite;
		//COLOR = Color::Green.ToKnownColor;
	}
	private: System::Void PictureBox1_Click(System::Object ^ sender, System::EventArgs ^ e) {

	}
	private: System::Void Button1_Click(System::Object ^ sender, System::EventArgs ^ e) {
		std::string sbf1;
		MarshalString(textBox2->Text, sbf1);


		std::string NamePointToMove = sbf1;

		int dx = System::Convert::ToInt32(textBox3->Text);
		int dy = System::Convert::ToInt32(textBox5->Text);
		int index = FindNameInDots(NamePointToMove);


		if (pl) {
			TPoint* find = pl->SearchPoint(NamePointToMove);

			if (find) {
				find->MovePoint(dx, dy);
			}
			pl->saveFile();

		}
		Dots[index]->MovePoint(dx, dy);
		if (Dots.size()) PrintDotsDataGrid();
		if (Lines.size()) PrintLinesDataGrid();

		ClearPictureBox();

		DrawLines();
		DrawDots();
	}
	private: System::Void TextBox3_TextChanged(System::Object ^ sender, System::EventArgs ^ e) {
	}
	private: System::Void Button2_Click(System::Object ^ sender, System::EventArgs ^ e) {

		std::string N1;
		std::string N2;
		MarshalString(textBox1->Text, N1);
		MarshalString(textBox4->Text, N2);
		int ind1 = FindNameInDots(N1);
		int ind2 = FindNameInDots(N2);

		std::string NLine = N1 + ' ' + N2;
		Lines.push_back(new TLine(Dots[ind1], Dots[ind2]));
		DrawLines();
		PrintLinesDataGrid();
	}
	private: System::Void DataGridView2_CellContentClick(System::Object ^ sender, System::Windows::Forms::DataGridViewCellEventArgs ^ e) {
	}
	private: System::Void Button3_Click(System::Object ^ sender, System::EventArgs ^ e) {

		if (!Lines.size()) return;

		pl = new Plex(Lines[0]);
		for (int i = 1; i < Lines.size(); i++) {
			pl->addLine(Lines[i]);
		}
		pl->saveFile();

		PrintLinesDataGrid();
	}
	private: System::Void Button4_Click(System::Object ^ sender, System::EventArgs ^ e) {
		ClearPictureBox();
		Dots.clear();
		Lines.clear();

		g = Graphics::FromImage(Im);
		pictureBox1->Image = Im;
		pictureBox1->Refresh();
		pictureBox1->Invalidate();
	}
	private: System::Void Button5_Click(System::Object ^ sender, System::EventArgs ^ e) {

		
		

	}
	private: System::Void Button6_Click(System::Object ^ sender, System::EventArgs ^ e) {
		std::string name = "outputFile.txt";
		if (!pl) pl = new Plex();
		pl->readFile(name);
		auto ans = pl->getPointsAndLines();
		Dots.clear();
		Lines.clear();
		Dots = ans.first;
		Lines = ans.second;
		if (Dots.size()) PrintDotsDataGrid();
		if (Lines.size()) PrintLinesDataGrid();
		DotN = Lines.size() - 1;
		pl->reColor(COLOR);

		ClearPictureBox();
		if (pl == nullptr || pl->Empty()) return;
		delete g;
		g = Graphics::FromImage(Im);
		pictureBox1->Image = Im;
		pl->reColor(COLOR);
		pl->Draw(g);
		pictureBox1->Refresh();
		pictureBox1->Invalidate();
	}
	private: System::Void Label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		COLOR = colorDialog1->Color.ToArgb();
		
		MessageBox::Show(System::Convert::ToString(COLOR));
		for (auto i : Dots) {
			i->SetColor(COLOR);
		}
		for (auto i : Lines) {
			i->SetColor(COLOR);
		}
		//Button5_Click(sender, e);
		
	}
}
private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}