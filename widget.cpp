#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->resize(700,480);
    this->setWindowTitle("LaunchPad");
    this->setWindowIcon(QIcon(QDir::toNativeSeparators(":/images/icon.png")));

    QString path = qApp->QCoreApplication::applicationDirPath();

    playlist11 = new QMediaPlaylist(this);
    playlist11->addMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(path + "/sound/01.mp3")));
    playlist11->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
    playerbutton11 = new QMediaPlayer(this);
    playerbutton11->setPlaylist(playlist11);

    playlist12 = new QMediaPlaylist(this);
    playlist12->addMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(path + "/sound/02.mp3")));
    playlist12->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
    playerbutton12 = new QMediaPlayer(this);
    playerbutton12->setPlaylist(playlist12);

    playlist13 = new QMediaPlaylist(this);
    playlist13->addMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(path + "/sound/03.mp3")));
    playlist13->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
    playerbutton13 = new QMediaPlayer(this);
    playerbutton13->setPlaylist(playlist13);

    playerbutton14 = new QMediaPlayer(this);
    playerbutton14->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(path + "/sound/13.mp3")));

    playerbutton15 = new QMediaPlayer(this);
    playerbutton15->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(path + "/sound/14.mp3")));

    playerbutton16 = new QMediaPlayer(this);
    playerbutton16->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(path + "/sound/15.mp3")));

    playlist21 = new QMediaPlaylist(this);
    playlist21->addMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(path + "/sound/04.mp3")));
    playlist21->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
    playerbutton21 = new QMediaPlayer(this);
    playerbutton21->setPlaylist(playlist21);

    playlist22 = new QMediaPlaylist(this);
    playlist22->addMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(path + "/sound/05.mp3")));
    playlist22->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
    playerbutton22 = new QMediaPlayer(this);
    playerbutton22->setPlaylist(playlist22);

    playlist23 = new QMediaPlaylist(this);
    playlist23->addMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(path + "/sound/06.mp3")));
    playlist23->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
    playerbutton23 = new QMediaPlayer(this);
    playerbutton23->setPlaylist(playlist23);

    playerbutton24 = new QMediaPlayer(this);
    playerbutton24->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(path + "/sound/16.mp3")));

    playerbutton25 = new QMediaPlayer(this);
    playerbutton25->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(path + "/sound/17.mp3")));

    playerbutton26 = new QMediaPlayer(this);
    playerbutton26->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(path + "/sound/18.mp3")));

    playlist31 = new QMediaPlaylist(this);
    playlist31->addMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(path + "/sound/07.mp3")));
    playlist31->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
    playerbutton31 = new QMediaPlayer(this);
    playerbutton31->setPlaylist(playlist31);

    playlist32 = new QMediaPlaylist(this);
    playlist32->addMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(path + "/sound/08.mp3")));
    playlist32->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
    playerbutton32 = new QMediaPlayer(this);
    playerbutton32->setPlaylist(playlist32);

    playlist33 = new QMediaPlaylist(this);
    playlist33->addMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(path + "/sound/09.mp3")));
    playlist33->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
    playerbutton33 = new QMediaPlayer(this);
    playerbutton33->setPlaylist(playlist33);

    playerbutton34 = new QMediaPlayer(this);
    playerbutton34->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(path + "/sound/19.mp3")));

    playerbutton35 = new QMediaPlayer(this);
    playerbutton35->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(path + "/sound/20.mp3")));

    playerbutton36 = new QMediaPlayer(this);
    playerbutton36->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(path + "/sound/21.mp3")));

    playlist41 = new QMediaPlaylist(this);
    playlist41->addMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(path + "/sound/10.mp3")));
    playlist41->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
    playerbutton41 = new QMediaPlayer(this);
    playerbutton41->setPlaylist(playlist41);

    playlist42 = new QMediaPlaylist(this);
    playlist42->addMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(path + "/sound/11.mp3")));
    playlist42->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
    playerbutton42 = new QMediaPlayer(this);
    playerbutton42->setPlaylist(playlist42);

    playlist43 = new QMediaPlaylist(this);
    playlist43->addMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(path + "/sound/12.mp3")));
    playlist43->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
    playerbutton43 = new QMediaPlayer(this);
    playerbutton43->setPlaylist(playlist43);

    playerbutton44 = new QMediaPlayer(this);
    playerbutton44->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(path + "/sound/22.mp3")));

    playerbutton45 = new QMediaPlayer(this);
    playerbutton45->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(path + "/sound/23.mp3")));

    playerbutton46 = new QMediaPlayer(this);
    playerbutton46->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(path + "/sound/24.mp3")));

    button11 = new QPushButton(this);
    button11->setStyleSheet("border-image: url(:/images/button_yellow.png)");
    button11->setCheckable(true);
    button11->setShortcut(tr("1"));
    button11->show();

    button12 = new QPushButton(this);
    button12->setStyleSheet("border-image: url(:/images/button_yellow.png)");
    button12->setCheckable(true);
    button12->setShortcut(tr("2"));
    button12->show();

    button13 = new QPushButton(this);
    button13->setStyleSheet("border-image: url(:/images/button_yellow.png)");
    button13->setCheckable(true);
    button13->setShortcut(tr("3"));
    button13->show();

    button14 = new QPushButton(this);
    button14->setStyleSheet("border-image: url(:/images/button_blue.png)");
    //button14->setShortcut(tr("4"));
    button14->show();

    button15 = new QPushButton(this);
    button15->setStyleSheet("border-image: url(:/images/button_blue.png)");
    button15->setShortcut(tr("5"));
    button15->show();

    button16 = new QPushButton(this);
    button16->setStyleSheet("border-image: url(:/images/button_blue.png)");
    button16->setShortcut(tr("6"));
    button16->show();

    button21 = new QPushButton(this);
    button21->setStyleSheet("border-image: url(:/images/button_yellow.png)");
    button21->setCheckable(true);
    button21->setShortcut(tr("q"));
    button21->show();

    button22 = new QPushButton(this);
    button22->setStyleSheet("border-image: url(:/images/button_yellow.png)");
    button22->setCheckable(true);
    button22->setShortcut(tr("w"));
    button22->show();

    button23 = new QPushButton(this);
    button23->setStyleSheet("border-image: url(:/images/button_yellow.png)");
    button23->setCheckable(true);
    button23->setShortcut(tr("e"));
    button23->show();

    button24 = new QPushButton(this);
    button24->setStyleSheet("border-image: url(:/images/button_blue.png)");
    button24->setShortcut(tr("r"));
    button24->show();

    button25 = new QPushButton(this);
    button25->setStyleSheet("border-image: url(:/images/button_blue.png)");
    button25->setShortcut(tr("t"));
    button25->show();

    button26 = new QPushButton(this);
    button26->setStyleSheet("border-image: url(:/images/button_blue.png)");
    button26->setShortcut(tr("y"));
    button26->show();

    button31 = new QPushButton(this);
    button31->setStyleSheet("border-image: url(:/images/button_purple.png)");
    button31->setCheckable(true);
    button31->setShortcut(tr("a"));
    button31->show();

    button32 = new QPushButton(this);
    button32->setStyleSheet("border-image: url(:/images/button_purple.png)");
    button32->setCheckable(true);
    button32->setShortcut(tr("s"));
    button32->show();

    button33 = new QPushButton(this);
    button33->setStyleSheet("border-image: url(:/images/button_purple.png)");
    button33->setCheckable(true);
    button33->setShortcut(tr("d"));
    button33->show();

    button34 = new QPushButton(this);
    button34->setStyleSheet("border-image: url(:/images/button_red.png)");
    button34->setShortcut(tr("f"));
    button34->show();

    button35 = new QPushButton(this);
    button35->setStyleSheet("border-image: url(:/images/button_red.png)");
    button35->setShortcut(tr("g"));
    button35->show();

    button36 = new QPushButton(this);
    button36->setStyleSheet("border-image: url(:/images/button_red.png)");
    button36->setShortcut(tr("h"));
    button36->show();

    button41 = new QPushButton(this);
    button41->setStyleSheet("border-image: url(:/images/button_purple.png)");
    button41->setCheckable(true);
    button41->setShortcut(tr("z"));
    button41->show();

    button42 = new QPushButton(this);
    button42->setStyleSheet("border-image: url(:/images/button_purple.png)");
    button42->setCheckable(true);
    button42->setShortcut(tr("x"));
    button42->show();

    button43 = new QPushButton(this);
    button43->setStyleSheet("border-image: url(:/images/button_purple.png)");
    button43->setCheckable(true);
    button43->setShortcut(tr("c"));
    button43->show();

    button44 = new QPushButton(this);
    button44->setStyleSheet("border-image: url(:/images/button_red.png)");
    button44->setShortcut(tr("v"));
    button44->show();

    button45 = new QPushButton(this);
    button45->setStyleSheet("border-image: url(:/images/button_red.png)");
    button45->setShortcut(tr("b"));
    button45->show();

    button46 = new QPushButton(this);
    button46->setStyleSheet("border-image: url(:/images/button_red.png)");
    button46->setShortcut(tr("n"));
    button46->show();

    connect(button11,SIGNAL(clicked()),this,SLOT(playslotbutton11()));
    connect(button12,SIGNAL(clicked()),this,SLOT(playslotbutton12()));
    connect(button13,SIGNAL(clicked()),this,SLOT(playslotbutton13()));
    connect(button14,SIGNAL(pressed()),this,SLOT(playslotbutton14on()));
    connect(button14,SIGNAL(released()),this,SLOT(playslotbutton14off()));
    connect(button15,SIGNAL(pressed()),this,SLOT(playslotbutton15on()));
    connect(button15,SIGNAL(released()),this,SLOT(playslotbutton15off()));
    connect(button16,SIGNAL(pressed()),this,SLOT(playslotbutton16on()));
    connect(button16,SIGNAL(released()),this,SLOT(playslotbutton16off()));
    connect(button21,SIGNAL(clicked()),this,SLOT(playslotbutton21()));
    connect(button22,SIGNAL(clicked()),this,SLOT(playslotbutton22()));
    connect(button23,SIGNAL(clicked()),this,SLOT(playslotbutton23()));
    connect(button24,SIGNAL(pressed()),this,SLOT(playslotbutton24on()));
    connect(button24,SIGNAL(released()),this,SLOT(playslotbutton24off()));
    connect(button25,SIGNAL(pressed()),this,SLOT(playslotbutton25on()));
    connect(button25,SIGNAL(released()),this,SLOT(playslotbutton25off()));
    connect(button26,SIGNAL(pressed()),this,SLOT(playslotbutton26on()));
    connect(button26,SIGNAL(released()),this,SLOT(playslotbutton26off()));
    connect(button31,SIGNAL(clicked()),this,SLOT(playslotbutton31()));
    connect(button32,SIGNAL(clicked()),this,SLOT(playslotbutton32()));
    connect(button33,SIGNAL(clicked()),this,SLOT(playslotbutton33()));
    connect(button34,SIGNAL(pressed()),this,SLOT(playslotbutton34on()));
    connect(button34,SIGNAL(released()),this,SLOT(playslotbutton34off()));
    connect(button35,SIGNAL(pressed()),this,SLOT(playslotbutton35on()));
    connect(button35,SIGNAL(released()),this,SLOT(playslotbutton35off()));
    connect(button36,SIGNAL(pressed()),this,SLOT(playslotbutton36on()));
    connect(button36,SIGNAL(released()),this,SLOT(playslotbutton36off()));
    connect(button41,SIGNAL(clicked()),this,SLOT(playslotbutton41()));
    connect(button42,SIGNAL(clicked()),this,SLOT(playslotbutton42()));
    connect(button43,SIGNAL(clicked()),this,SLOT(playslotbutton43()));
    connect(button44,SIGNAL(pressed()),this,SLOT(playslotbutton44on()));
    connect(button44,SIGNAL(released()),this,SLOT(playslotbutton44off()));
    connect(button45,SIGNAL(pressed()),this,SLOT(playslotbutton45on()));
    connect(button45,SIGNAL(released()),this,SLOT(playslotbutton45off()));
    connect(button46,SIGNAL(pressed()),this,SLOT(playslotbutton46on()));
    connect(button46,SIGNAL(released()),this,SLOT(playslotbutton46off()));

    QHBoxLayout *Layot1 = new QHBoxLayout();
    button11->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    button12->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    button13->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    button14->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    button15->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    button16->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    Layot1->addWidget(button11);
    Layot1->addWidget(button12);
    Layot1->addWidget(button13);
    Layot1->addWidget(button14);
    Layot1->addWidget(button15);
    Layot1->addWidget(button16);

    QHBoxLayout *Layot2 = new QHBoxLayout();
    button21->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    button22->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    button23->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    button24->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    button25->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    button26->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    Layot2->addWidget(button21);
    Layot2->addWidget(button22);
    Layot2->addWidget(button23);
    Layot2->addWidget(button24);
    Layot2->addWidget(button25);
    Layot2->addWidget(button26);

    QHBoxLayout *Layot3 = new QHBoxLayout();
    button31->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    button32->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    button33->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    button34->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    button35->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    button36->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    Layot3->addWidget(button31);
    Layot3->addWidget(button32);
    Layot3->addWidget(button33);
    Layot3->addWidget(button34);
    Layot3->addWidget(button35);
    Layot3->addWidget(button36);

    QHBoxLayout *Layot4 = new QHBoxLayout();
    button41->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    button42->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    button43->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    button44->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    button45->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    button46->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    Layot4->addWidget(button41);
    Layot4->addWidget(button42);
    Layot4->addWidget(button43);
    Layot4->addWidget(button44);
    Layot4->addWidget(button45);
    Layot4->addWidget(button46);

    QVBoxLayout *ButtonBox = new QVBoxLayout();
    ButtonBox->addLayout(Layot1);
    ButtonBox->addLayout(Layot2);
    ButtonBox->addLayout(Layot3);
    ButtonBox->addLayout(Layot4);
    this->setLayout(ButtonBox);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::playslotbutton11()
{
    if (button11->isChecked())
    {
        button11->setStyleSheet("QPushButton:checked{border-image: url(:/images/button_green.png)}");
        playerbutton11->play();
    }
    else
    {
        button11->setStyleSheet("border-image: url(:/images/button_yellow.png)");
        playerbutton11->stop();
    }
}

