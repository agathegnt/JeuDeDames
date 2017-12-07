#include "piece.h"

piece::piece(int color)
{
    //ctor
    m_color = color;
    m_type = PION;
}
piece::piece()
{
    m_color = -1;
    m_type =  NONE;
}

piece::~piece()
{
    //dtor
}

int piece::getColor()
{
    return m_color;
}

int piece::getType()
{
	return m_type;
}

void piece::setType(int type)
{
	m_type = type;
}
