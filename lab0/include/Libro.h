#ifndef LIBRO_H
#define LIBRO_H

#include "Publicacion.h"
#include "Utils.h"

class Libro : public Publicacion
{
  public:
	// Constructores
	Libro();
	Libro(const std::string &doi, const std::string &titulo,
	      const DTFecha &fecha, const std::string &editorial,
	      const std::set<std::string> &palabrasDestacadas);

	// Destructor
	~Libro();

<<<<<<< Updated upstream
	// Operación polimórfica (saque el virtual porque ya estaba en la
	// Publicacion)
	bool contienePalabra(const std::string &palabra) override;
=======
	// Operación polimórfica
	bool contienePalabra(const std::string &palabra);
>>>>>>> Stashed changes

	// getters
	std::string getEditorial() const;
	std::set<std::string> getPalabrasDestacadas() const;

	// setters
	void setEditorial(const std::string &editorial);
	void setPalabrasDestacadas(const std::set<std::string> &palabras);

  private:
	std::string m_Editorial;
	std::set<std::string> m_PalabrasDestacadas;
};

#endif