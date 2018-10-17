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
			this->SuspendLayout();
			// 
			// boton1
			// 
			this->boton1->Location = System::Drawing::Point(416, 46);
			this->boton1->Name = L"boton1";
			this->boton1->Size = System::Drawing::Size(94, 31);
			this->boton1->TabIndex = 0;
			this->boton1->Text = L"Circulo";
			this->boton1->UseVisualStyleBackColor = true;
			this->boton1->Click += gcnew System::EventHandler(this, &MyForm::boton1_Click);
			// 
			// boton2
			// 
			this->boton2->Location = System::Drawing::Point(416, 83);
			this->boton2->Name = L"boton2";
			this->boton2->Size = System::Drawing::Size(94, 34);
			this->boton2->TabIndex = 1;
			this->boton2->Text = L"Rectangulo";
			this->boton2->UseVisualStyleBackColor = true;
			this->boton2->Click += gcnew System::EventHandler(this, &MyForm::boton2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(540, 402);
			this->Controls->Add(this->boton2);
			this->Controls->Add(this->boton1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void boton1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		System::Drawing::Graphics ^canvas = this->CreateGraphics();
		canvas->DrawEllipse(Pens::Red, 30, 20, 100, 100);

	}
	private: System::Void boton2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		System::Drawing::Graphics ^canvas = this->CreateGraphics();
		canvas->FillRectangle(Brushes::Red, 200, 210, 100, 100);
		//canvas->DrawRectangle(Pens::Red, 200, 210, 100, 100);
	}
	};
}
