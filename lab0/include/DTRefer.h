#ifndef DTREFER_H
#define DTREFER_H

#include "DTFecha.h"
#include "Utils.h"

class DTRefer
{
  public:
	DTRefer(const std::string &DOI, const std::string &titulo,
	        const DTFecha &fecha, const std::set<std::string> &autores);

	std::string getDOI() const;
	std::string getTitulo() const;
	DTFecha getFecha() const;
	std::set<std::string> getAutores() const;

  private:
	std::string m_DOI;
	std::string m_Titulo;
	DTFecha m_Fecha;
	std::set<std::string> m_Autores;
};

std::ostream &operator<<(std::ostream &os, const DTRefer &refer);

#endif