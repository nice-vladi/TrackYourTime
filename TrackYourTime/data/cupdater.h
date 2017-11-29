/*
 * TrackYourTime - cross-platform time tracker
 * Copyright (C) 2015-2017  Alexander Basov <basovav@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef CUPDATER_H
#define CUPDATER_H

#include <QObject>
#include <QTcpSocket>

class cUpdater : public QObject
{
    Q_OBJECT
protected:
    QTcpSocket          m_Socket;
    QString             m_Data;
    QString             m_AvailableVersion;
public:
    explicit cUpdater(QObject *parent = 0);

signals:
    void newVersionAvailable(QString version);
public slots:
    void checkUpdates();
    void ignoreNewVersion();
private slots:
    void processError(QAbstractSocket::SocketError error);
    void processDisconnected();
    void processReadyRead();
};

#endif // CUPDATER_H
