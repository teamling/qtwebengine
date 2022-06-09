// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

#ifndef QQUICKWEBENGINESCRIPTCOLLECTIONPRIVATE_H
#define QQUICKWEBENGINESCRIPTCOLLECTIONPRIVATE_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include <QtWebEngineCore/qwebenginescriptcollection.h>

#include <QPointer>

QT_BEGIN_NAMESPACE

class QQmlEngine;

class QQuickWebEngineScriptCollectionPrivate : public QWebEngineScriptCollection
{
public:
    QQuickWebEngineScriptCollectionPrivate(QWebEngineScriptCollectionPrivate *d);
    ~QQuickWebEngineScriptCollectionPrivate();

    Q_DISABLE_COPY(QQuickWebEngineScriptCollectionPrivate)
    QPointer<QQmlEngine> m_qmlEngine;
};

QT_END_NAMESPACE

#endif
