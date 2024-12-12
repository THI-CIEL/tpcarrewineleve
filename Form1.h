/// TP Animation de carre version C++.net visual Studio 2017
/// rev 2024
/// VERSION ELEVE a completer

#pragma once
#include "carre.h"

namespace tpcarrewineleve {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// Form1 est une fenêtre avec un carré rouge
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			pcarre1 = gcnew CCarre();
			pcarre1->SetColor(Color::Red);
			void Setsx(unsigned int new_x);
			void Setsy(unsigned int new_y);
			void SetCote(unsigned int new_cote);
			this->timer1->Enabled = true;
			largeur = this->ClientRectangle.Width;
			hauteur = this->ClientRectangle.Height;

		}
	protected:
		/// Nettoyage des ressources utilisées.
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;
	private:
		/// Le Carré numéro 1.
		CCarre ^pcarre1;
		/// Largeur de la fenêtre
		int largeur;
		/// Hauteur de la fenêtre
		int hauteur;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// timer1
			this->timer1->Interval = 25;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// Form1
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
		{
		pcarre1->Animer();
		 }
	};
}

