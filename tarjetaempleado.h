class tarjetaEmpleado : public tarjeta
{
	public:
		tarjetaEmpleado();
		tarjetaEmpleado(int idTarjeta, string tienda);
		int getIdTarjetaEmpleado(){return idTarjeta;};
		void setIdTarjetaEmpleado(idTarjeta){this->idTarjeta = idTarjeta;};
		void calculaPago(reloj horaEntrada, reloj horaSalida, int tarifa);
		void muestraDatos();
	protected:
		string tienda;
		
};
tarjetaEmpleado() : tarjeta();
{
	Tienda = "n/a";
}
tarjetaEmpleado(int idTarjeta, string tienda) : tarjeta(idTarjeta)
{
	this-> tienda = tienda
}
int tarjetaEmpleado::calculaPago(reloj horaEntrada, reloj horaSalida, int tarifa)
{
	cout << "Debes pagar: 0 pesos." << endl;;
}
void tarjetaCli::muestrDatos()
{
	cout << "Identifiacion: " << idTarjeta << endl;
	cout << "Tienda: " << tienda << endl;
}