void Widget::playslotbutton12()
{
    if (button12->isChecked())
    {
        button12->setStyleSheet("QPushButton:checked{border-image: url(:/images/button_green.png)}");
        playerbutton12->play();
    }
    else
    {
        button12->setStyleSheet("border-image: url(:/images/button_yellow.png)");
        playerbutton12->stop();
    }
}

void Widget::playslotbutton13()
{
    if (button13->isChecked())
    {
        button13->setStyleSheet("QPushButton:checked{border-image: url(:/images/button_green.png)}");
        playerbutton13->play();
    }
    else
    {
        button13->setStyleSheet("border-image: url(:/images/button_yellow.png)");
        playerbutton13->stop();
    }
}

void Widget::playslotbutton14on()
{
    button14->setStyleSheet("QPushButton:pressed{border-image: url(:/images/button_green.png)}");
    playerbutton14->play();
}

void Widget::playslotbutton14off()
{
    button14->setStyleSheet("border-image: url(:/images/button_blue.png)");
}

void Widget::playslotbutton15on()
{
    button15->setStyleSheet("QPushButton:pressed{border-image: url(:/images/button_green.png)}");
    playerbutton15->play();
}

void Widget::playslotbutton15off()
{
    button15->setStyleSheet("border-image: url(:/images/button_blue.png)");
}

