#include "slowconvex.h"

SlowConvex::SlowConvex(DrawWidget *drawWidget, QWidget *parent) : QWidget(parent), m_drawWidget(drawWidget) {

}

void SlowConvex::slowAlgorithm(){
    int counter = 0;
    const QList<QPoint>& posList = m_drawWidget->getPosition();

    qDebug() << "isi list : ";
    if(m_drawWidget){
        for(int k = 0; k < posList.size(); ++k){
            qDebug() << "Point ke "<<k<<"("<<posList.at(k).x()<<", "<<posList.at(k).y()<<")";
        }
    }


    for(int i = 0; i < posList.size(); i++){
        for(int j = i+1; j < posList.size(); j++){
            if(i==j) continue;
            bool valid = true;
            if(posList.at(i) != posList.at(j)){
                if(valid == true){
                    for(int k = 0; k < posList.size(); ++k){
                        if(k==i || k==j)continue;
                        int Result = SlowConvex::crossProduct(posList.at(i).x(), posList.at(i).y(), posList.at(j).x(), posList.at(j).y(), posList.at(k).x(), posList.at(k).y());
                        counter++;
                        if (Result < 0){
                            valid = false;
                            break;
                        }
                    }
                }
            }
            if(valid == true){
                // add ke list posisi
                E.append(qMakePair(posList.at(i), posList.at(j)));
            }
        }
    }
    update();
    m_drawWidget->iterationCount = counter;

    for(int k = 0; k < E.size(); k++){
        qDebug() << "\nPoint ke "<<k<<" adalah "<<E.at(k);
    }
}

int SlowConvex::crossProduct(int Px, int Py, int Qx, int Qy, int Rx, int Ry){
    return ((Qx-Px)*(Ry-Py))-((Qy-Py)*(Rx-Px));

}
