/*
 *   Copyright 2013, Jorge Martinez Vargas ( jormarv5@fiv.upv.es )
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 * 
 *      Author: Jorge Martinez Vargas ( jormarv5@fiv.upv.es )
 */

#include "aboutwindow.h"

AboutWindow::AboutWindow(QWidget *parent, QVector<QString> *text) :
    QDialog(parent)
{
    about_text = new QTextEdit;
    about_layout = new QVBoxLayout;
    setLayout(about_layout);
    about_layout->addWidget(about_text);
    setAttribute(Qt::WA_DeleteOnClose);

    about_text->insertPlainText(ABOUT_L1);
    about_text->insertPlainText(ABOUT_L2);
    about_text->insertPlainText(ABOUT_L3);
    about_text->insertPlainText(ABOUT_L4);

    if(text)
        for(int i=0;i<text->size();i++)
            about_text->insertPlainText((*text)[i]);

    about_text->setReadOnly(true);

    setFixedSize(800,400);
    show();
}
