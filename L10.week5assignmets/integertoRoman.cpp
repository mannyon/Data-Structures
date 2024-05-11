#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int number = 210;
    string numberStr = to_string(number);
    int k = 1;

    char ch1 = 'I', ch5 = 'V', ch10 = 'X', ch50 = 'L', ch100 = 'C', ch500 = 'D', ch1000 = 'M';
    string ans;

    for (int i = 1; i < numberStr.size(); i++)
    {
        k *= 10;
    }

    
    
    

    //  for k = 1000

    if (k == 1000)
    {
        int thousands = number / 1000;        // Extract thousands place digit
        int hundreds = (number % 1000) / 100; // Extract hundreds place digit
        int tens = (number % 100) / 10;       // Extract tens place digit
        int ones = number % 10;

        // thousands
        while (thousands)
        {
            ans.push_back(ch1000);
            thousands--;
        }

        //hunderds
        if (hundreds == 9)
        {
            ans.push_back(ch100);
            ans.push_back(ch1000);
        }
        else if (hundreds == 4)
        {
            ans.push_back(ch100);
            ans.push_back(ch500);
        }
        else if (hundreds < 4)
        {
            while (hundreds)
            {
                ans.push_back(ch100);
                hundreds--;
            }
        }
        else
        {
            if (hundreds == 5)
            {
                ans.push_back(ch500);
            }
            else
            {
                ans.push_back(ch500);
                while (hundreds - 5)
                {
                    ans.push_back(ch100);
                    hundreds--;
                }
            }
        }

        // tens
        if (tens == 9)
        {
            ans.push_back(ch10);
            ans.push_back(ch100);
        }
        else if (tens == 4)
        {
            ans.push_back(ch10);
            ans.push_back(ch50);
        }
        else if (tens < 4)
        {
            while (tens)
            {
                ans.push_back(ch10);
                tens--;
            }
        }
        else
        {
            if (tens == 5)
            {
                ans.push_back(ch50);
            }
            else
            {
                ans.push_back(ch50);
                while (tens - 5)
                {
                    ans.push_back(ch10);
                    tens--;
                }
            }
        }

        // ones
        if (ones == 9)
        {
            ans.push_back(ch1);
            ans.push_back(ch10);
        }
        else if (ones == 4)
        {
            ans.push_back(ch1);
            ans.push_back(ch5);
        }
        else if (ones < 4)
        {
            while (ones)
            {
                ans.push_back(ch1);
                ones--;
            }
        }
        else
        {
            if (ones == 5)
            {
                ans.push_back(ch5);
            }
            else
            {
                ans.push_back(ch5);
                while (ones - 5)
                {
                    ans.push_back(ch1);
                    ones--;
                }
            }
        }
       
    }

    

    // for k = 100

    else if (k == 100)
    {
        
        int hundreds = number / 100; // Extract hundreds place digit
        int mH = hundreds;
        int tens = (number % 100) / 10;       // Extract tens place digit
        int ones = number % 10;

        // hundreds
        if (hundreds == 9)
        {
            ans.push_back(ch100);
            ans.push_back(ch1000);
        }
        else if (hundreds == 4)
        {
            ans.push_back(ch100);
            ans.push_back(ch500);
        }
        else if (hundreds < 4)
        {
            if(hundreds == 1){
                ans.push_back(ch100);
            }
            else {
                while (hundreds)
            {
                ans.push_back(ch100);
                hundreds--;
            }
            }
        }
        else
        {
            if (hundreds == 5)
            {
                ans.push_back(ch500);
            }
            else
            {
                ans.push_back(ch500);
                while (hundreds - 5)
                {
                    ans.push_back(ch100);
                    hundreds--;
                }
            }
        }

        // tens
      
        
        if (tens == 9)
        {
            ans.push_back(ch10);
            ans.push_back(ch100);
        }
        else if (tens == 4)
        {
            ans.push_back(ch10);
            ans.push_back(ch50);
        }
        else if (tens < 4)
        {
            while (tens)
            {
                ans.push_back(ch10);
                tens--;
            }
        }
        else
        {
            if (tens == 5)
            {
                ans.push_back(ch50);
            }
            else
            {
                ans.push_back(ch50);
                while (tens - 5)
                {
                    ans.push_back(ch10);
                    tens--;
                }
            }
        }

        // ones
       
        if (ones == 9)
        {
            ans.push_back(ch1);
            ans.push_back(ch10);
        }
        else if (ones == 4)
        {
            ans.push_back(ch1);
            ans.push_back(ch5);
        }
        else if (ones < 4)
        {
            while (ones)
            {
                ans.push_back(ch1);
                ones--;
            }
        }
        else
        {
            if (ones == 5)
            {
                ans.push_back(ch5);
            }
            else
            {
                ans.push_back(ch5);
                while (ones - 5)
                {
                    ans.push_back(ch1);
                    ones--;
                }
            }
        }
       
    }

    // for k = 10

    else if (k == 10)
    {
        
       
        int tens = number / 10;       // Extract tens place digit
        int ones = number % 10;
        
        // tens
        if (tens == 9)
        {
            ans.push_back(ch10);
            ans.push_back(ch100);
        }
        else if (tens == 4)
        {
            ans.push_back(ch10);
            ans.push_back(ch50);
        }
        else if (tens < 4)
        {
            while (tens)
            {
                ans.push_back(ch10);
                tens--;
            }
        }
        else
        {
            if (tens == 5)
            {
                ans.push_back(ch50);
            }
            else
            {
                ans.push_back(ch50);
                while (tens - 5)
                {
                    ans.push_back(ch10);
                    tens--;
                }
            }
        }

        // ones
        if (ones == 9)
        {
            ans.push_back(ch1);
            ans.push_back(ch10);
        }
        else if (ones == 4)
        {
            ans.push_back(ch1);
            ans.push_back(ch5);
        }
        else if (ones < 4)
        {
            while (ones)
            {
                ans.push_back(ch1);
                ones--;
            }
        }
        else
        {
            if (ones == 5)
            {
                ans.push_back(ch5);
            }
            else
            {
                ans.push_back(ch5);
                while (ones - 5)
                {
                    ans.push_back(ch1);
                    ones--;
                }
            }
        }
       
    }

    else
    {
        
       
            
        int ones = number % 10;
        
        
        // ones
        if (ones == 9)
        {
            ans.push_back(ch1);
            ans.push_back(ch10);
        }
        else if (ones == 4)
        {
            ans.push_back(ch1);
            ans.push_back(ch5);
        }
        else if (ones < 4)
        {
            while (ones)
            {
                ans.push_back(ch1);
                ones--;
            }
        }
        else
        {
            if (ones == 5)
            {
                ans.push_back(ch5);
            }
            else
            {
                ans.push_back(ch5);
                while (ones - 5)
                {
                    ans.push_back(ch1);
                    ones--;
                }
            }
        }
       
    }


    std::cout << ans << std::endl;

    
    

    // I	1
    // V	5
    // X	10
    // L	50
    // C	100
    // D	500
    // M	1000
}