class tarjetaCli : public tarjeta
{
	public:
		tarjetaCli();
		tarjetaCli(int idTarjeta, int idCli);
		int getIdTarjetaCli(){return idTarjeta;};
		void setIdTarjetaCli(int idTarjeta){this->idTarjeta = idTarjeta;};
		double calculaPago(Reloj horaEntrada, Reloj horaSalida, int tarifa);
		void muestraDatos();
	protected:
		int idCli;		
};
tarjetaCli::tarjetaCli() : tarjeta()
{
	idCli = 0;
}
tarjetaCli::tarjetaCli(int idTarjeta, int idCli) : tarjeta(idTarjeta)
{
	this-> idCli = idCli;
}
double tarjetaCli::calculaPago(Reloj horaEntrada, Reloj horaSalida, int tarifa)
{
	return (calculaHorasCobrar(horaEntrada, horaSalida)*(tarifa/100));
}
void tarjetaCli::muestraDatos()
{
	cout << "Identifiacion: " << idTarjeta << endl;
	cout << "Identifiacion de cliente: " << idCli << endl;
}