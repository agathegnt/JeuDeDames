#ifndef PIECE_H
#define PIECE_H

#include "header.h"


class piece
{
    public:
        piece();
        piece(int color);
        virtual ~piece();

        //accesseur en lecture
        int getColor();
        int getType();

        //accesseur en ecriture
        void setType(int type);

    protected:
    private:
        int m_color;
        int m_type;
};

#endif // PIECE_H
