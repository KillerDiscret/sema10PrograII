#pragma once
#include "CCirculo.h"

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		Circulo *obj1;
		int entrada1;
		int entrada2;
		int x;
	private: System::Windows::Forms::Label^  EjX;
	private: System::Windows::Forms::Label^  EjY;
	private: System::Windows::Forms::TextBox^  textBoxX;
	private: System::Windows::Forms::TextBox^  textBoxY;
	private: System::Windows::Forms::Timer^  timer1;
			 int y;
	
	public:
		MyForm(void)
		{
			InitializeComponent();
			obj1 = new Circulo(5,5,100);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  boton1;
	private: System::Windows::Forms::Button^  boton2;
	private: System::Windows::Forms::Label^  texto1;
	private: System::Windows::Forms::Label^  texto2;
	private: System::Windows::Forms::TextBox^  textBoxWidth;
	private: System::Windows::Forms::TextBox^  textBoxheight;
	private: System::ComponentModel::IContainer^  components;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->boton1 = (gcnew System::Windows::Forms::Button());
			this->boton2 = (gcnew System::Windows::Forms::Button());
			this->texto1 = (gcnew System::Windows::Forms::Label());
			this->texto2 = (gcnew System::Windows::Forms::Label());
			this->textBoxWidth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxheight = (gcnew System::Windows::Forms::TextBox());
			this->EjX = (gcnew System::Windows::Forms::Label());
			this->EjY = (gcnew System::Windows::Forms::Label());
			this->textBoxX = (gcnew System::Windows::Forms::TextBox());
			this->textBoxY = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// boton1
			// 
			this->boton1->Location = System::Drawing::Point(257, 9);
			this->boton1->Name = L"boton1";
			this->boton1->Size = System::Drawing::Size(94, 31);
			this->boton1->TabIndex = 0;
			this->boton1->Text = L"Circulo";
			this->boton1->UseVisualStyleBackColor = true;
			this->boton1->Click += gcnew System::EventHandler(this, &MyForm::boton1_Click);
			// 
			// boton2
			// 
			this->boton2->Location = System::Drawing::Point(257, 49);
			this->boton2->Name = L"boton2";
			this->boton2->Size = System::Drawing::Size(94, 34);
			this->boton2->TabIndex = 1;
			this->boton2->Text = L"Rectangulo";
			this->boton2->UseVisualStyleBackColor = true;
			this->boton2->Click += gcnew System::EventHandler(this, &MyForm::boton2_Click);
			// 
			// texto1
			// 
			this->texto1->AutoSize = true;
			this->texto1->Location = System::Drawing::Point(48, 18);
			this->texto1->Name = L"texto1";
			this->texto1->Size = System::Drawing::Size(32, 13);
			this->texto1->TabIndex = 2;
			this->texto1->Text = L"width";
			// 
			// texto2
			// 
			this->texto2->AutoSize = true;
			this->texto2->Location = System::Drawing::Point(48, 64);
			this->texto2->Name = L"texto2";
			this->texto2->Size = System::Drawing::Size(36, 13);
			this->texto2->TabIndex = 3;
			this->texto2->Text = L"height";
			// 
			// textBoxWidth
			// 
			this->textBoxWidth->Location = System::Drawing::Point(110, 18);
			this->textBoxWidth->Name = L"textBoxWidth";
			this->textBoxWidth->Size = System::Drawing::Size(100, 20);
			this->textBoxWidth->TabIndex = 4;
			this->textBoxWidth->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxWidth_TextChanged);
			// 
			// textBoxheight
			// 
			this->textBoxheight->Location = System::Drawing::Point(110, 60);
			this->textBoxheight->Name = L"textBoxheight";
			this->textBoxheight->Size = System::Drawing::Size(100, 20);
			this->textBoxheight->TabIndex = 5;
			this->textBoxheight->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxheight_TextChanged);
			// 
			// EjX
			// 
			this->EjX->AutoSize = true;
			this->EjX->Location = System::Drawing::Point(51, 98);
			this->EjX->Name = L"EjX";
			this->EjX->Size = System::Drawing::Size(32, 13);
			this->EjX->TabIndex = 6;
			this->EjX->Text = L"Eje X";
			// 
			// EjY
			// 
			this->EjY->AutoSize = true;
			this->EjY->Location = System::Drawing::Point(51, 125);
			this->EjY->Name = L"EjY";
			this->EjY->Size = System::Drawing::Size(32, 13);
			this->EjY->TabIndex = 7;
			this->EjY->Text = L"Eje Y";
			// 
			// textBoxX
			// 
			this->textBoxX->Location = System::Drawing::Point(110, 94);
			this->textBoxX->Name = L"textBoxX";
			this->textBoxX->Size = System::Drawing::Size(100, 20);
			this->textBoxX->TabIndex = 8;
			// 
			// textBoxY
			// 
			this->textBoxY->Location = System::Drawing::Point(110, 122);
			this->textBoxY->Name = L"textBoxY";
			this->textBoxY->Size = System::Drawing::Size(100, 20);
			this->textBoxY->TabIndex = 9;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(540, 402);
			this->Controls->Add(this->textBoxY);
			this->Controls->Add(this->textBoxX);
			this->Controls->Add(this->EjY);
			this->Controls->Add(this->EjX);
			this->Controls->Add(this->textBoxheight);
			this->Controls->Add(this->textBoxWidth);
			this->Controls->Add(this->texto2);
			this->Controls->Add(this->texto1);
			this->Controls->Add(this->boton2);
			this->Controls->Add(this->boton1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void boton1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//System::Drawing::Graphics ^canvas = this->CreateGraphics();
		//canvas->DrawEllipse(Pens::Red, 30, 20, 100, 100);
		//canvas->FillEllipse(Brushes::Aquamarine, 30, 20, 100, 100);
		/*entrada1 = Convert::ToInt32(textBoxheight->Text);
		entrada2 = Convert::ToInt32(textBoxWidth->Text);
		x = Convert::ToInt32(textBoxX->Text);
		y = Convert::ToInt32(textBoxY->Text);
		canvas->DrawEllipse(Pens::Red, x, y, entrada1, entrada2);
		*/
		/*n1 = Convert::ToInt32(textBox1->Text);
		n2 = Convert::ToInt32(textBox2->Text);
		resultado = n1 + n2;
		label3->Text = resultado.ToString();
		*/
	}
	private: System::Void boton2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		
		//System::Drawing::Graphics ^canvas = this->CreateGraphics();
		/*entrada1 = Convert::ToInt32(textBoxheight->Text);
		entrada2 = Convert::ToInt32(textBoxWidth->Text);
		x = Convert::ToInt32(textBoxX->Text);
		y = Convert::ToInt32(textBoxY->Text);
		*/
		//canvas->FillRectangle(Brushes::Red, 200, 210, 100, 100);
		//canvas->FillRectangle(Brushes::Red, x, y, entrada1, entrada2);
		//canvas->DrawRectangle(Pens::Red, 200, 210, 100, 100);
	}
	private: System::Void textBoxWidth_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBoxheight_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	obj1->mover(this->CreateGraphics());

}
private: System::Void MyForm_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) 
{
	System::Drawing::Graphics^gr = this->CreateGraphics();
	SolidBrush^brocha = gcnew SolidBrush(Color::White);
	int a = gr->VisibleClipBounds.Width;
	int l = gr->VisibleClipBounds.Height;
	gr->FillRectangle(brocha, 0, 0, a,l);

}
};
}
