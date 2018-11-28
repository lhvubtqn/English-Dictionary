#pragma once

#include <msclr\marshal_cppstd.h>
#include "Dictionary.h"

namespace EngDict
{
	#define DICTIONARY_DATA "Data.txt"

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Main Menu
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
			myDict = new Dictionary(DICTIONARY_DATA);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main()
		{
			myDict->save(DICTIONARY_DATA);
			if (components)
			{
				delete components;
			}
			delete myDict;
		}
	// User variable
	private: Dictionary* myDict;

	private: System::Windows::Forms::Label^  application_label;
	protected:
	private: System::Windows::Forms::TabControl^  tabControl;
	private: System::Windows::Forms::TabPage^  addTab;
	private: System::Windows::Forms::TabPage^  searchTab;
	private: System::Windows::Forms::TabPage^  modifyTab;

	private: System::Windows::Forms::Button^  saveButton;
	private: System::Windows::Forms::Label^  searchLabel;
	private: System::Windows::Forms::TextBox^  searchTextBox;
	private: System::Windows::Forms::TableLayoutPanel^  searchTableLayout;
	private: System::Windows::Forms::Label^  searchMeaningLabel;
	private: System::Windows::Forms::Label^  searchMeaningAdjustLabel;
	private: System::Windows::Forms::Label^  searchOriginLabel;
	private: System::Windows::Forms::Label^  searchOriginAdjustLabel;
	private: System::Windows::Forms::Label^  searchUsageLabel;
	private: System::Windows::Forms::Label^  searchUsageAdjustLabel;
	private: System::Windows::Forms::Button^  loadButton;

	private: System::Windows::Forms::Label^  addUsageLabel;
	private: System::Windows::Forms::TextBox^  addUsageTextBox;
	private: System::Windows::Forms::Label^  addOriginLabel;
	private: System::Windows::Forms::TextBox^  addOriginTextBox;
	private: System::Windows::Forms::Label^  addMeaningLable;
	private: System::Windows::Forms::TextBox^  addMeaningTextBox;
	private: System::Windows::Forms::Label^  addWordLabel;
	private: System::Windows::Forms::TextBox^  addWordTextBox;
	private: System::Windows::Forms::Label^  addAppLabel;


