#ifndef DTFECHA_H
#define DTFECHA_H

class DTFecha
{
public:
	DTFecha();
	DTFecha(int dia, int mes, int anio);
	~DTFecha();
	//int getDia();
	//int getMes();
	//int getAnio();
private:
	int m_Dia;
	int m_Mes;
	int m_Anio;
};

#endif