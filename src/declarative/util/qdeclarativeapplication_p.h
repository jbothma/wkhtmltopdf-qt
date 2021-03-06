/****************************************************************************
**
** Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the QtDeclarative module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** No Commercial Usage
** This file contains pre-release code and may not be distributed.
** You may use this file in accordance with the terms and conditions
** contained in the Technology Preview License Agreement accompanying
** this package.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights.  These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
**
**
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QDECLARATIVEAPPLICATION_P_H
#define QDECLARATIVEAPPLICATION_P_H

#include <QtCore/QObject>
#include <qdeclarative.h>
#include <private/qdeclarativeglobal_p.h>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(Declarative)

class QDeclarativeApplicationPrivate;
class Q_DECLARATIVE_PRIVATE_EXPORT QDeclarativeApplication : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool active READ active NOTIFY activeChanged)
    Q_PROPERTY(Qt::LayoutDirection layoutDirection READ layoutDirection NOTIFY layoutDirectionChanged)

public:
    explicit QDeclarativeApplication(QObject *parent = 0);
    virtual ~QDeclarativeApplication();
    bool active() const;
    Qt::LayoutDirection layoutDirection() const;

protected:
    bool eventFilter(QObject *obj, QEvent *event);

Q_SIGNALS:
    void activeChanged();
    void layoutDirectionChanged();

private:
    Q_DISABLE_COPY(QDeclarativeApplication)
    Q_DECLARE_PRIVATE(QDeclarativeApplication)
};

QT_END_NAMESPACE

QML_DECLARE_TYPE(QDeclarativeApplication)

QT_END_HEADER

#endif // QDECLARATIVEAPPLICATION_P_H
