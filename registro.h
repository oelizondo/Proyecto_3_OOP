class registro
{
	public:
		registro();
		registro(reloj hrEntrada, int idTarjeta);
		void setRegistroHora(reloj hrEntrada);
		void setRegistroId(int idTarjeta);
		reloj getRegistroHora(){return reloj;};
		int getRegistroId(){return idTarjeta;};
	protected:
		reloj hrEntrada;
		int idTarjeta;
};
registro::registro()
{
	hrEntrada =  reloj();
	idTarjeta = 0;
}
registro::registro(reloj hrEntrada, int idTarjeta)
{
	this-> hrEntrada = hrEntrada;
	this->idTarjeta = idTarjeta;
}
void registro::setRegistroHora()
{
	this->hrEntrada = hrEntrada;
}http://pymbook.readthedocs.org/en/latest/
void registro::setRegistroId()
{
	this->idTarjeta = idTarjeta;
}