void Widget::playslotbutton16on()
{
    button16->setStyleSheet("QPushButton:pressed{border-image: url(:/images/button_green.png)}");
    playerbutton16->play();
}

void Widget::playslotbutton16off()
{
    button16->setStyleSheet("border-image: url(:/images/button_blue.png)");
}

void Widget::playslotbutton21()
{
    if (button21->isChecked())
    {
        button21->setStyleSheet("QPushButton:checked{border-image: url(:/images/button_green.png)}");
        playerbutton21->play();
    }
    else
    {
        button21->setStyleSheet("border-image: url(:/images/button_yellow.png)");
        playerbutton21->stop();
    }
}

void Widget::playslotbutton22()
{
    if (button22->isChecked())
    {
        button22->setStyleSheet("QPushButton:checked{border-image: url(:/images/button_green.png)}");
        playerbutton22->play();
    }
    else
    {
        button22->setStyleSheet("border-image: url(:/images/button_yellow.png)");
        playerbutton22->stop();
    }
}

void Widget::playslotbutton23()
{
    if (button23->isChecked())
    {
        button23->setStyleSheet("QPushButton:checked{border-image: url(:/images/button_green.png)}");
        playerbutton23->play();
    }
    else
    {
        button23->setStyleSheet("border-image: url(:/images/button_yellow.png)");
        playerbutton23->stop();
    }
}

