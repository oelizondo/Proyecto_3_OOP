class tarjetaEmpleado : public tarjeta
{
	public:
		tarjetaEmpleado();
		tarjetaEmpleado(int idTarjeta, int idEmp, string tienda);
		int getIdTarjetaEmpleado(){return idTarjeta;};
		void setIdTarjetaEmpleado(int idTarjeta){this->idTarjeta = idTarjeta;};
		int calculaPago(Reloj horaEntrada, Reloj horaSalida, int tarifa);
		void muestraDatos();
	protected:
		string tienda;
		int idEmp;
		
};
tarjetaEmpleado::tarjetaEmpleado() : tarjeta()
{
	tienda = "n/a";
	idEmp = 0;
}
tarjetaEmpleado::tarjetaEmpleado(int idTarjeta, int idEmp, string tienda) : tarjeta(idTarjeta)
{
	this-> tienda = tienda;
	this->idEmp = idEmp;
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