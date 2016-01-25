#ifndef JLSERIALTHREAD_H
#define JLSERIALTHREAD_H

#include <QThread>
#include <QSerialPort>

class JLSerialThread : public QThread
{
public:
    JLSerialThread();
    ~JLSerialThread();
    int JLSend2Port(QByteArray data);

    void run();

private:
    // functions list

    // paramenter list
    //QSerialPort *mSystemSerialPort;


};

#endif // JLSERIALTHREAD_H
