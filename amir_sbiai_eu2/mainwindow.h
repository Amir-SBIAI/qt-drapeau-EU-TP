#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPixmap>
#include <QPalette>
#include <Color.h>
#include <Drapeau.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // Déclaration du bouton pour l'Allemagne
    QPushButton *B1 = new QPushButton("ALLEMAGNE");

    // Déclaration du bouton pour Paysbas
    QPushButton *B2 = new QPushButton("PAYSBAS");

    // Déclaration du bouton pour France
    QPushButton *B3 = new QPushButton("FRANCE");

    // Déclaration du bouton pour Estonie
    QPushButton *B4 = new QPushButton("ESTONIE");

    // Déclaration du bouton pour Bulgarie
    QPushButton *B5 = new QPushButton("BULGARIE");

    // Déclaration du bouton pour Roumanie
    QPushButton *B6 = new QPushButton("ROUMANIE");

    // Déclaration du bouton pour Autriche
    QPushButton *B7 = new QPushButton("AUTRICHE");

    // Déclaration du bouton pour Hongrie
    QPushButton *B8 = new QPushButton("HONGRIE");

    // Déclaration du bouton pour Irlande
    QPushButton *B9 = new QPushButton("IRLANDE");

    // Déclaration du bouton pour Italie
    QPushButton *B10 = new QPushButton("ITALIE");

    // Déclaration du bouton pour Letonnie
    QPushButton *B11 = new QPushButton("LETTONIE");

    // Déclaration du bouton pour Littuanie
    QPushButton *B12 = new QPushButton("LITUANIE");

    // Déclaration du bouton pour le Luxembourg
    QPushButton *B13 = new QPushButton("LUXEMBOURG");

    // Déclaration du bouton pour Belgique
    QPushButton *B14 = new QPushButton("BELGIQUE");

    void set_bkgnd();

public slots:
    void Drapeau_ALLEMAGNE();
    void Drapeau_PAYSBAS();
    void Drapeau_FRANCE();
    void Drapeau_ESTONIE();
    void Drapeau_BULGARIE();
    void Drapeau_ROUMANIE();
    void Drapeau_AUTRICHE();
    void Drapeau_HONGRIE();
    void Drapeau_IRLANDE();
    void Drapeau_ITALIE();
    void Drapeau_LETTONIE();
    void Drapeau_LITUANIE();
    void Drapeau_LUXEMBOURG();
    void Drapeau_BELGIQUE();


private:
    Ui::MainWindow *ui;
protected:
    void resizeEvent(QResizeEvent* evt) override;
};

#endif // MAINWINDOW_H
