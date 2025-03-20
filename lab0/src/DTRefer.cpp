#include "../include/DTRefer.h"

DTRefer::DTRefer(const std::string &DOI, const std::string &titulo,
                 const DTFecha &fecha, const std::set<std::string> &autores)
    : m_DOI(DOI), m_Titulo(titulo), m_Fecha(fecha), m_Autores(autores)
{
}

std::string DTRefer::getDOI() const
{
	return m_DOI;
}

std::string DTRefer::getTitulo() const
{
	return m_Titulo;
}

DTFecha DTRefer::getFecha() const
{
	return m_Fecha;
}

std::set<std::string> DTRefer::getAutores() const
{
	return m_Autores;
}

std::ostream &operator<<(std::ostream &os, const DTRefer &refer)
{
	os << refer.getDOI() << "->" << refer.getTitulo() << "(" << refer.getFecha()
	   << ")/";

	bool primer = true;
	std::set<std::string> autores = refer.getAutores();
	for (std::string autor : autores)
	{
		if (!primer)
			os << ",";
		primer = false;
		os << autor;
	}

	return os;
}
