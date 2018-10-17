#pragma once

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
		int entrada1;
		int entrada2;
	public:
		MyForm(void)
		{
			InitializeComponent();
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
	protected:

	protected:

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
			this->boton1 = (gcnew System::Windows::Forms::Button());
			this->boton2 = (gcnew System::Windows::Forms::Button());
			this->texto1 = (gcnew System::Windows::Forms::Label());
			this->texto2 = (gcnew System::Windows::Forms::Label());
			this->textBoxWidth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxheight = (gcnew System::Windows::Forms::TextBox());
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
			this->textBoxheight->Location = System::Drawing::Point(110, 57);
			this->textBoxheight->Name = L"textBoxheight";
			this->textBoxheight->Size = System::Drawing::Size(100, 20);
			this->textBoxheight->TabIndex = 5;
			this->textBoxheight->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxheight_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(540, 402);
			this->Controls->Add(this->textBoxheight);
			this->Controls->Add(this->textBoxWidth);
			this->Controls->Add(this->texto2);
			this->Controls->Add(this->texto1);
			this->Controls->Add(this->boton2);
			this->Controls->Add(this->boton1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void boton1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		System::Drawing::Graphics ^canvas = this->CreateGraphics();
		//canvas->DrawEllipse(Pens::Red, 30, 20, 100, 100);
		//canvas->FillEllipse(Brushes::Aquamarine, 30, 20, 100, 100);
		entrada1 = Convert::ToInt32(textBoxheight->Text);
		entrada2 = Convert::ToInt32(textBoxWidth->Text);
		canvas->DrawEllipse(Pens::Red, 30, 20, entrada1, entrada2);
		
		/*n1 = Convert::ToInt32(textBox1->Text);
		n2 = Convert::ToInt32(textBox2->Text);
		resultado = n1 + n2;
		label3->Text = resultado.ToString();
		*/
	}
	private: System::Void boton2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		System::Drawing::Graphics ^canvas = this->CreateGraphics();
		entrada1 = Convert::ToInt32(textBoxheight->Text);
		entrada2 = Convert::ToInt32(textBoxWidth->Text);
		//canvas->FillRectangle(Brushes::Red, 200, 210, 100, 100);
		canvas->FillRectangle(Brushes::Red, 200, 210, entrada1, entrada2);
		//canvas->DrawRectangle(Pens::Red, 200, 210, 100, 100);
	}
	private: System::Void textBoxWidth_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBoxheight_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
