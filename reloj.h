
class Reloj
{
public:
    Reloj();
    Reloj(int hora, int minu);
    int getHora();
    int getMinu();
    void setHora(int hh);
    void setMinu(int mm);
    void muestra();
    bool operator >= (Reloj horaEntrada);
    bool operator - (Reloj horaEntrada);
    bool operator ==(Reloj horaEntrada);
    //Reloj operator-(Reloj horaSalida);
    friend ostream & operator <<(ostream &os, Reloj r);
    friend istream & operator >>(istream &is, Reloj &r);
private:
    int hora, minu;
};
Reloj::Reloj()
{
	hora = 12;
	minu = 0;
}
Reloj::Reloj(int hora, int minu)
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

bool Reloj :: operator >= (Reloj horaSalida)
{
    if( this-> hora > horaSalida.hora)
    {
        return true;
        
    }
    else{
        return false;
    }
}

bool Reloj :: operator - (Reloj horaSalida)
{
    Reloj rNuevo;
    rNuevo.setHora(this->hora - horaSalida.hora);
}

bool Reloj :: operator== (Reloj horaSalida)
{
    return  (this->hora == horaSalida.getHora() && this->minu == horaSalida.getMinu())?true:false;
}

/*ostream& operator <<(ostream &os, Reloj r)
{

    if(hora <10 && minu < 10)
        os << "0"  << hh << ":" << "0" << minu << endl;
    else if (hora >10 && minu > 10)
        os << hora << ":" << minu << endl;
    else if (hora< 10 && minu > 10)
        os << "0" << hora <<":" << minu << endl;
    
}

istream& operator>>(istream &is, Reloj &r)
{
    cout <<"Teclea la Hora":
    is >> r.hh;
    cout <<"Teclea los minutos ":
    is >> r.mm;
}*/