#ifndef LIBRO_H
#define LIBRO_H

#include "Publicacion.h"
#include "Utils.h"

class Libro : public Publicacion
{
  public:
	// Constructores (Agregue el doi, título y fecha al constructor
	// con parámetros)
	Libro();
	Libro(const std::string &doi, const std::string &titulo,
	      const DTFecha &fecha, const std::string &editorial,
	      const std::set<std::string> &palabrasDestacadas);

	// Destructor
	~Libro();

	// Operación polimórfica (saque el virtual porque ya estaba en la
	// Publicacion)
	bool contienePalabra(const std::string &palabra);

	// getters
	std::string getEditorial() const;
	std::set<std::string> getPalabrasDestacadas() const;

	// setters (creo que en ningun momento dice algo de modificar algo de un
	// libro pero los agregue porque ustdes tmb lo hicieron lol)
	void setEditorial(const std::string &editorial);
	void setPalabrasDestacadas(const std::set<std::string> &palabras);

  private:
	std::string m_Editorial;
	std::set<std::string> m_PalabrasDestacadas;
};

#endif