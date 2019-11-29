//
// Created by Lenovo on 28/11/2019.
//
#include "common.h"
#include "robot_t.h"
#include "producto_t.h"

robot_t::robot_t(serial orden, coordenada x, coordenada y):codigo{orden},homex{x},homey{y},carga {producto_t(0,"vacio")}{
    posx=homex;
    posy=homey;
}

void robot_t::robot_moverse(coordenada x,coordenada y){
    if(posx<x)
      {
        while(posx!=x)
        {
          posx++;
          cout<<posx;
        }
      } 
    else if (posx>x)
      {
        while(posx!=x)
        {
          posx--;
        }
      }
    if(posy<y)
      {
        while(posy!=y)
        {
          posy++;
            cout<<posy;
        }
      } 
    else if (posy>y)
      {
        while(posy!=y)
        {
          posy--;
            cout<<posy;
        }
      }
}

coordenada robot_t::get_posx(){
  return posx;
}
coordenada robot_t::get_posy(){
  return posy;
}

void robot_t::robot_retirar(warehouse_t casa) {
    for (auto i:casa.get_slots()) {
        if (i.get_posx() == posx && i.get_posy() == posy) {
            carga=i.get_productos()[0];
            i.get_productos().erase(i.get_productos().begin());
            break;
        }
    }
}
void robot_t::robot_entregar(warehouse_t casa){
  for(auto i:casa.get_slots())
  {if(i.get_posx()==posx && i.get_posy()==posy) {
          (i.get_productos()).push_back(carga);
          carga = producto_t( "vacio");
          break;
      }
  }
}


bool robot_t::robot_llevacarga() {
    if(carga.get_tipo()=="vacio" )
        return false;
    else
        return true;
}


serial robot_t::get_codigo() {
    return codigo;
}

