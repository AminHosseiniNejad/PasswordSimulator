
#include <iostream>
#include <string>

int main()
{
    int a[5];

    for (int i = 1; i< 10 ; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i != 2 * j - 1) continue;

            for (int k = 0; k < 10; k++)
            {
                if (j != 10 - k) continue;
                for (int m = 0; m < 10; m++)
                {
                    if (j != m - 1) continue;
                    for (int n = 0; n < 10; n++)
                    {
                        if (k != 14 - n) continue;
                        if (i + j + k + m + n == 30)
                        {
                            a[0] = i;
                            a[1] = j;
                            a[2] = k;
                            a[3] = m;
                            a[4] = n;
                        }
                    }
                }
            }
        }
        
       
        
    }

    std::cout << "The password is: ";
    for (int l = 0; l < 5; l++)
    {
        std::cout <<  a[l] ;
    }
    
    std::cout << "\n";

}

      


