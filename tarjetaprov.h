class tarjetaProv : public tarjeta
{
	public:
		tarjetaProv();
		tarjetaProv(int ProvidTarjeta);
		int getIdTarjetaPprovrov(){return idTarjeta;};
		void setIdTarjetaprov(idTarjeta){this->idTarjeta = idTarjeta;};
		void calculaPago(reloj horaEntrada, reloj horaSalida, int tarifa);
		void muestraDatos();
	protected:
		string empresa;
};
tarjetaProv() : tarjeta();
{
	empresa = "n/a";
}
tarjetaProv(int idTarjeta, string empresa) : tarjeta(idTarjeta)
{
	this -> empresa = empresa;
}
void tarjetaProv::calculaPago(reloj horaEntrada, reloj horaSalida, int tarifa)
{
	cout << "Debes pagar: " << (tarjetaProv.calculaHorasCobrar(reloj horaEntrada, reloj horaSalida)-1)*tarifa << " pesos." << endl;
}
void tarjetaCli::muestrDatos()
{
	cout << "Identifiacion: " << idTarjeta << endl;
	cout << "Empresa: " << empresa << endl; 
}