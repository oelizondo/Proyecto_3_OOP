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
    bool operator - (Reloj horaEntrada, Reloj horaSalida);
    bool operator ==(Reloj horaEntrada, Reloj horaSalida);
    Reloj operator-(Reloj horaSalida);
    friend ostream & operator <<(ostream &os, Reloj r);
    friend istream & operator >>(istream &is, Reloj &r);
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

bool Reloj :: operator >= (Reloj horaEntrada, Reloj horaSalida )
{
    if( horaEntrada.hora > horaSalida.hora)
    {
        return true;
        
    }
    else{
        return false;
    }
}

bool Reloj :: operator - (Reloj horaEntrada, Reloj horaSalida)
{
    Reloj rNuevo();
    rNuevo().setHora(horaSalida.hora - horaEntrada.hora);
}

bool Reloj :: operator== (Reloj horaEntrada, Reloj horaSalida)
{
    return  hora == horaEntrada.getHora() && minu == horaSalida.getMinu();
}

ostream& operator <<(ostream &os, Reloj r)
{

    if(hh <10 && mm < 10)
        os << "0"  << hh << ":" << "0" << mm << endl;
        else if (hh >10 && mm > 10)
            os << hh << ":" << mm << endl;
        else if (hh< 10 && mm > 10)
            os << "0" << hora <<":" << minu << endl;
    }
}

istream& operator>>(istream &is, Reloj &r)
{
    cout <<"Teclea la Hora":
    is >> r.hh;
    cout <<"Teclea los minutos ":
    is >> r.mm;
  
}