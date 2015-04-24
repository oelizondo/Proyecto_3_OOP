class Reloj
{
	public:
		hrIni();
		hrIni(int hora, int minu);
		int getHora();
		int getMinu();
		void setHora(int hh);
		void setMinu(int mm);
		void muestra();
		bool operator >= (Reloj horaEntrada, Reloj horaSalida);
		Reloj operator-(Reloj horaSalida);
		
	private:
		int hora, minu;
};
Reloj::hrIni()
{
	hora = 12;
	minu = 0;
}
Reloj::hrIni(int hora, int minu)
{
	this->hora = hora;
	this->minu = minu;
}
int Reloj::getHora()
{
	return hora;
}
int Reloj::getMinu()
{
	return minu;
}
void Reloj::setHora(int hh)
{
	this->hora = hh;
}
void Reloj::setMinu(int mm)
{
	this->minu = mm;
}
void Reloj::muestra()
{
	if(hora < 10 && minu < 10)
	{
		cout << "0" << hora << ":" << "0" << minu << endl;
	}
	else if (hora < 10 && minu > 10)
	{
		cout << "0" << hora << ":" << minu << endl;
	}
	else if (hora > 10 && minu > 10)
	{
		cout << hora << minu << endl;
	}
	else
	{
		cout << hora << "0" << minu << endl;
	}
}