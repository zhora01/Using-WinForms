// Dll2.cpp : Определяет экспортируемые функции для DLL.
//

#include "pch.h"
#include "framework.h"
#include "Dll2.h"


// Пример экспортированной переменной
DLL2_API int nDll2=0;

// Пример экспортированной функции.
DLL2_API int fnDll2(void)
{
    return 0;
}

// Конструктор для экспортированного класса.
CDll2::CDll2()
{
    return;
}
