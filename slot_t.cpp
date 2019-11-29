//
// Created by Lenovo on 28/11/2019.
//

#include "slot_t.h"

slot_t::slot_t(coordenada newposx,coordenada newposy):posx{newposx},posy{newposy} {
  productos={};
}

cantidad slot_t::get_quantity() {
    return productos.size();
}

void slot_t::add_product(producto_t producto) {
    productos.emplace_back(producto);
}

coordenada slot_t::get_posx() {
    return posx;
}

coordenada slot_t::get_posy(){
    return posy;
}

vector<producto_t> slot_t::get_productos(){
    return productos;
}