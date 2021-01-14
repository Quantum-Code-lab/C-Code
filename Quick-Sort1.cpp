#include<iostream>
int num[100];
void Quicksort(int f, int l)
{
    int i,j;
    if (f < l)
    {
        i = f+1;
        j = l;
        while (num[i] < num[f])
        {
            i++;

        }
        while (num[j] > num[f])
        {
            j--;
        }
        while (num i < j)
        {
            swap(num[i],num[j]);
            while (num[i] < num[f])
            {
                i++;
            }
            while (num[j] > num[f])
            {
                j--;
            }
        }
        swap(num[j], num[f]);
        Quicksort(f, j-1);
        Quicksort(j+1, l);



    }
}

int main()
{
    int n;
    cout << "Enter the number"<< endl;
    cin >> n;
    for(int i = 0; i < n; i++)
        num[i] = random()%1000;
    cout<< "the unsorted number";

    for (int i = 0; i < n; i++)
        cout << num [i] << " ";
        cout << endl;

    Quicksort(0,n-1);
    cout << "The Sorted Number is:";

    for (int i = 0; i < n; i++)

      cout << num[i] << " ";
}

