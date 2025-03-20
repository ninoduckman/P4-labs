#ifndef ARTICULO_H
#define ARTICULO_H

#include "Publicacion.h"
#include "Utils.h"

class Articulo : public Publicacion
{
  public:
	virtual bool contienePalabra(const std::string &palabra) override;

  private:
	std::string m_Revista;
	std::string m_Extracto;
};

#endif