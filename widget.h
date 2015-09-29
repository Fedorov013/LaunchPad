#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QBoxLayout>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QUrl>
#include <QDir>
#include <QPixmap>

namespace Ui
{
    class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

protected:
    QMediaPlayer* playerbutton11;
    QMediaPlayer* playerbutton12;
    QMediaPlayer* playerbutton13;
    QMediaPlayer* playerbutton14;
    QMediaPlayer* playerbutton15;
    QMediaPlayer* playerbutton16;
    QMediaPlayer* playerbutton21;
    QMediaPlayer* playerbutton22;
    QMediaPlayer* playerbutton23;
    QMediaPlayer* playerbutton24;
    QMediaPlayer* playerbutton25;
    QMediaPlayer* playerbutton26;
    QMediaPlayer* playerbutton31;
    QMediaPlayer* playerbutton32;
    QMediaPlayer* playerbutton33;
    QMediaPlayer* playerbutton34;
    QMediaPlayer* playerbutton35;
    QMediaPlayer* playerbutton36;
    QMediaPlayer* playerbutton41;
    QMediaPlayer* playerbutton42;
    QMediaPlayer* playerbutton43;
    QMediaPlayer* playerbutton44;
    QMediaPlayer* playerbutton45;
    QMediaPlayer* playerbutton46;

    QMediaPlaylist* playlist11;
    QMediaPlaylist* playlist12;
    QMediaPlaylist* playlist13;
    QMediaPlaylist* playlist21;
    QMediaPlaylist* playlist22;
    QMediaPlaylist* playlist23;
    QMediaPlaylist* playlist31;
    QMediaPlaylist* playlist32;
    QMediaPlaylist* playlist33;
    QMediaPlaylist* playlist41;
    QMediaPlaylist* playlist42;
    QMediaPlaylist* playlist43;

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
    QPushButton *button11;
    QPushButton *button12;
    QPushButton *button13;
    QPushButton *button14;
    QPushButton *button15;
    QPushButton *button16;
    QPushButton *button21;
    QPushButton *button22;
    QPushButton *button23;
    QPushButton *button24;
    QPushButton *button25;
    QPushButton *button26;
    QPushButton *button31;
    QPushButton *button32;
    QPushButton *button33;
    QPushButton *button34;
    QPushButton *button35;
    QPushButton *button36;
    QPushButton *button41;
    QPushButton *button42;
    QPushButton *button43;
    QPushButton *button44;
    QPushButton *button45;
    QPushButton *button46;

    QHBoxLayout *Layot1;
    QHBoxLayout *Layot2;
    QHBoxLayout *Layot3;
    QHBoxLayout *Layot4;
    QVBoxLayout *ButtonBox;

private slots:
    void playslotbutton11();
    void playslotbutton12();
    void playslotbutton13();
    void playslotbutton14on();
    void playslotbutton14off();
    void playslotbutton15on();
    void playslotbutton15off();
    void playslotbutton16on();
    void playslotbutton16off();
    void playslotbutton21();
    void playslotbutton22();
    void playslotbutton23();
    void playslotbutton24on();
    void playslotbutton24off();
    void playslotbutton25on();
    void playslotbutton25off();
    void playslotbutton26on();
    void playslotbutton26off();
    void playslotbutton31();
    void playslotbutton32();
    void playslotbutton33();
    void playslotbutton34on();
    void playslotbutton34off();
    void playslotbutton35on();
    void playslotbutton35off();
    void playslotbutton36on();
    void playslotbutton36off();
    void playslotbutton41();
    void playslotbutton42();
    void playslotbutton43();
    void playslotbutton44on();
    void playslotbutton44off();
    void playslotbutton45on();
    void playslotbutton45off();
    void playslotbutton46on();
    void playslotbutton46off();
};

#endif // WIDGET_H
