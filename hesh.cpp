#include "hesh.h"

Hesh::Hesh()
{

}
QString Hesh::Func (QString a){
    QByteArray ba = a.toUtf8();

    ba=QCryptographicHash::hash(ba,QCryptographicHash::Sha256).toHex();

    return ba;
}
