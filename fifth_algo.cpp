#include <iostream>
using namespace std;
float cylinder(int r, int h)
{
    float Cylindervol;
    Cylindervol = 3.14 * r * r * h;
    return Cylindervol;
}
float rest_vol(int r, int h)
{
    float Cylindervol;
    Cylindervol = 3.14 * r * r * h;
    return Cylindervol / 2;
}

int main()
{
    int arr[10] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    float large = 0;

    int h = 0, height;
    int r = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            r = (j - i) / 2;
            if (arr[j] < arr[i])
            {
                h = arr[j];
                height = arr[i] - arr[j];
            }
            else
            {
                h = arr[i];
                height = arr[j] - arr[i];
            }
            float volume = cylinder(r, h) + rest_vol(r, height);
            if (large < volume)
            {
                large = volume;
            }
        }
    }
    cout << endl;
    cout << "The max volume is" << large << endl;
    return 0;
}