/* This file is part of the Screenie project.
   Screenie is a fancy screenshot composer.

   Copyright (C) 2008 Ariya Hidayat <ariya.hidayat@gmail.com>

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation,
   Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef SETTINGS_H
#define SETTINGS_H

#include <QtCore/QObject>

#include "UtilsLib.h"

class QSize;

class SettingsPrivate;

class Settings : public QObject
{
    Q_OBJECT

public:
    UTILS_API static Settings &getInstance();
    UTILS_API static void destroyInstance();

    UTILS_API const QSize &getMaximumImageSize() const;
    UTILS_API void setMaximumImageSize(const QSize &maximumImageSize);

    UTILS_API const QString &getLastImageDirectoryPath() const;
    UTILS_API void setLastImageDirectoryPath(const QString &lastImageDirectoryPath);

signals:
    void changed();

protected:
    virtual ~Settings();

private:
    SettingsPrivate *d;

    Settings();

};

#endif // SETTINGS_H
