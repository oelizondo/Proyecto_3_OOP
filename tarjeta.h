class tarjeta
{
	public:
		tarjeta();
		tarjeta(int idTarjeta);
		int getIdTarjeta(){return idTarjeta;};
		void setIdTarjeta(){this->idTarjeta = idTarjeta;};
		virtual void calculaPago(reloj horaEntrada, reloj horaSalida, int tarifa) = 0;
		calculaHorasCobrar(reloj horaEntrada, reloj horaSalida);
		virtual void muestraDatos() = 0;
		
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
	reloj rNuevo();

	rNuevo.setMinu((horaEntrada.getHora()*60 + horaEntrada.getMinu) - (horaSalida.getHora()*60 + horaSalida.getMinu));
	rNuevo.setHora(rNuevo.getMinu/60);
	rNuevo.setMinu(rNuevo.getMinu%60);
	if(rNuevo.getMinu()>=15)
	{
		return (rNuevo.getHora()+1);

	return (rNuevo.getMinu()>=15)?rNuevo.getHora()+1:rNuevo.getHora();
}
