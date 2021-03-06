/* ----------------------------------------------------------------------------------
    KEME-Contabilidad; aplicación para llevar contabilidades

    Copyright (C)  José Manuel Díez Botella

    Este programa es software libre: usted puede redistribuirlo y/o modificarlo
    bajo los términos de la Licencia Pública General GNU publicada
    por la Fundación para el Software Libre, ya sea la versión 3
    de la Licencia, o (a su elección) cualquier versión posterior.

    Este programa se distribuye con la esperanza de que sea útil, pero
    SIN GARANTÍA ALGUNA; ni siquiera la garantía implícita
    MERCANTIL o de APTITUD PARA UN PROPÓSITO DETERMINADO.
    Consulte los detalles de la Licencia Pública General GNU para obtener
    una información más detallada.

    Debería haber recibido una copia de la Licencia Pública General GNU
    junto a este programa.
    En caso contrario, consulte <http://www.gnu.org/licenses/>.
  ----------------------------------------------------------------------------------*/

#ifndef AJUSTE_IMAGEN_H
#define AJUSTE_IMAGEN_H

#include <QtGui>
#include "ui_ajuste_imagen.h"



class ajuste_imagen : public QDialog {
    Q_OBJECT
      public:
                ajuste_imagen(QPixmap imagen);
                QPixmap seleccion();
      private:
                Ui::ajuste_imagen ui;
                QPixmap original,copiaescalada,extracto;
                int escala;
                int factorescala;
                int supx,supy,incremento;
      private slots:
                void disminuir();
                void aumentar();
                void asignaoriginal();
                void derecha();
                void izquierda();
                void abajo();
                void arriba();
                void fijafactorescala();
                void fijaincremento();


};



#endif



