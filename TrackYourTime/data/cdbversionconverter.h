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
#ifndef CDBVERSIONCONVERTER_H
#define CDBVERSIONCONVERTER_H

#include <QString>

extern const char* FILE_FORMAT_PREFIX;
const int FILE_FORMAT_PREFIX_SIZE = 5;

int getDBVersion(const QString& FileName);
bool convertToVersion3(const QString& SrcFileName,const QString& DstFileName, bool makeBackup = true);
bool convertToVersion4(const QString& SrcFileName,const QString& DstFileName, bool makeBackup = true);


#endif // CDBVERSIONCONVERTER_H
