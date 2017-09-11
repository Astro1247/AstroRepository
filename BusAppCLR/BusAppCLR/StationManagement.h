#pragma once
#include "MainForm.h"

namespace BusAppCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ StationManagement
	/// </summary>
	public ref class StationManagement : public System::Windows::Forms::Form
	{
	public:
	public:
		StationManagement(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		StationManagement(MainForm^ parent)
		{
			InitializeComponent();
			parentForm = parent;
		}
		//...
	private: MainForm^ parentForm;

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~StationManagement()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// StationManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"StationManagement";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StationManagement";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
