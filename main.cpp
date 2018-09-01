//
//  main.cpp
//  projectBigMac/mapShot
//
//  Created by Captain Gary Pecker on 02.09.2018.
//  Copyright © 2018 Captain Gary Pecker. All rights reserved.
//

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
   
     int a[10][20];
     
     for (int i = 0; i < 10; i++)
     for (int j = 0; j < 20; j++)
     a[i][j] = j;
     
     for (int i = 0; i < 10; i++)
     {
     cout << endl;
     for (int j = 0; j < 20; j++)
     cout << a[i][j];
     }
    return 0;
}

//запуск программы: ctrl+f5 или меню "отладка" > "запуск без отладки"
//отладка программы: f5 или меню "отладка" > "запустить отладку"

