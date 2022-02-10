#pragma once

#include "THello.h"

namespace OPP1Zerebkovs {

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
	private: System::Windows::Forms::Button^ OnOff;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::PictureBox^ Frame;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

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
			this->Frame = (gcnew System::Windows::Forms::PictureBox());
			this->OnOff = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Frame))->BeginInit();
			this->SuspendLayout();
			// 
			// Frame
			// 
			this->Frame->Location = System::Drawing::Point(12, 23);
			this->Frame->Name = L"Frame";
			this->Frame->Size = System::Drawing::Size(667, 160);
			this->Frame->TabIndex = 0;
			this->Frame->TabStop = false;
			this->Frame->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// OnOff
			// 
			this->OnOff->Location = System::Drawing::Point(305, 199);
			this->OnOff->Name = L"OnOff";
			this->OnOff->Size = System::Drawing::Size(93, 23);
			this->OnOff->TabIndex = 1;
			this->OnOff->Text = L"Start";
			this->OnOff->UseVisualStyleBackColor = true;
			this->OnOff->Click += gcnew System::EventHandler(this, &MyForm::HelloBtn_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 400;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(686, 234);
			this->Controls->Add(this->OnOff);
			this->Controls->Add(this->Frame);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Welcome";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Frame))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void HelloBtn_Click(System::Object^ sender, System::EventArgs^ e) {

		if (timer1->Enabled) {
			timer1->Stop();
			OnOff->Text = "Start";
		}
		else {
			timer1->Start();
			OnOff->Text = "Stop";
		}

	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		THello hello;
		Graphics^ grp = Frame->CreateGraphics();
		hello.Draw(grp, Frame->Width, Frame->Height);
	}
	};
}
