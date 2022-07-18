#ifndef SALARIOS2_H
#define SALARIOS2_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Salarios2; }
QT_END_NAMESPACE

class Salarios2 : public QMainWindow
{
    Q_OBJECT

public:
    Salarios2(QWidget *parent = nullptr);
    ~Salarios2();

private:
    Ui::Salarios2 *ui;
};
#endif // SALARIOS2_H
