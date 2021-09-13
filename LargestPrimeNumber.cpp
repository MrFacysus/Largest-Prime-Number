#include <iostream>

int main()
{

    std::cout << "Largest Prime Factor Solution!\n";

    int answer = 0;
    long long problem = 600851475143;
    bool prime = true;

    for (int I = 1; I < problem; I++)
    {

        if (problem % I == 0)
        {

            for (int j = 2; j < I/2; j++)
            {

                if (I % j == 0)
                {

                    prime = false;

                }

            }

            if (prime)
            {

                std::cout << answer << std::endl;
                answer = I;

            }

            prime = true;

        }

    }

    std::cout << answer;

}