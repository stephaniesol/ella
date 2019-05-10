#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;


ref class Datenbank
{
private:
	int nk_kdnr;
public:
	Datenbank();
	~Datenbank();

	array<String ^> ^ kd_suchen(String ^ knr);
	void schreiben(String ^, String ^, String ^, String ^, String ^, String ^, String ^);

};

