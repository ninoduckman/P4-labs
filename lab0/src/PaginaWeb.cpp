#include "../include/PaginaWeb.h"

PaginaWeb::Paginaweb() : m_URL(""), m_ContenidoExtraido(""){}

Paginaweb::PaginaWeb(const std::string &m_URL, const std::string &m_ContenidoExtraido)
: m_URL(m_URL), m_ContenidoExtraido(m_ContenidoExtraido) {}

PaginaWeb::~PaginaWeb() {}


bool contienePalabra(const std::string &palabra){
    return m_ContenidoExtraido.find(palabra) != std::string::npos;
}

void PaginaWeb::setURL(const std::string &url){
    m_URL=url;
}
void PaginaWeb::setContenidoExtraido(const std::string &contenido){
    m_ContenidoExtraido = contenido;
}
std::string PaginaWeb::getURL() const{
    return m_URL;
}
std::string PaginaWeb::getContenidoExtraido() const{
    return m_ContenidoExtraido;
}