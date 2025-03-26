#include "../include/PaginaWeb.h"

PaginaWeb::PaginaWeb() : m_URL(""), m_ContenidoExtraido("")
{
}

PaginaWeb::PaginaWeb(const std::string &doi, const std::string &titulo,
		const DTFecha &fecha, const std::string &url,
		const std::string &contenidoExtraido)
    : Publicacion(doi, titulo, fecha), m_URL(url), m_ContenidoExtraido(contenidoExtraido)
{
}

PaginaWeb::~PaginaWeb()
{
}

bool PaginaWeb::contienePalabra(const std::string &palabra)
{
	return m_ContenidoExtraido.find(palabra) != std::string::npos;
}

void PaginaWeb::setURL(const std::string &url)
{
	m_URL = url;
}

void PaginaWeb::setContenidoExtraido(const std::string &contenido)
{
	m_ContenidoExtraido = contenido;
}

std::string PaginaWeb::getURL() const
{
	return m_URL;
}

std::string PaginaWeb::getContenidoExtraido() const
{
	return m_ContenidoExtraido;
}