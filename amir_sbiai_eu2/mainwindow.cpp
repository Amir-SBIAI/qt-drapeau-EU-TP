#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QPalette>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Drapeaux Tricolores UE");
    resize(700, 400);


    // pour ajouter le background (mettre le chemin en entier sinon ça ne marche pas)
    QPixmap bkgnd("/home/ciel2024/amir_sbiai_eu2/background.jpeg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    // Layout des boutons
    QVBoxLayout *Pagelayout = new QVBoxLayout;
    QHBoxLayout *Hlayout1 = new QHBoxLayout;
    QHBoxLayout *Hlayout2 = new QHBoxLayout;
    // ligne 1 et ligne 2 pour éviter de tout écrire sur la meme ligne
    Pagelayout->addLayout(Hlayout1);
    Pagelayout->addLayout(Hlayout2);

/*void MainWindow::resizeEvent(QResizeEvent* evt)
  {
      QMainWindow::resizeEvent(evt);
      this->set_bkgnd();
  }

void MainWindow::set_bkgnd()
  {
      QPixmap bkngd("/home/ciel2024/amir_sbiai_eu2/background.jpeg");
      bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
      palette.setBrush(QPalette::Background, bkgnd);
      this->setPalette(palette);
  }
*/

    this->B1->setGeometry(50, 100, 100, 50); // Positionner le bouton B1

    // Connexion du signal avec clicked pour tout les drapeaux EU
    connect(B1, SIGNAL(clicked()), this, SLOT(Drapeau_ALLEMAGNE()));
    connect(B2, SIGNAL(clicked()), this, SLOT(Drapeau_PAYSBAS()));
    connect(B3, SIGNAL(clicked()), this, SLOT(Drapeau_FRANCE()));
    connect(B4, SIGNAL(clicked()), this, SLOT(Drapeau_ESTONIE()));
    connect(B5, SIGNAL(clicked()), this, SLOT(Drapeau_BULGARIE()));
    connect(B6, SIGNAL(clicked()), this, SLOT(Drapeau_ROUMANIE()));
    connect(B7, SIGNAL(clicked()), this, SLOT(Drapeau_AUTRICHE()));
    connect(B8, SIGNAL(clicked()), this, SLOT(Drapeau_HONGRIE()));
    connect(B9, SIGNAL(clicked()), this, SLOT(Drapeau_IRLANDE()));
    connect(B10, SIGNAL(clicked()), this, SLOT(Drapeau_ITALIE()));
    connect(B11, SIGNAL(clicked()), this, SLOT(Drapeau_LETTONIE()));
    connect(B12, SIGNAL(clicked()), this, SLOT(Drapeau_LITUANIE()));
    connect(B13, SIGNAL(clicked()), this, SLOT(Drapeau_LUXEMBOURG()));
    connect(B14, SIGNAL(clicked()), this, SLOT(Drapeau_BELGIQUE()));


    // Ajouter le bouton au layout
    Hlayout1->addWidget(B1);
    Hlayout1->addWidget(B2);
    Hlayout1->addWidget(B3);
    Hlayout1->addWidget(B4);
    Hlayout1->addWidget(B5);
    Hlayout1->addWidget(B6);
    Hlayout1->addWidget(B7);
    Hlayout2->addWidget(B8);
    Hlayout2->addWidget(B9);
    Hlayout2->addWidget(B10);
    Hlayout2->addWidget(B11);
    Hlayout2->addWidget(B12);
    Hlayout2->addWidget(B13);
    Hlayout2->addWidget(B14);


    // Définir le widget central
    QWidget *widget = new QWidget;
    widget->setLayout(Pagelayout);
    setCentralWidget(widget);
}

void MainWindow::resizeEvent(QResizeEvent* evt)
{
    QPixmap bkgnd("/home/ciel2024/amir_sbiai_eu2/background.jpeg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);

    QPalette palette;

    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    QMainWindow::resizeEvent(evt); // call inherited implementation
}


void MainWindow::Drapeau_ALLEMAGNE() {
    Drapeau *D = new Drapeau("Black", "red", "gold", "vertical", "Allemagne");
}

void MainWindow::Drapeau_PAYSBAS() {
    Drapeau *D = new Drapeau("red", "white", "blue", "vertical", "Paysbas");
}

void MainWindow::Drapeau_FRANCE() {
    Drapeau *D = new Drapeau("blue", "white", "red", "horizontal", "France");
}

void MainWindow::Drapeau_ESTONIE() {
    Drapeau *D = new Drapeau("blue", "black", "white", "vertical", "Estonie");
}

void MainWindow::Drapeau_BULGARIE() {
    Drapeau *D = new Drapeau("white", "green", "red", "vertical", "Bulgarie");
}

void MainWindow::Drapeau_ROUMANIE() {
    Drapeau *D = new Drapeau("blue", "yellow", "red", "horizontal", "Roumanie");
}

void MainWindow::Drapeau_AUTRICHE() {
    Drapeau *D = new Drapeau("red", "white", "red", "vertical", "Autriche");
}

void MainWindow::Drapeau_HONGRIE() {
    Drapeau *D = new Drapeau("red", "white", "green", "vertical", "Hongrie");
}

void MainWindow::Drapeau_IRLANDE() {
    Drapeau *D = new Drapeau("green", "white", "orange", "horizontal", "Irlande");
}

void MainWindow::Drapeau_ITALIE() {
    Drapeau *D = new Drapeau("green", "white", "red", "horizontal", "Italie");
}

void MainWindow::Drapeau_LETTONIE() {
    Drapeau *D = new Drapeau("red", "white", "red", "vertical", "Lettonie");
}

void MainWindow::Drapeau_LITUANIE() {
    Drapeau *D = new Drapeau("yellow", "green", "red", "vertical", "Lituanie");
}

void MainWindow::Drapeau_LUXEMBOURG() {
    Drapeau *D = new Drapeau("red", "white", "blue", "vertical", "Luxembourg");
}

void MainWindow::Drapeau_BELGIQUE() {
    Drapeau *D = new Drapeau("black", "yellow", "red", "horizontal", "Belgique");
}




MainWindow::~MainWindow() {
    delete ui;
}
