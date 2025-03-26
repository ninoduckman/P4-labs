#include "../include/Libro.h"

Libro::Libro() : Publicacion(), m_Editorial(""), m_PalabrasDestacadas()
{
}

Libro::Libro(const std::string &doi, const std::string &titulo,
             const DTFecha &fecha, const std::string &editorial,
             const std::set<std::string> &palabrasDestacadas)
    : Publicacion(doi, titulo, fecha), m_Editorial(editorial),
      m_PalabrasDestacadas(palabrasDestacadas)
{
}

Libro::~Libro()
{
}

bool Libro::contienePalabra(const std::string &palabra)
{

	return m_PalabrasDestacadas.find(palabra) != m_PalabrasDestacadas.end();
}

std::string Libro::getEditorial() const
{
	return m_Editorial;
}

std::set<std::string> Libro::getPalabrasDestacadas() const
{
	return m_PalabrasDestacadas;
}

void Libro::setEditorial(const std::string &editorial)
{
	m_Editorial = editorial;
}

void Libro::setPalabrasDestacadas(const std::set<std::string> &palabras)
{
	m_PalabrasDestacadas = palabras;
}
