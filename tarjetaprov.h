class tarjetaProv : public tarjeta
{
	public:
		tarjetaProv();
		tarjetaProv(int ProvidTarjeta, string empresa);
		int getIdTarjetaPprovrov(){return idTarjeta;};
		void setIdTarjetaprov(int idTarjeta){this->idTarjeta = idTarjeta;};
		int calculaPago(Reloj horaEntrada, Reloj horaSalida, int tarifa);
		void muestraDatos();
	protected:
		string empresa;
};
tarjetaProv::tarjetaProv() : tarjeta()
{
	empresa = "n/a";
}
tarjetaProv::tarjetaProv(int idTarjeta, string empresa) : tarjeta(idTarjeta)
{
	this -> empresa = empresa;
}
int tarjetaProv::calculaPago(Reloj horaEntrada, Reloj horaSalida, int tarifa)
{
	return (calculaHorasCobrar(horaEntrada, horaSalida)-1)*tarifa;
}
void tarjetaProv::muestraDatos()
{
	cout << "Identifiacion: " << idTarjeta << endl;
	cout << "Empresa: " << empresa << endl; 
}