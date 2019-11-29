//
// Created by Lenovo on 28/11/2019.
//

#ifndef PRUEBA_WAREHOUSE_T_H
#define PRUEBA_WAREHOUSE_T_H
#include <string>
#include "slot_t.h"
#include <vector>
#include "common.h"
#include "producto_t.h"
using namespace std;

class warehouse_t {
private:
    string address;
    longitud x;
    longitud y;
    vector<slot_t> slots;
public:
    warehouse_t(longitud x, longitud y, string address);
    bool is_slot_available(coordenada x, coordenada y);
    void add_producto(coordenada x,coordenada y,producto_t producto);
    longitud get_x();
    longitud get_y();
    vector<slot_t> get_slots();
};


#endif //PRUEBA_WAREHOUSE_T_H
