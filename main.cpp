//
//  main.cpp
//  projectBigMac/randomShot
//
//  Created by Captain Gary Pecker on 02.09.2018.
//  Copyright © 2018 Captain Gary Pecker. All rights reserved.
//

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    
    int mapSizeWidth; //переменная ширины карты для тестирования
    int mapSizeHeight; //переменная высоты карты для тестирования
    
    cout << "Insert Hight Data of Map"<<endl;
    cin >> mapSizeHeight; //ввод высоты карты для теста
    cout << "Insert Width Data of Map"<< endl;
    cin >> mapSizeWidth; //ввод ширины карты для теста
    
    for (int j = 0; j < (mapSizeHeight - 4); j++) //запуск цикла заполнения верхних слоёв карты (без препятствий)
    {
        cout << endl;
        for (int i = 0;i < mapSizeWidth;i++)
            cout << 0;
    }
   
    for (int j = 0;j < 3;j++) //запуск цикла генерации 3-х блоков препятствий (3 блока - условная высота прыжка персонажа)
    {
        cout << endl;
        for (int i = 0; i < mapSizeWidth ; i++)
        {
            cout << (rand() % 2);
        }
    }
    cout << endl;
    for (int i = 0; i< mapSizeWidth;i++) //запуск цикла заполнения нижнего слоя карты (пол)
        cout << 1;
    cout << endl<<endl;
    return 0;
}

//запуск программы: ctrl+f5 или меню "отладка" > "запуск без отладки"
//отладка программы: f5 или меню "отладка" > "запустить отладку"

//Пример массива карты:
//
// При: mapSizeHeight = 10 mapSizeWidth = 20
//
//00000000000000000000
//00000000000000000000
//00000000000000000000
//00000000000000000000
//00000000000000000000
//00000000000000000000
//10011110010011100000
//00101001111010111111
//00000000100110000110
//11111111111111111111

