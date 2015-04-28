class registro
{
	public:
		registro();
		registro(Reloj hrEntrada, int idTarjeta);
		void setRegistroHora(Reloj hrEntrada);
		void setRegistroId(int idTarjeta);
		Reloj getRegistroHora();
		int getRegistroId();
	protected:
		Reloj hrEntrada;
		int idTarjeta;
};
registro::registro()
{
	Reloj rNuevo;
	hrEntrada = rNuevo;
	idTarjeta = 0;
}
registro::registro(Reloj hrEntrada, int idTarjeta)
{
	this-> hrEntrada = hrEntrada;
	this->idTarjeta = idTarjeta;
}
void registro::setRegistroHora(Reloj hrEntrada)
{
	this->hrEntrada = hrEntrada;
}
void registro::setRegistroId(int idTarjeta)
{
	this->idTarjeta = idTarjeta;
}
Reloj registro::getRegistroHora()
{
	return hrEntrada;
}
int registro::getRegistroId()
{
	return idTarjeta;
}