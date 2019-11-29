#include <iostream>
#include "warehouse_t.h"
#include "robot_t.h"
using namespace std;



void menu() {
    warehouse_t casa(12, 12, "Surco");
    casa.add_producto(2, 2, producto_t("frutas"));
    casa.add_producto(2, 2, producto_t("polos"));
    casa.add_producto(4, 4, producto_t("cd's"));
    casa.add_producto(4, 4, producto_t("dvd's"));
    casa.add_producto(4, 4, producto_t("bluray's"));
    int i = 1;
    robot_t r1(1, 0, 0);
    robot_t r2(2, 5, 8);
    robot_t r3(3, 7, 7);
    while (i == 1) {
        cout << "3 Robots";
        cout << r1.get_posx() << " " << r1.get_posy() << endl;
        cout << r2.get_posx() << " " << r2.get_posy() << endl;
        cout << r3.get_posx() << " " << r3.get_posy() << endl;
        vector<robot_t> robots = {r1, r2, r3};
        cout << "Cantidad de instrucciones";
        int n = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int robot = 0;
            cout << "Elija robot";
            cin >> robot;
            cout << "Destino";
            coordenada x1 = 0;
            coordenada y1 = 0;
            cin >> x1;
            cin >> y1;
            cout << "Retiro o ingreso; 1 o 2";
            int opcion = 0;
            cin >> opcion;
            string product;
            cout << "Producto";
            cin >> product;
            for (auto a:robots) {
                if (robot == a.get_codigo()) {
                    a.robot_moverse(x1, y1);
                    if (opcion == 1)
                        a.robot_retirar(casa);
                    else
                        a.robot_entregar(casa);
                }
            }
        }
    }
}



int main() {
    menu();
    return 0;
}