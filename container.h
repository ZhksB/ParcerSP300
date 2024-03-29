#ifndef CONTAINER_H
#define CONTAINER_H

#include "point.h"
#include "spectrum.h"
#include <QList>
#include <QMap>


class Container
{
private:
    static QMap<QString, QList<Spectrum>> specta;
    Container();
public:
    static void fillList(const QStringList &, const QString &);
    static QMap<QString, QList<Spectrum>> getSpecta();
    static QString createMottShottky(const QString &);
    static void setSpecInFile(int value);
};

#endif // CONTAINER_H
