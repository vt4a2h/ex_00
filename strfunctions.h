#pragma once

#include <cstdio> // for size_t

namespace str_f {

    /*!
     * \brief Функция вычисления длины ASCII-строки.
     * \param str строка.
     * \return длину строки (без завершаюшего символа).
     */
    size_t strlen(const char* str);

    /*!
     * \brief Функция копирования ASCII-строк.
     *        Копирует src в dst.
     * \param dst строка назначения.
     * \param src исходная строка.
     * \return указатель на строку назначения.
     */
    char *strcpy(char *dst, const char *src);

    /*!
     * \brief Функция лексикографического сравнения ASCII-строк.
     *        Пример парвил сравнения: aaa < ab < z; Zz < a < bz.
     * \param str1 первая строка.
     * \param str2 вторая строка
     * \return -1 -- если первая меньше второй;
     *          0 -- если строки равны;
     *          1 -- если первая больше второй.
     */
    int strcmp(const char *str1, const char *str2);

    /*!
     * \brief Функция инвертирует строку.
     * \param str строка.
     * \return указатель на инвертированную строку.
     */
    char* strrev(char* str);

    /*!
     * \brief Функция складывает две строки.
     * \param dst строка назначения.
     * \param src исходная строка
     * \return указатель на стркоу назначения.
     */
    char* strcat(char* dst, const char* src);
}
