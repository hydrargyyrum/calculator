// ======================================================================
//  main.cpp
// ======================================================================
//                   This file is a part of the book
//             "Qt 5.10 Professional programming with C++"
//                       http://qt-book.com
// ======================================================================
//  Copyright (c) 2017 by Max Schlee
// ======================================================================

/*!
\file
\brief Так-так, это main!
\author VALERIYA

\date а на часах 00 и 1 ноября 2022
\version 1.0

Данный файл содержит в себе себя
*/

/*!
 * \include QApplication
 * \include Calculator.h
 *  \exception fatal error: QApplication: Нет такого файла или каталога
 */
#include <QApplication>
#include "Calculator.h"

// ----------------------------------------------------------------------
/**
 * \brief Запуск ракеты
 * \param [in] argc Входной параметр
 * \param [in] argc Параметр входной
 * \return Возврат аппликаций 2007 года
 *
 * Почему красные подчеркивания влияют на документирование кода?
 */
int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    Calculator calculator;

    calculator.setWindowTitle("Calculator");
    calculator.resize(230, 200);
    calculator.show();

    return app.exec();
}