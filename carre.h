/// <summary>
/// TP Animation de carre version C++.net visual Studio 2017
/// rev 2024
/// VERSION ELEVE a completer
/// </summary>

using namespace System;
using namespace System::Drawing;

/// <summary>
/// Carré de couleur
/// </summary>
ref class CCarre
{
private:
	int cote;
	int sx;
	int sy;
	Color color;
	int dx;
	int dy;
public:
	CCarre()
	{
		sx = 10;
		sy = 10;
		cote = 20;
		color = Color::Red;
	}

	/// <summary>
	/// initialise m_x privé
	/// </summary>
	/// <param name="x">Position x du carré</param>
	void Setsx(int x1)
	{
		// A COMPLETER ///////////////////////////////////////////////////////////////////////////
		this->sx = x1;
	}

	/// <summary>
	/// retourne m_x privé
	/// </summary>
	/// <returns>Position x du carré</returns>
	int Getsx()
	{
		// A COMPLETER ///////////////////////////////////////////////////////////////////////
		return this->sx; // a modifier
	}

	/// <summary>
	/// initialise m_y privé
	/// </summary>
	/// <param name="y">Position y du carré</param>
	void Setsy(int y1)
	{
		// A COMPLETER //////////////////////////////////////////////////////////////////////////
		this->sy = y1;
	}

	/// <summary>
	/// retourne m_y privé
	/// </summary>
	/// <returns>Position y du carré</returns>
	int Getsy()
	{
		// A COMPLETER //////////////////////////////////////////////////////////////////////
		return this->sy; // a modifier
	}


	/// <summary>
	/// initialise m_color privé
	/// </summary>
	/// <param name="couleur">Couleur du carré</param>
	void SetColor(Color couleur)
	{
		color = couleur;
	}

	/// <summary>
	/// initialise m_cote privé
	/// </summary>
	/// <param name="cote">Coté du carré</param>
	void SetCote(int cote)
	{
		// A COMPLETER /////////////////////////////////////////////////////////////////////////
		this->cote = cote;
	}

	/// <summary>
	/// retourne m_cote privé
	/// </summary>
	/// <returns>Coté du carré</returns>
	int GetCote()
	{
		// A COMPLETER ////////////////////////////////////////////////////////////////////////
		return this->cote; // a modifier
	}

	/// <summary>
	/// Déplace le carré suivant un vecteur déplacelent dx et dy
	/// </summary>
	/// <param name="dx">Valeur dx du déplacement</param>
	/// <param name="dy">Valeur dy du déplacement</param>
	void Deplacer(int dx, int dy)
	{
		// A COMPLETER /////////////////////////////////////////////////////////////////////
		this->sx += dx;
		this->sy += dy;
	}

	/// <summary>
	/// Dessine le carré 
	/// </summary>
	/// <param name="form">pointeur sur la fenêtre dans laquelle on dessine.</param>
	void Dessiner(System::Windows::Forms::Form^ form)
	{
		Graphics^ g = form->CreateGraphics();
		g->FillRectangle(gcnew SolidBrush(color), sx, sy, cote, cote);
	}

	/// <summary>
	/// Efface le carré 
	/// </summary>
	/// <param name="form">pointeur sur la fenêtre dans laquelle on dessine.</param>
	void Effacer(System::Windows::Forms::Form^ form)
	{
		Graphics^ g = form->CreateGraphics();
		g->FillRectangle(gcnew SolidBrush(form->BackColor), sx, sy, cote, cote);
	}

	void Animer(int dx, int dy, System::Windows::Forms::Form^ form)
	{
		this->Effacer(form);
		this->Deplacer(dx, dy);
		this->Dessiner(form);
	}
};