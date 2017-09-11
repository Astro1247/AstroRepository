#pragma once

namespace BusAppCLR {

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
	private: System::Windows::Forms::MenuStrip^  menuPanel;
	private: System::Windows::Forms::ToolStripMenuItem^  файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  выйтиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  администрированиеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  станцииToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel3;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel4;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel5;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel6;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menuPanel = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выйтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->администрированиеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->станцииToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel4 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel5 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel6 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->menuPanel->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuPanel
			// 
			this->menuPanel->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->файлToolStripMenuItem,
					this->администрированиеToolStripMenuItem
			});
			this->menuPanel->Location = System::Drawing::Point(0, 0);
			this->menuPanel->Name = L"menuPanel";
			this->menuPanel->Size = System::Drawing::Size(1084, 24);
			this->menuPanel->TabIndex = 0;
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->выйтиToolStripMenuItem });
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// выйтиToolStripMenuItem
			// 
			this->выйтиToolStripMenuItem->Name = L"выйтиToolStripMenuItem";
			this->выйтиToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->выйтиToolStripMenuItem->Text = L"Выйти";
			this->выйтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::выйтиToolStripMenuItem_Click);
			// 
			// администрированиеToolStripMenuItem
			// 
			this->администрированиеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->станцииToolStripMenuItem });
			this->администрированиеToolStripMenuItem->Name = L"администрированиеToolStripMenuItem";
			this->администрированиеToolStripMenuItem->Size = System::Drawing::Size(134, 20);
			this->администрированиеToolStripMenuItem->Text = L"Администрирование";
			// 
			// станцииToolStripMenuItem
			// 
			this->станцииToolStripMenuItem->Name = L"станцииToolStripMenuItem";
			this->станцииToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->станцииToolStripMenuItem->Text = L"Станции";
			this->станцииToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::callBusManagement);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2, this->toolStripStatusLabel3, this->toolStripStatusLabel4, this->toolStripStatusLabel5, this->toolStripStatusLabel6
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 664);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1084, 22);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(40, 17);
			this->toolStripStatusLabel1->Text = L"Buses:";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(13, 17);
			this->toolStripStatusLabel2->Text = L"0";
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(142, 17);
			this->toolStripStatusLabel3->Text = L"Currentrly working buses:";
			// 
			// toolStripStatusLabel4
			// 
			this->toolStripStatusLabel4->Name = L"toolStripStatusLabel4";
			this->toolStripStatusLabel4->Size = System::Drawing::Size(13, 17);
			this->toolStripStatusLabel4->Text = L"0";
			// 
			// toolStripStatusLabel5
			// 
			this->toolStripStatusLabel5->Name = L"toolStripStatusLabel5";
			this->toolStripStatusLabel5->Size = System::Drawing::Size(102, 17);
			this->toolStripStatusLabel5->Text = L"Working stations: ";
			// 
			// toolStripStatusLabel6
			// 
			this->toolStripStatusLabel6->Name = L"toolStripStatusLabel6";
			this->toolStripStatusLabel6->Size = System::Drawing::Size(13, 17);
			this->toolStripStatusLabel6->Text = L"0";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1084, 686);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuPanel;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BusApp";
			this->menuPanel->ResumeLayout(false);
			this->menuPanel->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void выйтиToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void callBusManagement(System::Object^ sender, System::EventArgs^ e);
};
}