void Widget::playslotbutton24on()
{
    button24->setStyleSheet("QPushButton:pressed{border-image: url(:/images/button_green.png)}");
    playerbutton24->play();
}

void Widget::playslotbutton24off()
{
    button24->setStyleSheet("border-image: url(:/images/button_blue.png)");
}

void Widget::playslotbutton25on()
{
    button25->setStyleSheet("QPushButton:pressed{border-image: url(:/images/button_green.png)}");
    playerbutton25->play();
}

void Widget::playslotbutton25off()
{
    button25->setStyleSheet("border-image: url(:/images/button_blue.png)");
}

void Widget::playslotbutton26on()
{
    button26->setStyleSheet("QPushButton:pressed{border-image: url(:/images/button_green.png)}");
    playerbutton26->play();
}

void Widget::playslotbutton26off()
{
    button26->setStyleSheet("border-image: url(:/images/button_blue.png)");
}

void Widget::playslotbutton31()
{
    if (button31->isChecked())
    {
        button31->setStyleSheet("QPushButton:checked{border-image: url(:/images/button_green.png)}");
        playerbutton31->play();
    }
    else
    {
        button31->setStyleSheet("border-image: url(:/images/button_purple.png)");
        playerbutton31->stop();
    }
}

void Widget::playslotbutton32()
{
    if (button32->isChecked())
    {
        button32->setStyleSheet("QPushButton:checked{border-image: url(:/images/button_green.png)}");
        playerbutton32->play();
    }
    else
    {
        button32->setStyleSheet("border-image: url(:/images/button_purple.png)");
        playerbutton32->stop();
    }
}

