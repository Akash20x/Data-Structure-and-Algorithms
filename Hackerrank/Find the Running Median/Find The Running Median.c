//TODO: Finding median of given array

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int t = 0;
    scanf("%d", &t);                                      //TODO: Reading number of test cases
    int arr[t];

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);                            //TODO: Reading elements of array
        float med = 0;
        for (int j = 0; j < (i + 1); j++)
        {
            int count = 0;
            int count2 = 0;
            do
            {
                count = 0;
                for (int k = 0; k < i - count2; k++)      //TODO: Sorting array
                {
                    if (arr[k] < arr[k + 1])
                    {
                        int tem = arr[k + 1];
                        arr[k + 1] = arr[k];
                        arr[k] = tem;
                        count++;
                    }
                }
                count2++;
            }
            while(count > 0);
        }
        if (i % 2 == 0)                                //TODO: Finding median
        {
            int num = i / 2;
            med = (float)arr[num];
        }
        else
        {
            int num1 = (i - 1) / 2;
            med = (arr[num1] + arr[num1 + 1]) / 2.0;   
        }
        printf("%.1f\n",med);                          //TODO: Printing median
    }

}
