#include "ProjetFinalEchec.h"
#include <QtWidgets/QMainWindow>
#include <QFontComboBox>
#include <QGridLayout>
#include <QPushButton>
#include <QWidget>
#include <QLabel>


ProjetFinalEchec::ProjetFinalEchec(Joueur joueurUn, Joueur joueurDeux, QWidget* parent)
    : QMainWindow(parent)
{
    QWidget* window = new QWidget;
    QGridLayout* layout = new QGridLayout;
    
    layout->setSpacing(0);
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            QLabel* label = new QLabel();
            label->setAlignment(Qt::AlignCenter);
            //Piece* pieceJ1 = joueurUn.pieceTrouvee(i, j);
            if (joueurUn.pieceTrouvee(i, j)) {
                label->setText("b");
            }
            // QString::fromStdString(pieceJ2->avoirCharNoir())
            //Piece* pieceJ2 = joueurDeux.pieceTrouvee(i, j);
            if (joueurDeux.pieceTrouvee(i, j)) {
                label->setText("a");
            }

            if ((i + j) % 2 == 0) {
                label->setStyleSheet("QLabel { background-color : gray }");
            }
            else {
                label->setStyleSheet("QLabel { background-color : white }");
            }
            
            layout->addWidget(label, j, i);
        }
    }   
    window->setLayout(layout);

    setCentralWidget(window);
}

