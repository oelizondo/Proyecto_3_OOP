class tarjeta
{
	public:
		tarjeta();
		tarjeta(int idTarjeta);
		int getIdTarjeta(){return idTarjeta;};
		void setIdTarjeta(){this->idTarjeta = idTarjeta;};
		virtual int calculaPago(Reloj horaEntrada, Reloj horaSalida, int tarifa) = 0;
		int calculaHorasCobrar(Reloj horaEntrada, Reloj horaSalida);
		virtual void muestraDatos() = 0;
		
	protected:
		int idTarjeta;
};
tarjeta::tarjeta()
{
	idTarjeta = 0;
}
tarjeta::tarjeta(int idTarjeta)
{
	this->idTarjeta = idTarjeta;
}
int tarjeta::calculaHorasCobrar(Reloj horaEntrada, Reloj horaSalida)
{
	Reloj rNuevo;
	rNuevo.setMinu((horaEntrada.getHora()*60 + horaEntrada.getMinu()) - (horaSalida.getHora()*60 + horaSalida.getMinu()));
	rNuevo.setHora(rNuevo.getMinu()/60);
	rNuevo.setMinu(rNuevo.getMinu()%60);
	return (rNuevo.getMinu()>=15)?rNuevo.getHora()+1:rNuevo.getHora();
}
