﻿#pragma once

namespace LabCLRGui {

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
			Bitmap^ bmp = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
			Graphics^ g = Graphics::FromImage(bmp);

			pictureBox1->BackgroundImage = bmp;
			timer1->Enabled = true;
			timer1->Interval = 10; 
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
	private: System::Windows::Forms::TextBox^ textBoxDistance;
	private: System::Windows::Forms::TextBox^ textBoxFuelСons;
	private: System::Windows::Forms::TextBox^ textBoxLiterPrice;
	protected:

	protected:


	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ labelRez;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::ComponentModel::IContainer^ components;


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
			this->components = (gcnew System::ComponentModel::Container());
			this->textBoxDistance = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFuelСons = (gcnew System::Windows::Forms::TextBox());
			this->textBoxLiterPrice = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->labelRez = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBoxDistance
			// 
			this->textBoxDistance->Location = System::Drawing::Point(34, 45);
			this->textBoxDistance->Name = L"textBoxDistance";
			this->textBoxDistance->Size = System::Drawing::Size(96, 22);
			this->textBoxDistance->TabIndex = 0;
			this->textBoxDistance->Text = L"1";
			// 
			// textBoxFuelСons
			// 
			this->textBoxFuelСons->Location = System::Drawing::Point(245, 45);
			this->textBoxFuelСons->Name = L"textBoxFuelСons";
			this->textBoxFuelСons->Size = System::Drawing::Size(99, 22);
			this->textBoxFuelСons->TabIndex = 2;
			// 
			// textBoxLiterPrice
			// 
			this->textBoxLiterPrice->Location = System::Drawing::Point(445, 45);
			this->textBoxLiterPrice->Name = L"textBoxLiterPrice";
			this->textBoxLiterPrice->Size = System::Drawing::Size(100, 22);
			this->textBoxLiterPrice->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(204, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Расход бензина на 100 км";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Расстояние до дачи(км)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(407, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(229, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Стоимость одного литра бензина";
			// 
			// labelRez
			// 
			this->labelRez->AutoSize = true;
			this->labelRez->Location = System::Drawing::Point(309, 80);
			this->labelRez->Name = L"labelRez";
			this->labelRez->Size = System::Drawing::Size(24, 17);
			this->labelRez->TabIndex = 11;
			this->labelRez->Text = L"....";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(235, 110);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Стоимость поездки ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(15, 139);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(641, 258);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(668, 409);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labelRez);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxLiterPrice);
			this->Controls->Add(this->textBoxFuelСons);
			this->Controls->Add(this->textBoxDistance);
			this->Name = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		try
		{
			double dist = Convert::ToDouble(textBoxDistance->Text);
			double fuelСons = Convert::ToDouble(textBoxFuelСons->Text);
			double liter = Convert::ToDouble(textBoxLiterPrice->Text);

			double s = dist*2 *(fuelСons/100* liter);

			labelRez->Text = Convert::ToString(Math::Abs(s))+" руб";   
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Введенные данные \n не коректны!");
			textBoxDistance->Text = ""; textBoxFuelСons->Text = ""; textBoxLiterPrice->Text = "";
		}
	}
	

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	
	pictureBox1->Invalidate(); 

	static bool  flag{ true };

	if (y == pictureBox1->Height - 50 || x == pictureBox1->Width - 50)
		flag = false;
	if (x == 0 || y == 0)
		flag = true;

	if (flag) {
		x++;
		y++;
	}
	else {
		x--;
		y--;
	}
	
}
	   float x = 50.0F;
	   float y = 50.0F;
private: System::Void pictureBox1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	

	// Create string to draw.
	String^ drawString = "Стоимость поездки";

	// Create font and brush.
	Drawing::Font^ drawFont = gcnew Drawing::Font("Arial", 20);
	SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black);

	// Create rectangle for drawing.
	/*float x = 50.0F;
	float y = 50.0F;*/
	float width = 300.0F;
	float height = 50.0F;
	RectangleF ^drawRect = gcnew RectangleF(x, y, width, height);

	
	// Draw rectangle to screen.
	Pen ^blackPen = gcnew Pen(Color::Black);
	Pen^ redPen = gcnew Pen(Color::Red);
	static bool  flag{ true };
	(flag)? e->Graphics->DrawRectangle(blackPen, x, y, width, height):
	e->Graphics->DrawRectangle(redPen, x, y, width, height);
	flag = !flag;

	// Set format of string.
	StringFormat ^drawFormat = gcnew StringFormat();
	drawFormat->Alignment = StringAlignment::Center;

	// Draw string to screen.
	
	e->Graphics->DrawString(drawString, drawFont, drawBrush, x+140, y+10, drawFormat);
}
};
}
