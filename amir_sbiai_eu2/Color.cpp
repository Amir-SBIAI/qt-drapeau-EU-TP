#include <Color.h>
#include <QPalette>
#include <QString>

Color::Color(QWidget *parent)
    : QWidget(parent)
{
}

Color::Color(QString couleur)
{
    setGeometry(0, 0, 100, 100);  // Taille de base du carré
    this->setAutoFillBackground(true);  // Remplissage de l'arrière-plan avec la couleur

    QPalette myPalette = palette();
    myPalette.setColor(QPalette::Window, QColor(couleur));  // Définir la couleur du fond
    setPalette(myPalette);  // Appliquer la palette
}

Color::~Color() {
    // Aucune gestion manuelle de la mémoire nécessaire pour les objets QWidget
}
