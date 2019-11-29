//
// Created by Lenovo on 28/11/2019.
//

#ifndef PRUEBA_ROBOT_T_H
#define PRUEBA_ROBOT_T_H
#include <string>
#include "warehouse_t.h"
#include "slot_t.h"
#include "producto_t.h"
#include "common.h"
class robot_t {
  private:
    serial codigo;
    coordenada homex;
    coordenada homey;
    coordenada posx;
    coordenada posy;
    producto_t carga;
  public:
    robot_t(serial orden, coordenada x, coordenada y);
    void robot_moverse(coordenada x,coordenada y);
    void robot_retirar(warehouse_t casa);
    void robot_entregar(warehouse_t casa);
    coordenada get_posy();
    coordenada  get_posx();
    bool robot_llevacarga();
    serial get_codigo();
};


#endif //PRUEBA_ROBOT_T_H
