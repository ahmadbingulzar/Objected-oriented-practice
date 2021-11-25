class Prime
{
private:
    int number[8] = {};

public:
    int prime_check(int user_number[8])
    {
        int i, j, resulting = 0;
        int check;
        for (int i = 0; i <= 8; ++i)
        {
            number[i] = user_number[i];
        }

        for (i = 0; i <= 8; i++)
        {
            for (check = 1, j = 2; j <= number[i] / 2; j++)
            {
                if (number[i] % j == 0)
                {
                    check = 0;
                    break;
                }
            }
            if (check == 1)
            {
                if (number[i] > resulting)
                    resulting = number[i];
            }
        }
        return resulting;
    }
    int * rotate(int arr[8], int swaps)
    {
        int my[8]={};
        int n = 9;
        int i;
        for (int j = 1; j <= swaps; j++)
        {
            cout << endl;
            int x = number[n - 1];
            for (i = n - 1; i > 0; i--)
                number[i] = number[i - 1];
            number[0] = x;
            for (int i = 0; i < n; i++)
                cout << number[i] << ' ';
        }
      return number;
    }
};