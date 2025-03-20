#ifndef DTREFER_H
#define DTREFER_H

#include "Utils.h"
#include "DTFecha.h"

class DTRefer
{
public:
	DTRefer();
	DTRefer(const std::string &DOI, const std::string &titulo, DTFecha fecha);
	~DTRefer();

	std::string getDOI();
	std::string getTitulo();
	DTFecha getFecha();
	std::set<std::string> getAutores();

private:
	std::string m_DOI;
	std::string m_Titulo;
	DTFecha m_Fecha;
	std::set<std::string> m_Autores;

};

#endif