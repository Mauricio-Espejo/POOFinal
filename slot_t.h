//
// Created by Lenovo on 28/11/2019.
//

#ifndef PRUEBA_SLOT_T_H
#define PRUEBA_SLOT_T_H


#include <cstddef>
#include "producto_t.h"
#include "common.h"
class slot_t {
private:
    coordenada posx;
    coordenada posy;
    vector<producto_t> productos;
public:
    slot_t(coordenada newposx,coordenada newposy);
    cantidad get_quantity();
    void add_product(producto_t producto);
    coordenada get_posx();
    coordenada get_posy();
    vector<producto_t> get_productos();
};


#endif //PRUEBA_SLOT_T_H
