class tarjetaCli : public tarjeta
{
	public:
		tarjetaCli();
		tarjetaCli(int idTarjeta, int idCli);
		int getIdTarjetaCli(){return idTarjeta;};
		void setIdTarjetaCli(idTarjeta){this->idTarjeta = idTarjeta;};
		void calculaPago(reloj horaEntrada, reloj horaSalida, int tarifa);
		void muestraDatos();
	protected:
		int idCli;		
};
tarjetaCli::tarjetaCli() : tarjeta();
{
	idCli = 0;
}
tarjetaCli::tarjetaCli(int idTarjeta, int idCli) : tarjeta(idTarjeta)
{
	this-> idCli = idCli;
}
void tarjetaCli::calculaPago(reloj horaEntrada, reloj horaSalida, int tarifa)
{
	cout << "Debes pagar: " << tarjetaCli.calculaHorasCobrar(reloj horaEntrada, reloj horaSalida)*tarifa << " pesos." << endl;
}
void tarjetaCli::muestrDatos()
{
	cout << "Identifiacion: " << idTarjeta << endl;
	cout << "Identifiacion de cliente: " << idCli << endl;
}