#ifndef LIBRO_H
#define LIBRO_H

#include "Publicacion.h"
#include "Utils.h"

class Libro : public Publicacion
{
  public:
	Libro();
	Libro(const std::string &m_Editorial,
	      const std::string &m_PalabrasDestacadas);
	~Libro();
	virtual bool contienePalabra(const std::string &palabra) override;

  private:
	std::string m_Editorial;
	std::set<std::string> m_PalabrasDestacadas;
};

#endif