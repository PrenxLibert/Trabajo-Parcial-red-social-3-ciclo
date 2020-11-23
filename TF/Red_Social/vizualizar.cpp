#include "vizualizar.h"
#include "ui_vizualizar.h"
#include "Library.h"

Vizualizar::Vizualizar(Publicacion p,User _u,QWidget *parent) :QDialog(parent),ui(new Ui::Vizualizar){
    ui->setupUi(this);

    u=_u;

    auto IDP = [](Comment m, Comment n) {return m.idPub > n.idPub; };

    auto existenciaIdP=[](Comment a, Comment b){
        if(a.idPub==b.idPub){return true;}
        else return false;
    };

    comentarios= Comments(IDP,existenciaIdP);
    comentarios.cargar();

    publicacion=p;

    stringstream ss;
    string tmp;
    stringstream ss1;
    string tmp1;

    ss << publicacion.pubdate;
    tmp = ss.str();

    ss1 << publicacion.id;
    tmp1 = ss1.str();


    ui->tbxPublic_2->append("ID "+QString::fromStdString(tmp1));
    ui->tbxPublic_2->append(QString::fromStdString(p.name));
    ui->tbxPublic_2->append(QString::fromStdString(p.twet));
    ui->tbxPublic_2->append(QString::fromStdString(p.date));
    ui->tbxPublic_2->append("LIKES  " + QString::fromStdString(tmp));
    ui->tbxPublic_2->append("");
    ui->tbxPublic_2->append("");

    int id=publicacion.id;

    if(id>0){
        auto print=[=](Comment c){

            if(c.idPub==id){

                Comment* c=new Comment(0,id,"","");
                c=Vizualizar::comentarios.buscar(*c);
                Vizualizar::ui->tbxPublic->append(QString::fromStdString(c->text));
                Vizualizar::ui->tbxPublic->append("");
                Vizualizar::ui->tbxPublic->append("");
            }

        };
        int cant=comentarios.getCant();
        comentarios.print(print,cant);
    }
}

Vizualizar::~Vizualizar()
{
    delete ui;
}

void Vizualizar::on_pbtn_comentar_clicked()
{
    QString tmp;

    tmp=ui->tbxNComent->text();

    Comment aux(0,publicacion.id,u.date,tmp.toStdString());


    ui->tbxPublic->append(QString::fromStdString(aux.text));

    ui->tbxNComent->setText("");

    comentarios.push(aux);

    comentarios.saved(aux);
}
