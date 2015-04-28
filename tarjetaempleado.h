class tarjetaEmpleado : public tarjeta
{
	public:
		tarjetaEmpleado();
		tarjetaEmpleado(int idTarjeta, string tienda);
		int getIdTarjetaEmpleado(){return idTarjeta;};
		void setIdTarjetaEmpleado(int idTarjeta){this->idTarjeta = idTarjeta;};
		int calculaPago(Reloj horaEntrada, Reloj horaSalida, int tarifa);
		void muestraDatos();
	protected:
		string tienda;
		
};
tarjetaEmpleado::tarjetaEmpleado() : tarjeta()
{
	tienda = "n/a";
}
tarjetaEmpleado::tarjetaEmpleado(int idTarjeta, string tienda) : tarjeta(idTarjeta)
{
	this-> tienda = tienda;
}
int tarjetaEmpleado::calculaPago(Reloj horaEntrada, Reloj horaSalida, int tarifa)
{
	return 0;
}
void tarjetaEmpleado::muestraDatos()
{
	cout << "Identifiacion: " << idTarjeta << endl;
	cout << "Tienda: " << tienda << endl;
}