void Widget::playslotbutton33()
{
    if (button33->isChecked())
    {
        button33->setStyleSheet("QPushButton:checked{border-image: url(:/images/button_green.png)}");
        playerbutton33->play();
    }
    else
    {
        button33->setStyleSheet("border-image: url(:/images/button_purple.png)");
        playerbutton33->stop();
    }
}

void Widget::playslotbutton34on()
{
    button34->setStyleSheet("QPushButton:pressed{border-image: url(:/images/button_green.png)}");
    playerbutton34->play();
}

void Widget::playslotbutton34off()
{
    button34->setStyleSheet("border-image: url(:/images/button_red.png)");
}

void Widget::playslotbutton35on()
{
    button35->setStyleSheet("QPushButton:pressed{border-image: url(:/images/button_green.png)}");
    playerbutton35->play();
}

void Widget::playslotbutton35off()
{
    button35->setStyleSheet("border-image: url(:/images/button_red.png)");
}

void Widget::playslotbutton36on()
{
    button36->setStyleSheet("QPushButton:pressed{border-image: url(:/images/button_green.png)}");
    playerbutton36->play();
}

void Widget::playslotbutton36off()
{
    button36->setStyleSheet("border-image: url(:/images/button_red.png)");
}

void Widget::playslotbutton41()
{
    if (button41->isChecked())
    {
        button41->setStyleSheet("QPushButton:checked{border-image: url(:/images/button_green.png)}");
        playerbutton41->play();
    }
    else
    {
        button41->setStyleSheet("border-image: url(:/images/button_purple.png)");
        playerbutton41->stop();
    }
}

void Widget::playslotbutton42()
{
    if (button42->isChecked())
    {
        button42->setStyleSheet("QPushButton:checked{border-image: url(:/images/button_green.png)}");
        playerbutton42->play();
    }
    else
    {
        button42->setStyleSheet("border-image: url(:/images/button_purple.png)");
        playerbutton42->stop();
    }
}

void Widget::playslotbutton43()
{
    if (button43->isChecked())
    {
        button43->setStyleSheet("QPushButton:checked{border-image: url(:/images/button_green.png)}");
        playerbutton43->play();
    }
    else
    {
        button43->setStyleSheet("border-image: url(:/images/button_purple.png)");
        playerbutton43->stop();
    }
}

void Widget::playslotbutton44on()
{
    button44->setStyleSheet("QPushButton:pressed{border-image: url(:/images/button_green.png)}");
    playerbutton44->play();
}

void Widget::playslotbutton44off()
{
    button44->setStyleSheet("border-image: url(:/images/button_red.png)");
}

void Widget::playslotbutton45on()
{
    button45->setStyleSheet("QPushButton:pressed{border-image: url(:/images/button_green.png)}");
    playerbutton45->play();
}

void Widget::playslotbutton45off()
{
    button45->setStyleSheet("border-image: url(:/images/button_red.png)");
}

void Widget::playslotbutton46on()
{
    button46->setStyleSheet("QPushButton:pressed{border-image: url(:/images/button_green.png)}");
    playerbutton46->play();
}

void Widget::playslotbutton46off()
{
    button46->setStyleSheet("border-image: url(:/images/button_red.png)");
}
