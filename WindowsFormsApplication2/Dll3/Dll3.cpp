// Dll3.cpp : Определяет экспортируемые функции для DLL.
//

#include "pch.h"
#include "framework.h"
#include "Dll3.h"


// Пример экспортированной переменной
DLL3_API int nDll3=0;

// Пример экспортированной функции.
DLL3_API int fnDll3(void)
{
    return 0;
}

// Конструктор для экспортированного класса.
CDll3::CDll3()
{
    return;
}
