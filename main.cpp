#include <QCoreApplication>
#include <QDebug>
#include <QtCore>
#include <QtMath>

class SomeMy
{
public:
    void maxiTheA(int n1)
    {
        QVector<int>ve1(n1);
        for(int i1=0;i1<n1;i1++)
        {   ve1[i1]=qrand()%30; }
        int su1=0, su2=0, su3=0;
        for(int i2=0;i2<n1;i2++)
        {   su1+= i2*ve1[i2];        }
        std::sort(ve1.begin(),ve1.end());
        for(int i3=0;i3<n1;i3++)
        {   su2+=ve1[i3]*i3;    }
        std::sort(ve1.begin(),ve1.end(),std::greater<int>());
        for(int i4=0;i4<n1;i4++)
        {   su3+= i4*ve1[i4];   }
        qDebug() <<ve1 << "\nuns. " << su1 << "asc. " << su2 << "desc. " << su3;


    }

};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qsrand(time(NULL));
    SomeMy s1;

    s1.maxiTheA(20);

    for(int i1=1;i1<100;i1++)
    {
//        int n1=qrand()%100;
//        int n2=qrand()%90;
    }
    return a.exec();
}
