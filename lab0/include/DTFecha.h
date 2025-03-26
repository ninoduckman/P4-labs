#ifndef DTFECHA_H
#define DTFECHA_H

#include <iostream>

class DTFecha
{
  public:
	DTFecha(int dia, int mes, int anio);

	int getDia() const;
	int getMes() const;
	int getAnio() const;
	bool operator==(const DTFecha &otra) const;
	
	bool operator!=(const DTFecha &otra) const;
	
	bool operator<(const DTFecha &otra) const;
	
	bool operator>(const DTFecha &otra) const;

  private:
	int m_Dia;
	int m_Mes;
	int m_Anio;

};

std::ostream &operator<<(std::ostream &os, const DTFecha &fecha);

#endif