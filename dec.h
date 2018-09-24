#ifndef DEC_H
#define DEC_H

#include <QMainWindow>

namespace Ui {
class dec;
}

class dec : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit dec(QWidget *parent = 0);
    ~dec();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::dec *ui;
};

#endif // DEC_H
