/*!
\file
\brief Это мощный калькуляторный хедер!
\author VALERIYA
\version 1.0

МАИ - это я!
МАИ - это мы!
МАИ - это лучшие люди страны!
*/
#pragma once
// ======================================================================
//  Calculator.h
// ======================================================================
//                   This file is a part of the book
//             "Qt 5.10 Professional programming with C++"
//                       http://qt-book.com
// ======================================================================
//  Copyright (c) 2017 by Max Schlee
// ======================================================================

/*!
 * \include QWidget
 * \include QStack
 */
#include <QWidget>
#include <QStack>

/// \brief Этот класс лежит в библиотеке
class QLCDNumber;
/// \brief А этот класс лежит в библиотеке за компанию
class QPushButton;

// ======================================================================
/**
 * \brief Наследник виджета
 *	\date октябрь 2022
 *
 * Раз! Два! Три! Эй! Ту-туру-...
 */
class Calculator : public QWidget
{
    /// @brief Ого!
    Q_OBJECT
private:
    QLCDNumber *m_plcd;
    QStack<QString> m_stk;
    QString m_strDisplay;

public:
    /**
     * Приватные поля не будут отображены в ссылке
     */
    int k = 0; ///< Невероятный факт!

    /// @brief Это наш конструктор!
    /// @param [in] pwgt Входящий виджет
    Calculator(QWidget *pwgt = 0);

    /**
     *  @brief Функция, создающая кнопку
     *  @param [in] str передает строку
     *  @return Батон хлеба
     *
     * Шучу, возвращает кнопку
     */
    QPushButton *createButton(const QString &str);

    /**
     * \brief Невероятная вычисляющая функция
     *
     * Заходит как-то раз пациент ко врачу...
     */
    void calculate();

public slots:

    /// @brief Функция, отвечающая за нажатие кнопки
    void slotButtonClicked();
};