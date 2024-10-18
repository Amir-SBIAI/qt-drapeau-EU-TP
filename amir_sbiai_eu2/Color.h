#ifndef COLOR_H
#define COLOR_H

#include <QWidget>
#include <QPalette>

class Color : public QWidget
{
    Q_OBJECT

public:
    Color(QWidget *parent = nullptr);
    Color(QString couleur);
    ~Color();

private:
    // Ui::Widget *ui; // Non utilisé ici
};

#endif // COLOR_H
