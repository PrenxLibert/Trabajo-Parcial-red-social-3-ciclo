#include "interfast.h"
#include "ui_interfast.h"
#include "chat.h"
#include <QVBoxLayout>
#include <QLabel>
#include <string>

interfast::interfast(User* _us_log, List* Listain, QWidget *parent) :QDialog(parent), ui(new Ui::interfast), listainter(Listain)
{
    us_log = _us_log;
    ui->setupUi(this);

    //connect(ui->pshbu_mos_perfil,SIGMA(released()),this,SLOT(MathButtonPresend()));
    string emisor, receptor, status;
    ifstream amigos_l("amiwis.txt");
    ui->scroll_solicitudes->setLayout(wigvacio);
    while (getline(amigos_l, emisor, ',')) {
              getline(amigos_l, receptor, ',');
              getline(amigos_l, status);
              if(status == "1"){
                  QLabel* texto = new QLabel(QString::fromStdString(receptor));
                  wig->addWidget(texto);
                  ui->scroll_solicitudes->setLayout(wig);
              }
              if(status == "2"){
                  QLabel* texto = new QLabel(QString::fromStdString(receptor));
                  wig->addWidget(texto);
                  ui->scroll_amigos->setLayout(wig);
              }

    }
    amigos_l.close();
    ui->scroll_solicitudes->setLayout(wig);
  }



interfast::~interfast()
{
    delete ui;
}

void interfast::sort_por_alfabeto()
{
    //Comparación de primeras letras
    for(short i = 0; i < listainter->getCantidad(); i++)
    {
        if(ui->ledt_nickname->text().toStdString()[0] == listainter->getUser(i)->nombre[0])
        {
            arr.push_back(listainter->getUser(i)->nombre);
        }
    }

    //Método burbuja para ordenamiento de busqueda en orden alfabético
        string temp;
        short numLetra = 0;
        for(short i = 0; i < short(arr.size()) - 1; i++)
          {
              for(short j = i + 1; j < short(arr.size()); j++) //static_cast<int>(f)
              {
                  if(static_cast<int>(arr.at(i)[numLetra]) < static_cast<int>(arr.at(j)[numLetra]))
                  {
                      temp = arr[j];
                      arr[j] = arr[i];
                      arr[i] = temp;
                  }
                  if(static_cast<int>(arr.at(i)[numLetra]) == static_cast<int>(arr.at(j)[numLetra]))
                  {
                      ++numLetra; j--;
                  }
              }
          }

        ui->user1->setText(QString::fromStdString(arr.at(0)));
        ui->user2->setText(QString::fromStdString(arr.at(1)));
        ui->user3->setText(QString::fromStdString(arr.at(2)));
}

void interfast::on_pushButton_clicked()
{
    ui->chatText->append(QString::fromStdString(us_log->nickname) + ": " + ui->txtbox_envio->text());
    ui->txtbox_envio->setText(" ");
}

void interfast::on_pshbu_mos_perfil_clicked()
{

}



void interfast::on_btnAccept_clicked()
{
    short status = 2;
    string emisor, receptor, status2;
     ifstream amigos_l("amiwis.txt");
     while (getline(amigos_l, emisor, ',')) {
               getline(amigos_l, receptor, ',');
               getline(amigos_l,status2);
               if(status2 == "1"){
                   if(emisor == ui->ledt_nickname->text().toStdString()){
                       ofstream amigos_c("amiwis.txt", std::ios::app);
                       amigos_c<<us_log->nickname<<","<<ui->ledt_nickname->text().toStdString()<<","<<status;
                       amigos_c.close();
                   }

               }

     }
     amigos_l.close();
    //string temp;
    /*if()
    {

    }
    if()
    {

    }*/


}

void interfast::on_btnDecline_clicked()
{
    short status = 0;
    string emisor, receptor, status2;
     ifstream amigos_l("amiwis.txt");
     while (getline(amigos_l, emisor, ',')) {
               getline(amigos_l, receptor, ',');
               getline(amigos_l,status2);
               if(status2 == "1"){
                   if(emisor == ui->ledt_nickname->text().toStdString()){
                       ofstream amigos_c("amiwis.txt", std::ios::app);
                       amigos_c<<us_log->nickname<<","<<ui->ledt_nickname->text().toStdString()<<","<<status;
                       amigos_c.close();
                   }

               }
               amigos_l.close();
     }
}

void interfast::on_pushButton_4_clicked()
{
    ui->psbu_solicitud1->setEnabled(true);
    ui->psbu_solicitud2->setEnabled(true);
    ui->psbu_solicitud3->setEnabled(true);
    //aqui debe de desatar la funcion buscar en el colocar en los labels
}

void interfast::on_psbu_solicitud1_clicked()
{
    ui->scroll_solicitudes->setLayout(wigvacio);
    short status =1;
    ofstream amigos_c("amiwis.txt", std::ios::app);
    amigos_c<<us_log->nickname<<","<< ui->user1->text().toStdString()<<","<<status;
    amigos_c.close();
    QLabel* texto = new QLabel(ui->user1->text());
    wig->addWidget(texto);
    ui->scroll_solicitudes->setLayout(wig);
    amigos_c.close();

}

void interfast::on_psbu_solicitud2_clicked()
{
    ui->scroll_solicitudes->setLayout(wigvacio);
    short status =1;
    ofstream amigos_c("amiwis.txt", std::ios::app);
    amigos_c<<us_log->nickname<<","<< ui->user2->text().toStdString()<<","<<status;
    amigos_c.close();
    QLabel* texto = new QLabel(ui->user2->text());
    wig->addWidget(texto);
    ui->scroll_solicitudes->setLayout(wig);
    amigos_c.close();
}

void interfast::on_psbu_solicitud3_clicked()
{
    ui->scroll_solicitudes->setLayout(wigvacio);
    short status =1;
    ofstream amigos_c("amiwis.txt", std::ios::app);
    amigos_c<<us_log->nickname<<","<< ui->user3->text().toStdString()<<","<<status;
    amigos_c.close();
    QLabel* texto = new QLabel(ui->user3->text());
    wig->addWidget(texto);
    ui->scroll_solicitudes->setLayout(wig);
    amigos_c.close();
}

void interfast::on_pushButton_5_clicked()
{
    string emisor, receptor, status;
     ifstream amigos_l("amiwis.txt");
     while (getline(amigos_l, emisor, ',')) {
               getline(amigos_l, receptor, ',');
               getline(amigos_l,status);
               if(status == "2"){
                   if(ui->txtbox_amigos->text()== QString::fromStdString(receptor)){
                       //aqui deberia pasar todos los datos del receptor

                   }

               }
               amigos_l.close();
     }


}
