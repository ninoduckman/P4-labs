#include "../include/DTFecha.h"

DTFecha::DTFecha(int dia, int mes, int anio)
    : m_Dia(dia), m_Mes(mes), m_Anio(anio)
{
}

int DTFecha::getDia() const
{
	return m_Dia;
}

int DTFecha::getMes() const
{
	return m_Mes;
}

int DTFecha::getAnio() const
{
	return m_Anio;
}

std::ostream &operator<<(std::ostream &os, const DTFecha &fecha)
{
	os << fecha.getDia() << "/" << fecha.getMes() << "/" << fecha.getAnio();
	return os;
}