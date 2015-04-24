class tarjeta
{
	public:
		tarjeta();
		tarjeta(int idTarjeta);
		int getIdTarjeta(){return idTarjeta;};
		void setIdTarjeta(){this->idTarjeta = idTarjeta;};
		virtual calculaPago(reloj horaEntrada, reloj horaSalida, int tarifa) = 0;
		calculaHorasCobrar(reloj horaEntrada, reloj horaSalida);
		muestraDatos();
		
	protected:
		int idTarjeta;
}
tarjeta::tarjeta()
{
	idTarjeta = 0;
}
tarjeta::tarjeta()
{
	this->idTarjeta = idTarjeta;
}
int tarjeta::calculaHorasCobrar(reloj horaEntrada, reloj horaSalida)
{
	return horaSalida.hora - horaEntrada.hora
}