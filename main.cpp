//
//  main.cpp
//  projectBigMac/randomShot
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
    for (int i = 1; i > 0; i++)
        cout << (rand() % 3);
    
    return 0;
}

//запуск программы: ctrl+f5 или меню "отладка" > "запуск без отладки"
//отладка программы: f5 или меню "отладка" > "запустить отладку"