	private: System::Windows::Forms::Button^  addOkButton;
	private: System::Windows::Forms::Button^  modifyOkButton;
	private: System::Windows::Forms::Label^  modifyUsageLabel;
	private: System::Windows::Forms::TextBox^  modifyUsageTextBox;
	private: System::Windows::Forms::Label^  modifyOriginLabel;
	private: System::Windows::Forms::TextBox^  modifyOriginTextBox;
	private: System::Windows::Forms::Label^  modifyMeaningLabel;
	private: System::Windows::Forms::TextBox^  modifyMeaningTextBox;
	private: System::Windows::Forms::Label^  modifyWordLabel;
	private: System::Windows::Forms::TextBox^  modifyWordTextBox;
	private: System::Windows::Forms::Label^  modifyAppLabel;
private: System::Windows::Forms::Label^  modifyAnounce;
	private: System::Windows::Forms::Label^  addAnounce;
	private: System::Windows::Forms::Label^  searchVersionLabel;
	private: System::Windows::Forms::Label^  searchVersionAdjustLabel;
	private: System::Windows::Forms::Label^  searchAuthorLabel;
	private: System::Windows::Forms::Label^  searchAuthorAdjustLabel;
	private: System::Windows::Forms::TabPage^  removeTab;
	private: System::Windows::Forms::Button^  removeButton;
	private: System::Windows::Forms::Label^  removeWordLabel;
	private: System::Windows::Forms::TextBox^  removeWordTextBox;
	private: System::Windows::Forms::TableLayoutPanel^  removeTableLayout;
	private: System::Windows::Forms::Label^  removeMeaningLabel;
	private: System::Windows::Forms::Label^  removeMeaningAdjustLabel;
	private: System::Windows::Forms::Label^  removeOriginLabel;
	private: System::Windows::Forms::Label^  removeOriginAdjustLabel;
	private: System::Windows::Forms::Label^  removeUsageLabel;
	private: System::Windows::Forms::Label^  removeUsageAdjustLabel;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Panel^  panel1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->application_label = (gcnew System::Windows::Forms::Label());
			this->tabControl = (gcnew System::Windows::Forms::TabControl());
			this->searchTab = (gcnew System::Windows::Forms::TabPage());
			this->searchLabel = (gcnew System::Windows::Forms::Label());
			this->searchTextBox = (gcnew System::Windows::Forms::TextBox());
			this->searchTableLayout = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->searchMeaningLabel = (gcnew System::Windows::Forms::Label());
			this->searchMeaningAdjustLabel = (gcnew System::Windows::Forms::Label());
			this->searchOriginLabel = (gcnew System::Windows::Forms::Label());
			this->searchOriginAdjustLabel = (gcnew System::Windows::Forms::Label());
			this->searchUsageLabel = (gcnew System::Windows::Forms::Label());
			this->searchUsageAdjustLabel = (gcnew System::Windows::Forms::Label());
			this->searchVersionLabel = (gcnew System::Windows::Forms::Label());
			this->searchVersionAdjustLabel = (gcnew System::Windows::Forms::Label());
			this->searchAuthorLabel = (gcnew System::Windows::Forms::Label());
			this->searchAuthorAdjustLabel = (gcnew System::Windows::Forms::Label());
			this->addTab = (gcnew System::Windows::Forms::TabPage());
			this->addAnounce = (gcnew System::Windows::Forms::Label());
			this->addOkButton = (gcnew System::Windows::Forms::Button());
			this->addUsageLabel = (gcnew System::Windows::Forms::Label());
			this->addUsageTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addOriginLabel = (gcnew System::Windows::Forms::Label());
			this->addOriginTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addMeaningLable = (gcnew System::Windows::Forms::Label());
			this->addMeaningTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addWordLabel = (gcnew System::Windows::Forms::Label());
			this->addWordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addAppLabel = (gcnew System::Windows::Forms::Label());
			this->modifyTab = (gcnew System::Windows::Forms::TabPage());
			this->modifyAnounce = (gcnew System::Windows::Forms::Label());
			this->modifyOkButton = (gcnew System::Windows::Forms::Button());
			this->modifyUsageLabel = (gcnew System::Windows::Forms::Label());
			this->modifyUsageTextBox = (gcnew System::Windows::Forms::TextBox());
			this->modifyOriginLabel = (gcnew System::Windows::Forms::Label());
			this->modifyOriginTextBox = (gcnew System::Windows::Forms::TextBox());
			this->modifyMeaningLabel = (gcnew System::Windows::Forms::Label());
			this->modifyMeaningTextBox = (gcnew System::Windows::Forms::TextBox());
			this->modifyWordLabel = (gcnew System::Windows::Forms::Label());
			this->modifyWordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->modifyAppLabel = (gcnew System::Windows::Forms::Label());
			this->removeTab = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->removeTableLayout = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->removeMeaningLabel = (gcnew System::Windows::Forms::Label());
			this->removeMeaningAdjustLabel = (gcnew System::Windows::Forms::Label());
			this->removeOriginLabel = (gcnew System::Windows::Forms::Label());
			this->removeOriginAdjustLabel = (gcnew System::Windows::Forms::Label());
			this->removeUsageLabel = (gcnew System::Windows::Forms::Label());
			this->removeUsageAdjustLabel = (gcnew System::Windows::Forms::Label());
			this->removeButton = (gcnew System::Windows::Forms::Button());
			this->removeWordLabel = (gcnew System::Windows::Forms::Label());
			this->removeWordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->loadButton = (gcnew System::Windows::Forms::Button());
			this->tabControl->SuspendLayout();
			this->searchTab->SuspendLayout();
			this->searchTableLayout->SuspendLayout();
			this->addTab->SuspendLayout();
			this->modifyTab->SuspendLayout();
			this->removeTab->SuspendLayout();
			this->panel1->SuspendLayout();
			this->removeTableLayout->SuspendLayout();
			this->SuspendLayout();
			// 
			// application_label
			// 
			this->application_label->AutoSize = true;
			this->application_label->Font = (gcnew System::Drawing::Font(L"Mistral", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->application_label->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->application_label->Location = System::Drawing::Point(41, 18);
			this->application_label->Name = L"application_label";
			this->application_label->Size = System::Drawing::Size(383, 57);
			this->application_label->TabIndex = 0;
			this->application_label->Text = L"ENGLISH DICTIONARY";
			this->application_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabControl
			// 
			this->tabControl->Controls->Add(this->searchTab);
			this->tabControl->Controls->Add(this->addTab);
			this->tabControl->Controls->Add(this->modifyTab);
			this->tabControl->Controls->Add(this->removeTab);
			this->tabControl->Dock = System::Windows::Forms::DockStyle::Top;
			this->tabControl->Location = System::Drawing::Point(0, 0);
			this->tabControl->Name = L"tabControl";
			this->tabControl->SelectedIndex = 0;
			this->tabControl->Size = System::Drawing::Size(484, 320);
			this->tabControl->TabIndex = 10;
			this->tabControl->TabStop = false;
			// 
			// searchTab
			// 
			this->searchTab->BackColor = System::Drawing::SystemColors::Control;
			this->searchTab->Controls->Add(this->searchLabel);
			this->searchTab->Controls->Add(this->searchTextBox);
			this->searchTab->Controls->Add(this->searchTableLayout);
			this->searchTab->Controls->Add(this->application_label);
			this->searchTab->Location = System::Drawing::Point(4, 22);
			this->searchTab->Name = L"searchTab";
			this->searchTab->Padding = System::Windows::Forms::Padding(3);
			this->searchTab->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->searchTab->Size = System::Drawing::Size(476, 294);
			this->searchTab->TabIndex = 0;
			this->searchTab->Text = L"Search";
			this->searchTab->Click += gcnew System::EventHandler(this, &Main::searchTextBox_textChanged);
			this->searchTab->Enter += gcnew System::EventHandler(this, &Main::searchTextBox_textChanged);
			// 
			// searchLabel
			// 
			this->searchLabel->AutoSize = true;
			this->searchLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchLabel->Location = System::Drawing::Point(48, 76);
			this->searchLabel->Name = L"searchLabel";
			this->searchLabel->Size = System::Drawing::Size(86, 16);
			this->searchLabel->TabIndex = 3;
			this->searchLabel->Text = L"Type a word:";
			// 
			// searchTextBox
			// 
			this->searchTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchTextBox->Location = System::Drawing::Point(51, 94);
			this->searchTextBox->Name = L"searchTextBox";
			this->searchTextBox->Size = System::Drawing::Size(373, 22);
			this->searchTextBox->TabIndex = 0;
			this->searchTextBox->TextChanged += gcnew System::EventHandler(this, &Main::searchTextBox_textChanged);
			// 
			// searchTableLayout
			// 
			this->searchTableLayout->ColumnCount = 2;
			this->searchTableLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20.91153F)));
			this->searchTableLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				79.08847F)));
			this->searchTableLayout->Controls->Add(this->searchMeaningLabel, 0, 0);
			this->searchTableLayout->Controls->Add(this->searchMeaningAdjustLabel, 1, 0);
			this->searchTableLayout->Controls->Add(this->searchOriginLabel, 0, 1);
			this->searchTableLayout->Controls->Add(this->searchOriginAdjustLabel, 1, 1);
			this->searchTableLayout->Controls->Add(this->searchUsageLabel, 0, 2);
			this->searchTableLayout->Controls->Add(this->searchUsageAdjustLabel, 1, 2);
			this->searchTableLayout->Controls->Add(this->searchVersionLabel, 0, 3);
			this->searchTableLayout->Controls->Add(this->searchVersionAdjustLabel, 1, 3);
			this->searchTableLayout->Controls->Add(this->searchAuthorLabel, 0, 4);
			this->searchTableLayout->Controls->Add(this->searchAuthorAdjustLabel, 1, 4);
			this->searchTableLayout->Location = System::Drawing::Point(51, 121);
			this->searchTableLayout->Name = L"searchTableLayout";
			this->searchTableLayout->RowCount = 5;
			this->searchTableLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->searchTableLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->searchTableLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->searchTableLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->searchTableLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->searchTableLayout->Size = System::Drawing::Size(373, 138);
			this->searchTableLayout->TabIndex = 1;
			// 
			// searchMeaningLabel
			// 
			this->searchMeaningLabel->AutoSize = true;
			this->searchMeaningLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchMeaningLabel->Location = System::Drawing::Point(3, 0);
			this->searchMeaningLabel->Name = L"searchMeaningLabel";
			this->searchMeaningLabel->Size = System::Drawing::Size(71, 16);
			this->searchMeaningLabel->TabIndex = 0;
			this->searchMeaningLabel->Text = L"Meaning:";
			this->searchMeaningLabel->Visible = false;
			// 
			// searchMeaningAdjustLabel
			// 
			this->searchMeaningAdjustLabel->AutoSize = true;
			this->searchMeaningAdjustLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->searchMeaningAdjustLabel->Location = System::Drawing::Point(81, 0);
			this->searchMeaningAdjustLabel->Name = L"searchMeaningAdjustLabel";
			this->searchMeaningAdjustLabel->Padding = System::Windows::Forms::Padding(0, 0, 15, 0);
			this->searchMeaningAdjustLabel->Size = System::Drawing::Size(75, 16);
			this->searchMeaningAdjustLabel->TabIndex = 1;
			this->searchMeaningAdjustLabel->Text = L"meaning";
			this->searchMeaningAdjustLabel->Visible = false;
			// 
			// searchOriginLabel
			// 
			this->searchOriginLabel->AutoSize = true;
			this->searchOriginLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchOriginLabel->Location = System::Drawing::Point(3, 16);
			this->searchOriginLabel->Name = L"searchOriginLabel";
			this->searchOriginLabel->Size = System::Drawing::Size(53, 16);
			this->searchOriginLabel->TabIndex = 2;
			this->searchOriginLabel->Text = L"Origin:";
			this->searchOriginLabel->Visible = false;
			// 
			// searchOriginAdjustLabel
			// 
			this->searchOriginAdjustLabel->AutoSize = true;
			this->searchOriginAdjustLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->searchOriginAdjustLabel->Location = System::Drawing::Point(81, 16);
			this->searchOriginAdjustLabel->Name = L"searchOriginAdjustLabel";
			this->searchOriginAdjustLabel->Padding = System::Windows::Forms::Padding(0, 0, 15, 0);
			this->searchOriginAdjustLabel->Size = System::Drawing::Size(56, 16);
			this->searchOriginAdjustLabel->TabIndex = 3;
			this->searchOriginAdjustLabel->Text = L"origin";
			this->searchOriginAdjustLabel->Visible = false;
			// 
			// searchUsageLabel
			// 
			this->searchUsageLabel->AutoSize = true;
			this->searchUsageLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchUsageLabel->Location = System::Drawing::Point(3, 32);
			this->searchUsageLabel->Name = L"searchUsageLabel";
			this->searchUsageLabel->Size = System::Drawing::Size(58, 16);
			this->searchUsageLabel->TabIndex = 4;
			this->searchUsageLabel->Text = L"Usage:";
			this->searchUsageLabel->Visible = false;
			// 
			// searchUsageAdjustLabel
			// 
			this->searchUsageAdjustLabel->AutoSize = true;
			this->searchUsageAdjustLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->searchUsageAdjustLabel->Location = System::Drawing::Point(81, 32);
			this->searchUsageAdjustLabel->Name = L"searchUsageAdjustLabel";
			this->searchUsageAdjustLabel->Padding = System::Windows::Forms::Padding(0, 0, 15, 0);
			this->searchUsageAdjustLabel->Size = System::Drawing::Size(61, 16);
			this->searchUsageAdjustLabel->TabIndex = 5;
			this->searchUsageAdjustLabel->Text = L"usage";
			this->searchUsageAdjustLabel->Visible = false;
			// 
			// searchVersionLabel
			// 
			this->searchVersionLabel->AutoSize = true;
			this->searchVersionLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchVersionLabel->Location = System::Drawing::Point(3, 48);
			this->searchVersionLabel->Name = L"searchVersionLabel";
			this->searchVersionLabel->Size = System::Drawing::Size(65, 16);
			this->searchVersionLabel->TabIndex = 4;
			this->searchVersionLabel->Text = L"Version:";
			// 
			// searchVersionAdjustLabel
			// 
			this->searchVersionAdjustLabel->AutoSize = true;
			this->searchVersionAdjustLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->searchVersionAdjustLabel->Location = System::Drawing::Point(81, 48);
			this->searchVersionAdjustLabel->Name = L"searchVersionAdjustLabel";
			this->searchVersionAdjustLabel->Padding = System::Windows::Forms::Padding(0, 0, 15, 0);
			this->searchVersionAdjustLabel->Size = System::Drawing::Size(40, 16);
			this->searchVersionAdjustLabel->TabIndex = 5;
			this->searchVersionAdjustLabel->Text = L"1.0";
			// 
			// searchAuthorLabel
			// 
			this->searchAuthorLabel->AutoSize = true;
			this->searchAuthorLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchAuthorLabel->Location = System::Drawing::Point(3, 64);
			this->searchAuthorLabel->Name = L"searchAuthorLabel";
			this->searchAuthorLabel->Size = System::Drawing::Size(56, 16);
			this->searchAuthorLabel->TabIndex = 4;
			this->searchAuthorLabel->Text = L"Author:";
			// 
			// searchAuthorAdjustLabel
			// 
			this->searchAuthorAdjustLabel->AutoSize = true;
			this->searchAuthorAdjustLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->searchAuthorAdjustLabel->Location = System::Drawing::Point(81, 64);
			this->searchAuthorAdjustLabel->Name = L"searchAuthorAdjustLabel";
			this->searchAuthorAdjustLabel->Padding = System::Windows::Forms::Padding(0, 0, 15, 0);
			this->searchAuthorAdjustLabel->Size = System::Drawing::Size(190, 32);
			this->searchAuthorAdjustLabel->TabIndex = 5;
			this->searchAuthorAdjustLabel->Text = L"Hoang-Vu Le\nHCMC University of Science";
			// 
			// addTab
			// 
			this->addTab->BackColor = System::Drawing::SystemColors::Control;
			this->addTab->Controls->Add(this->addAnounce);
			this->addTab->Controls->Add(this->addOkButton);
			this->addTab->Controls->Add(this->addUsageLabel);
			this->addTab->Controls->Add(this->addUsageTextBox);
			this->addTab->Controls->Add(this->addOriginLabel);
			this->addTab->Controls->Add(this->addOriginTextBox);
			this->addTab->Controls->Add(this->addMeaningLable);
			this->addTab->Controls->Add(this->addMeaningTextBox);
			this->addTab->Controls->Add(this->addWordLabel);
			this->addTab->Controls->Add(this->addWordTextBox);
			this->addTab->Controls->Add(this->addAppLabel);
			this->addTab->Location = System::Drawing::Point(4, 22);
			this->addTab->Name = L"addTab";
			this->addTab->Padding = System::Windows::Forms::Padding(3);
			this->addTab->Size = System::Drawing::Size(476, 294);
			this->addTab->TabIndex = 1;
			this->addTab->Text = L"Add";
			this->addTab->Click += gcnew System::EventHandler(this, &Main::addTab_click);
			this->addTab->Enter += gcnew System::EventHandler(this, &Main::addTab_click);
			// 
			// addAnounce
			// 
			this->addAnounce->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->addAnounce->AutoSize = true;
			this->addAnounce->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->addAnounce->Location = System::Drawing::Point(346, 79);
			this->addAnounce->Name = L"addAnounce";
			this->addAnounce->Size = System::Drawing::Size(78, 13);
			this->addAnounce->TabIndex = 15;
			this->addAnounce->Text = L"addAnounce";
			this->addAnounce->Visible = false;
			// 
			// addOkButton
			// 
			this->addOkButton->Location = System::Drawing::Point(349, 265);
			this->addOkButton->Name = L"addOkButton";
			this->addOkButton->Size = System::Drawing::Size(75, 23);
			this->addOkButton->TabIndex = 4;
			this->addOkButton->Text = L"OK";
			this->addOkButton->UseVisualStyleBackColor = true;
			this->addOkButton->Click += gcnew System::EventHandler(this, &Main::addOkButton_click);
			// 
			// addUsageLabel
			// 
			this->addUsageLabel->AutoSize = true;
			this->addUsageLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addUsageLabel->Location = System::Drawing::Point(49, 234);
			this->addUsageLabel->Name = L"addUsageLabel";
			this->addUsageLabel->Size = System::Drawing::Size(52, 16);
			this->addUsageLabel->TabIndex = 3;
			this->addUsageLabel->Text = L"Usage:";
			// 
			// addUsageTextBox
			// 
			this->addUsageTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addUsageTextBox->Location = System::Drawing::Point(118, 234);
			this->addUsageTextBox->Name = L"addUsageTextBox";
			this->addUsageTextBox->Size = System::Drawing::Size(306, 22);
			this->addUsageTextBox->TabIndex = 3;
			// 
			// addOriginLabel
			// 
			this->addOriginLabel->AutoSize = true;
			this->addOriginLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addOriginLabel->Location = System::Drawing::Point(49, 206);
			this->addOriginLabel->Name = L"addOriginLabel";
			this->addOriginLabel->Size = System::Drawing::Size(46, 16);
			this->addOriginLabel->TabIndex = 3;
			this->addOriginLabel->Text = L"Origin:";
			// 
			// addOriginTextBox
			// 
			this->addOriginTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->addOriginTextBox->Location = System::Drawing::Point(118, 206);
			this->addOriginTextBox->Name = L"addOriginTextBox";
			this->addOriginTextBox->Size = System::Drawing::Size(306, 22);
			this->addOriginTextBox->TabIndex = 2;
			// 
			// addMeaningLable
			// 
			this->addMeaningLable->AutoSize = true;
			this->addMeaningLable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addMeaningLable->Location = System::Drawing::Point(49, 122);
			this->addMeaningLable->Name = L"addMeaningLable";
			this->addMeaningLable->Size = System::Drawing::Size(63, 16);
			this->addMeaningLable->TabIndex = 3;
			this->addMeaningLable->Text = L"Meaning:";
			// 
			// addMeaningTextBox
			// 
			this->addMeaningTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->addMeaningTextBox->Location = System::Drawing::Point(118, 122);
			this->addMeaningTextBox->Multiline = true;
			this->addMeaningTextBox->Name = L"addMeaningTextBox";
			this->addMeaningTextBox->Size = System::Drawing::Size(306, 78);
			this->addMeaningTextBox->TabIndex = 1;
			// 
			// addWordLabel
			// 
			this->addWordLabel->AutoSize = true;
			this->addWordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addWordLabel->Location = System::Drawing::Point(48, 76);
			this->addWordLabel->Name = L"addWordLabel";
			this->addWordLabel->Size = System::Drawing::Size(113, 16);
			this->addWordLabel->TabIndex = 3;
			this->addWordLabel->Text = L"Type a new word:";
			// 
			// addWordTextBox
			// 
			this->addWordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addWordTextBox->Location = System::Drawing::Point(51, 94);
			this->addWordTextBox->Name = L"addWordTextBox";
			this->addWordTextBox->Size = System::Drawing::Size(373, 22);
			this->addWordTextBox->TabIndex = 0;
			this->addWordTextBox->TextChanged += gcnew System::EventHandler(this, &Main::addWordTextBox_textChanged);
			// 
			// addAppLabel
			// 
			this->addAppLabel->AutoSize = true;
			this->addAppLabel->Font = (gcnew System::Drawing::Font(L"Mistral", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addAppLabel->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->addAppLabel->Location = System::Drawing::Point(41, 18);
			this->addAppLabel->Name = L"addAppLabel";
			this->addAppLabel->Size = System::Drawing::Size(383, 57);
			this->addAppLabel->TabIndex = 1;
			this->addAppLabel->Text = L"ENGLISH DICTIONARY";
			this->addAppLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// modifyTab
			// 
			this->modifyTab->BackColor = System::Drawing::SystemColors::Control;
			this->modifyTab->Controls->Add(this->modifyAnounce);
			this->modifyTab->Controls->Add(this->modifyOkButton);
			this->modifyTab->Controls->Add(this->modifyUsageLabel);
			this->modifyTab->Controls->Add(this->modifyUsageTextBox);
			this->modifyTab->Controls->Add(this->modifyOriginLabel);
			this->modifyTab->Controls->Add(this->modifyOriginTextBox);
			this->modifyTab->Controls->Add(this->modifyMeaningLabel);
			this->modifyTab->Controls->Add(this->modifyMeaningTextBox);
			this->modifyTab->Controls->Add(this->modifyWordLabel);
			this->modifyTab->Controls->Add(this->modifyWordTextBox);
			this->modifyTab->Controls->Add(this->modifyAppLabel);
			this->modifyTab->Location = System::Drawing::Point(4, 22);
			this->modifyTab->Name = L"modifyTab";
			this->modifyTab->Padding = System::Windows::Forms::Padding(3, 3, 45, 3);
			this->modifyTab->Size = System::Drawing::Size(476, 294);
			this->modifyTab->TabIndex = 2;
			this->modifyTab->Text = L"Modify";
			this->modifyTab->Click += gcnew System::EventHandler(this, &Main::modifyTab_click);
			this->modifyTab->Enter += gcnew System::EventHandler(this, &Main::modifyTab_click);
			// 
			// modifyAnounce
			// 
			this->modifyAnounce->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->modifyAnounce->AutoSize = true;
			this->modifyAnounce->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->modifyAnounce->Location = System::Drawing::Point(333, 79);
			this->modifyAnounce->Name = L"modifyAnounce";
			this->modifyAnounce->Size = System::Drawing::Size(93, 13);
			this->modifyAnounce->TabIndex = 14;
			this->modifyAnounce->Text = L"modifyAnounce";
			this->modifyAnounce->Visible = false;
			// 
			// modifyOkButton
			// 
			this->modifyOkButton->Location = System::Drawing::Point(349, 265);
			this->modifyOkButton->Name = L"modifyOkButton";
			this->modifyOkButton->Size = System::Drawing::Size(75, 23);
			this->modifyOkButton->TabIndex = 4;
			this->modifyOkButton->Text = L"OK";
			this->modifyOkButton->UseVisualStyleBackColor = true;
			this->modifyOkButton->Click += gcnew System::EventHandler(this, &Main::modifyOkButton_click);
			// 
			// modifyUsageLabel
			// 
			this->modifyUsageLabel->AutoSize = true;
			this->modifyUsageLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->modifyUsageLabel->Location = System::Drawing::Point(49, 234);
			this->modifyUsageLabel->Name = L"modifyUsageLabel";
			this->modifyUsageLabel->Size = System::Drawing::Size(52, 16);
			this->modifyUsageLabel->TabIndex = 8;
			this->modifyUsageLabel->Text = L"Usage:";
			// 
			// modifyUsageTextBox
			// 
			this->modifyUsageTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->modifyUsageTextBox->Location = System::Drawing::Point(118, 234);
			this->modifyUsageTextBox->Name = L"modifyUsageTextBox";
			this->modifyUsageTextBox->Size = System::Drawing::Size(306, 22);
			this->modifyUsageTextBox->TabIndex = 3;
			// 
			// modifyOriginLabel
			// 
			this->modifyOriginLabel->AutoSize = true;
			this->modifyOriginLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->modifyOriginLabel->Location = System::Drawing::Point(49, 206);
			this->modifyOriginLabel->Name = L"modifyOriginLabel";
			this->modifyOriginLabel->Size = System::Drawing::Size(46, 16);
			this->modifyOriginLabel->TabIndex = 10;
			this->modifyOriginLabel->Text = L"Origin:";
			// 
			// modifyOriginTextBox
			// 
			this->modifyOriginTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->modifyOriginTextBox->Location = System::Drawing::Point(118, 206);
			this->modifyOriginTextBox->Name = L"modifyOriginTextBox";
			this->modifyOriginTextBox->Size = System::Drawing::Size(306, 22);
			this->modifyOriginTextBox->TabIndex = 2;
			// 
			// modifyMeaningLabel
			// 
			this->modifyMeaningLabel->AutoSize = true;
			this->modifyMeaningLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->modifyMeaningLabel->Location = System::Drawing::Point(49, 122);
			this->modifyMeaningLabel->Name = L"modifyMeaningLabel";
			this->modifyMeaningLabel->Size = System::Drawing::Size(63, 16);
			this->modifyMeaningLabel->TabIndex = 11;
			this->modifyMeaningLabel->Text = L"Meaning:";
			// 
			// modifyMeaningTextBox
			// 
			this->modifyMeaningTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->modifyMeaningTextBox->Location = System::Drawing::Point(118, 122);
			this->modifyMeaningTextBox->Multiline = true;
			this->modifyMeaningTextBox->Name = L"modifyMeaningTextBox";
			this->modifyMeaningTextBox->Size = System::Drawing::Size(306, 78);
			this->modifyMeaningTextBox->TabIndex = 1;
			// 
			// modifyWordLabel
			// 
			this->modifyWordLabel->AutoSize = true;
			this->modifyWordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modifyWordLabel->Location = System::Drawing::Point(48, 76);
			this->modifyWordLabel->Name = L"modifyWordLabel";
			this->modifyWordLabel->Size = System::Drawing::Size(101, 16);
			this->modifyWordLabel->TabIndex = 12;
			this->modifyWordLabel->Text = L"Word to modify:";
			// 
			// modifyWordTextBox
			// 
			this->modifyWordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->modifyWordTextBox->Location = System::Drawing::Point(51, 94);
			this->modifyWordTextBox->Name = L"modifyWordTextBox";
			this->modifyWordTextBox->Size = System::Drawing::Size(373, 22);
			this->modifyWordTextBox->TabIndex = 0;
			this->modifyWordTextBox->TextChanged += gcnew System::EventHandler(this, &Main::modifyWordTextBox_textChanged);
			// 
			// modifyAppLabel
			// 
			this->modifyAppLabel->AutoSize = true;
			this->modifyAppLabel->Font = (gcnew System::Drawing::Font(L"Mistral", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modifyAppLabel->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->modifyAppLabel->Location = System::Drawing::Point(41, 18);
			this->modifyAppLabel->Name = L"modifyAppLabel";
			this->modifyAppLabel->Size = System::Drawing::Size(383, 57);
			this->modifyAppLabel->TabIndex = 6;
			this->modifyAppLabel->Text = L"ENGLISH DICTIONARY";
			this->modifyAppLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// removeTab
			// 
			this->removeTab->BackColor = System::Drawing::SystemColors::Control;
			this->removeTab->Controls->Add(this->panel1);
			this->removeTab->Controls->Add(this->removeButton);
			this->removeTab->Controls->Add(this->removeWordLabel);
			this->removeTab->Controls->Add(this->removeWordTextBox);
			this->removeTab->Controls->Add(this->label13);
			this->removeTab->Location = System::Drawing::Point(4, 22);
			this->removeTab->Name = L"removeTab";
			this->removeTab->Padding = System::Windows::Forms::Padding(3);
			this->removeTab->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->removeTab->Size = System::Drawing::Size(476, 294);
			this->removeTab->TabIndex = 4;
			this->removeTab->Text = L"Remove";
			this->removeTab->Click += gcnew System::EventHandler(this, &Main::removeTab_click);
			this->removeTab->Enter += gcnew System::EventHandler(this, &Main::removeTab_click);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->removeTableLayout);
			this->panel1->Location = System::Drawing::Point(51, 122);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(373, 137);
			this->panel1->TabIndex = 6;
			// 
			// removeTableLayout
			// 
			this->removeTableLayout->ColumnCount = 2;
			this->removeTableLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20.91153F)));
			this->removeTableLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				79.08847F)));
			this->removeTableLayout->Controls->Add(this->removeMeaningLabel, 0, 0);
			this->removeTableLayout->Controls->Add(this->removeMeaningAdjustLabel, 1, 0);
			this->removeTableLayout->Controls->Add(this->removeOriginLabel, 0, 1);
			this->removeTableLayout->Controls->Add(this->removeOriginAdjustLabel, 1, 1);
			this->removeTableLayout->Controls->Add(this->removeUsageLabel, 0, 2);
			this->removeTableLayout->Controls->Add(this->removeUsageAdjustLabel, 1, 2);
			this->removeTableLayout->Location = System::Drawing::Point(0, -1);
			this->removeTableLayout->Name = L"removeTableLayout";
			this->removeTableLayout->RowCount = 3;
			this->removeTableLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->removeTableLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->removeTableLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->removeTableLayout->Size = System::Drawing::Size(373, 133);
			this->removeTableLayout->TabIndex = 1;
			// 
			// removeMeaningLabel
			// 
			this->removeMeaningLabel->AutoSize = true;
			this->removeMeaningLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->removeMeaningLabel->Location = System::Drawing::Point(3, 0);
			this->removeMeaningLabel->Name = L"removeMeaningLabel";
			this->removeMeaningLabel->Size = System::Drawing::Size(71, 16);
			this->removeMeaningLabel->TabIndex = 0;
			this->removeMeaningLabel->Text = L"Meaning:";
			this->removeMeaningLabel->Visible = false;
			// 
			// removeMeaningAdjustLabel
			// 
			this->removeMeaningAdjustLabel->AutoSize = true;
			this->removeMeaningAdjustLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->removeMeaningAdjustLabel->Location = System::Drawing::Point(81, 0);
			this->removeMeaningAdjustLabel->Name = L"removeMeaningAdjustLabel";
			this->removeMeaningAdjustLabel->Padding = System::Windows::Forms::Padding(0, 0, 15, 0);
			this->removeMeaningAdjustLabel->Size = System::Drawing::Size(75, 16);
			this->removeMeaningAdjustLabel->TabIndex = 1;
			this->removeMeaningAdjustLabel->Text = L"meaning";
			this->removeMeaningAdjustLabel->Visible = false;
			// 
			// removeOriginLabel
			// 
			this->removeOriginLabel->AutoSize = true;
			this->removeOriginLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->removeOriginLabel->Location = System::Drawing::Point(3, 16);
			this->removeOriginLabel->Name = L"removeOriginLabel";
			this->removeOriginLabel->Size = System::Drawing::Size(53, 16);
			this->removeOriginLabel->TabIndex = 2;
			this->removeOriginLabel->Text = L"Origin:";
			this->removeOriginLabel->Visible = false;
			// 
			// removeOriginAdjustLabel
			// 
			this->removeOriginAdjustLabel->AutoSize = true;
			this->removeOriginAdjustLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->removeOriginAdjustLabel->Location = System::Drawing::Point(81, 16);
			this->removeOriginAdjustLabel->Name = L"removeOriginAdjustLabel";
			this->removeOriginAdjustLabel->Padding = System::Windows::Forms::Padding(0, 0, 15, 0);
			this->removeOriginAdjustLabel->Size = System::Drawing::Size(56, 16);
			this->removeOriginAdjustLabel->TabIndex = 3;
			this->removeOriginAdjustLabel->Text = L"origin";
			this->removeOriginAdjustLabel->Visible = false;
			// 
			// removeUsageLabel
			// 
			this->removeUsageLabel->AutoSize = true;
			this->removeUsageLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->removeUsageLabel->Location = System::Drawing::Point(3, 32);
			this->removeUsageLabel->Name = L"removeUsageLabel";
			this->removeUsageLabel->Size = System::Drawing::Size(58, 16);
			this->removeUsageLabel->TabIndex = 4;
			this->removeUsageLabel->Text = L"Usage:";
			this->removeUsageLabel->Visible = false;
			// 
			// removeUsageAdjustLabel
			// 
			this->removeUsageAdjustLabel->AutoSize = true;
			this->removeUsageAdjustLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->removeUsageAdjustLabel->Location = System::Drawing::Point(81, 32);
			this->removeUsageAdjustLabel->Name = L"removeUsageAdjustLabel";
			this->removeUsageAdjustLabel->Padding = System::Windows::Forms::Padding(0, 0, 15, 0);
			this->removeUsageAdjustLabel->Size = System::Drawing::Size(61, 16);
			this->removeUsageAdjustLabel->TabIndex = 5;
			this->removeUsageAdjustLabel->Text = L"usage";
			this->removeUsageAdjustLabel->Visible = false;
			// 
			// removeButton
			// 
			this->removeButton->Location = System::Drawing::Point(349, 265);
			this->removeButton->Name = L"removeButton";
			this->removeButton->Size = System::Drawing::Size(75, 23);
			this->removeButton->TabIndex = 5;
			this->removeButton->Text = L"Remove";
			this->removeButton->UseVisualStyleBackColor = true;
			this->removeButton->Click += gcnew System::EventHandler(this, &Main::removeButton_click);
			// 
			// removeWordLabel
			// 
			this->removeWordLabel->AutoSize = true;
			this->removeWordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->removeWordLabel->Location = System::Drawing::Point(48, 76);
			this->removeWordLabel->Name = L"removeWordLabel";
			this->removeWordLabel->Size = System::Drawing::Size(107, 16);
			this->removeWordLabel->TabIndex = 3;
			this->removeWordLabel->Text = L"Word to remove:";
			// 
			// removeWordTextBox
			// 
			this->removeWordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->removeWordTextBox->Location = System::Drawing::Point(51, 94);
			this->removeWordTextBox->Name = L"removeWordTextBox";
			this->removeWordTextBox->Size = System::Drawing::Size(373, 22);
			this->removeWordTextBox->TabIndex = 0;
			this->removeWordTextBox->TextChanged += gcnew System::EventHandler(this, &Main::removeWordTextBox_textChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Mistral", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label13->Location = System::Drawing::Point(41, 18);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(383, 57);
			this->label13->TabIndex = 0;
			this->label13->Text = L"ENGLISH DICTIONARY";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(397, 326);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(75, 23);
			this->saveButton->TabIndex = 6;
			this->saveButton->Text = L"Save";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &Main::saveButton_click);
			// 
			// loadButton
			// 
			this->loadButton->Location = System::Drawing::Point(16, 326);
			this->loadButton->Name = L"loadButton";
			this->loadButton->Size = System::Drawing::Size(75, 23);
			this->loadButton->TabIndex = 5;
			this->loadButton->Text = L"Load";
			this->loadButton->UseVisualStyleBackColor = true;
			this->loadButton->Click += gcnew System::EventHandler(this, &Main::loadButton_click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 361);
			this->Controls->Add(this->tabControl);
			this->Controls->Add(this->loadButton);
			this->Controls->Add(this->saveButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"English Dictionary";
			this->tabControl->ResumeLayout(false);
			this->searchTab->ResumeLayout(false);
			this->searchTab->PerformLayout();
			this->searchTableLayout->ResumeLayout(false);
			this->searchTableLayout->PerformLayout();
			this->addTab->ResumeLayout(false);
			this->addTab->PerformLayout();
			this->modifyTab->ResumeLayout(false);
			this->modifyTab->PerformLayout();
			this->removeTab->ResumeLayout(false);
			this->removeTab->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->removeTableLayout->ResumeLayout(false);
			this->removeTableLayout->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void searchTextBox_textChanged(System::Object^  sender, System::EventArgs^  e) {
		this->searchTextBox->AcceptsReturn = true;

		this->searchVersionLabel->Visible = false;
		this->searchVersionAdjustLabel->Visible = false;
		this->searchAuthorLabel->Visible = false;
		this->searchAuthorAdjustLabel->Visible = false;
		this->searchMeaningLabel->Visible = false;
		this->searchMeaningAdjustLabel->Visible = false;
		this->searchOriginLabel->Visible = false;
		this->searchOriginAdjustLabel->Visible = false;
		this->searchUsageLabel->Visible = false;
		this->searchUsageAdjustLabel->Visible = false;

		this->searchTableLayout->AutoScroll = false;
		this->searchTableLayout->HorizontalScroll->Enabled = false;
		this->searchTableLayout->HorizontalScroll->Visible = false;
		this->searchTableLayout->HorizontalScroll->Maximum = 0;
		this->searchTableLayout->AutoScroll = true;

		std::string text = msclr::interop::marshal_as<std::string>(this->searchTextBox->Text);

		Expression result;
		if (text.length() == 0)
		{
			this->searchMeaningLabel->Visible = false;
			this->searchMeaningAdjustLabel->Visible = false;
			this->searchVersionLabel->Visible = true;
			this->searchVersionAdjustLabel->Visible = true;
			this->searchAuthorLabel->Visible = true;
			this->searchAuthorAdjustLabel->Visible = true;
		}
		else if (this->myDict->search(text, result))
		{
			this->searchMeaningLabel->Visible = true;
			this->searchMeaningAdjustLabel->Visible = true;
			this->searchMeaningAdjustLabel->Text = gcnew System::String((result.getDefinition() + ".").c_str());

			if (result.getOrigin().length() > 0)
			{
				this->searchOriginLabel->Visible = true;
				this->searchOriginAdjustLabel->Visible = true;
				this->searchOriginAdjustLabel->Text = gcnew System::String((result.getOrigin() + ".").c_str());
			}

			if (result.getUsage().length() > 0)
			{
				this->searchUsageLabel->Visible = true;
				this->searchUsageAdjustLabel->Visible = true;
				this->searchUsageAdjustLabel->Text = gcnew System::String((result.getUsage() + ".").c_str());
			}
		}
		else
		{
			this->searchMeaningLabel->Visible = true;
			this->searchMeaningAdjustLabel->Visible = true;
			this->searchMeaningAdjustLabel->Text = gcnew System::String("Not Found!");
		}
	}

	private: System::Void loadButton_click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog openfile;
		openfile.Filter = "txt files (*.txt)|*.txt";
		openfile.FilterIndex = 1;
		openfile.RestoreDirectory = true;

		if (openfile.ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			std::string filename = msclr::interop::marshal_as<std::string>(openfile.FileName);
			this->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->myDict->load(filename);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			MessageBox::Show("Successful!", "Information", MessageBoxButtons::OK, MessageBoxIcon::None);
		}
	}
	private: System::Void saveButton_click(System::Object^  sender, System::EventArgs^  e) {
		SaveFileDialog savefile;
		savefile.Filter = "txt files (*.txt)|*.txt";
		savefile.FilterIndex = 1;
		savefile.RestoreDirectory = true;

		if (savefile.ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			std::string filename = msclr::interop::marshal_as<std::string>(savefile.FileName);
			this->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			myDict->save(filename);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			MessageBox::Show("Successful!", "Information", MessageBoxButtons::OK, MessageBoxIcon::None);
		}
	}

	private: System::Void modifyWordTextBox_textChanged(System::Object^  sender, System::EventArgs^  e) {
		this->modifyAnounce->Visible = false;
		std::string text = msclr::interop::marshal_as<std::string>(this->modifyWordTextBox->Text);
		Expression result;
		if (this->myDict->search(text, result))
		{
			modifyAnounce->Visible = true;
			modifyAnounce->ForeColor = System::Drawing::Color::Green;
			modifyAnounce->Text = "Word found!";
			modifyMeaningTextBox->Text = gcnew System::String(result.getDefinition().c_str());
			modifyOriginTextBox->Text = gcnew System::String(result.getOrigin().c_str());
			modifyUsageTextBox->Text = gcnew System::String(result.getUsage().c_str());
		}
		else
		{
			modifyAnounce->Visible = true;
			modifyAnounce->ForeColor = System::Drawing::Color::Red;
			modifyAnounce->Text = "Word not found!";
			modifyMeaningTextBox->Text = "";
			modifyOriginTextBox->Text = "";
			modifyUsageTextBox->Text = "";
		}
	}

	private: System::Void addTab_click(System::Object^  sender, System::EventArgs^  e) {
		this->AcceptButton = addOkButton;
	}
	private: System::Void modifyTab_click(System::Object^  sender, System::EventArgs^  e) {
		this->AcceptButton = modifyOkButton;
	}
	private: System::Void addOkButton_click(System::Object^  sender, System::EventArgs^  e) {
		this->addWordTextBox->AcceptsReturn = false;
		this->AcceptButton = addOkButton;

		std::string word = msclr::interop::marshal_as<std::string>(addWordTextBox->Text);
		std::string definition = msclr::interop::marshal_as<std::string>(addMeaningTextBox->Text);
		std::string origin = msclr::interop::marshal_as<std::string>(addOriginTextBox->Text);
		std::string usage = msclr::interop::marshal_as<std::string>(addUsageTextBox->Text);

		if (word.length() == 0)
		{
			MessageBox::Show("Type word!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		else if (myDict->search(word))
		{
			MessageBox::Show("Word exist!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		else if (definition.length() == 0)
		{
			MessageBox::Show("Type meaning!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
			
		Expression newExpression(word, definition, origin, usage);
		this->myDict->insert(newExpression.getExpression());
		MessageBox::Show("Successful!", "Information", MessageBoxButtons::OK, MessageBoxIcon::None);

		addWordTextBox->Text = "";
		addMeaningTextBox->Text = "";
		addOriginTextBox->Text = "";
		addUsageTextBox->Text = "";
	}

	private: System::Void addWordTextBox_textChanged(System::Object^  sender, System::EventArgs^  e) {
		std::string text = msclr::interop::marshal_as<std::string>(this->addWordTextBox->Text);
		if (text.length() == 0)
		{
			this->addAnounce->Visible = false;
		}
		else
		if (this->myDict->search(text))
		{
			addAnounce->Visible = true;
			addAnounce->ForeColor = System::Drawing::Color::Red;
			addAnounce->Text = "Word exist!";
		}
		else
		{
			addAnounce->Visible = true;
			addAnounce->ForeColor = System::Drawing::Color::Green;
			addAnounce->Text = "New word!";
		}
	}

	private: System::Void modifyOkButton_click(System::Object^  sender, System::EventArgs^  e) {
		this->modifyWordTextBox->AcceptsReturn = false;
		this->AcceptButton = modifyOkButton;

		std::string word = msclr::interop::marshal_as<std::string>(modifyWordTextBox->Text);
		std::string definition = msclr::interop::marshal_as<std::string>(modifyMeaningTextBox->Text);
		std::string origin = msclr::interop::marshal_as<std::string>(modifyOriginTextBox->Text);
		std::string usage = msclr::interop::marshal_as<std::string>(modifyUsageTextBox->Text);

		if (word.length() == 0)
		{
			MessageBox::Show("Type word!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		else if (!myDict->search(word))
		{
			MessageBox::Show("Word not found!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		else if (definition.length() == 0)
		{
			MessageBox::Show("Type meaning!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		this->myDict->modifyDefinition(word, definition);
		if (origin.length() != 0)
		{
			this->myDict->modifyOrigin(word, origin);
		}
		if (usage.length() != 0)
		{
			this->myDict->modifyUsage(word, usage);
		}
		MessageBox::Show("Successful!", "Information", MessageBoxButtons::OK, MessageBoxIcon::None);
	}

	private: System::Void removeWordTextBox_textChanged(System::Object^  sender, System::EventArgs^  e) {
		this->AcceptButton = removeButton;
		this->removeWordTextBox->AcceptsReturn = false;

		this->removeMeaningLabel->Visible = false;
		this->removeMeaningAdjustLabel->Visible = false;
		this->removeOriginLabel->Visible = false;
		this->removeOriginAdjustLabel->Visible = false;
		this->removeUsageLabel->Visible = false;
		this->removeUsageAdjustLabel->Visible = false;

		this->removeTableLayout->AutoScroll = false;
		this->removeTableLayout->HorizontalScroll->Enabled = false;
		this->removeTableLayout->HorizontalScroll->Visible = false;
		this->removeTableLayout->HorizontalScroll->Maximum = 0;
		this->removeTableLayout->AutoScroll = true;

		std::string text = msclr::interop::marshal_as<std::string>(this->removeWordTextBox->Text);

		Expression result;
		if (text.length() == 0)
		{
			this->removeMeaningLabel->Visible = false;
			this->removeMeaningAdjustLabel->Visible = false;
		}
		else if (this->myDict->search(text, result))
		{
			this->removeMeaningLabel->Visible = true;
			this->removeMeaningAdjustLabel->Visible = true;
			this->removeMeaningAdjustLabel->Text = gcnew System::String((result.getDefinition() + ".").c_str());

			if (result.getOrigin().length() > 0)
			{
				this->removeOriginLabel->Visible = true;
				this->removeOriginAdjustLabel->Visible = true;
				this->removeOriginAdjustLabel->Text = gcnew System::String((result.getOrigin() + ".").c_str());
			}

			if (result.getUsage().length() > 0)
			{
				this->removeUsageLabel->Visible = true;
				this->removeUsageAdjustLabel->Visible = true;
				this->removeUsageAdjustLabel->Text = gcnew System::String((result.getUsage() + ".").c_str());
			}
		}
		else
		{
			this->removeMeaningLabel->Visible = true;
			this->removeMeaningAdjustLabel->Visible = true;
			this->removeMeaningAdjustLabel->Text = gcnew System::String("Not Found!");
		}
	}
	private: System::Void removeTab_click(System::Object^  sender, System::EventArgs^  e) {
		this->AcceptButton = removeButton;
	}
	private: System::Void removeButton_click(System::Object^  sender, System::EventArgs^  e) {
		std::string word = msclr::interop::marshal_as<std::string>(this->removeWordTextBox->Text);
		if (this->myDict->search(word))
		{
			auto result = MessageBox::Show("Are you sure to remove this word?", "Notice", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
			if (result == System::Windows::Forms::DialogResult::Yes)
			{
				this->myDict->remove(word);
				MessageBox::Show("Successful!", "Information", MessageBoxButtons::OK, MessageBoxIcon::None);
				this->removeWordTextBox->Text = "";
			}
		}
		else
		{
			MessageBox::Show("Word not found!", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
};
}
