/*****************************************************************************/
/* main.cc for voxnovo                                                       */
/* Copyright (c) 2011 Thomas Hartman (rokstar83@gmail.com)                   */
/*                                                                           */
/* This program is free software; you can redistribute it and/or             */
/* modify it under the terms of the GNU General Public License               */
/* as published by the Free Software Foundation; either version 2            */
/* of the License, or the License, or (at your option) any later             */
/* version.                                                                  */
/*                                                                           */
/* This program is distributed in the hope that it will be useful,           */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of            */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             */
/* GNU General Public License for more details.                              */
/*****************************************************************************/
#include <QMessageBox>
#include <QApplication>
#include <QString>

#include "voxnovo.hh"

int main(int argc, char ** argv)
{
	 QApplication * app = new QApplication(argc, argv);
	 app->setApplicationName("voxnovo");
	 Voxnovo * voxnovo = new Voxnovo();

	 voxnovo->show();

	 return app->exec();
}