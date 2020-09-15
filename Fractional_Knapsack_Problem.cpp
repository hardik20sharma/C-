/*
    Greedy Question

    Given weights and values of n items, we need to put these items in a knapsack of capacity W to get the maximum total value in the knapsack.

    Input:
        Items as (value, weight) pairs
        arr[] = {{60, 10}, {100, 20}, {120, 30}}
        Knapsack Capacity, W = 50;
    Output:
        Maximum possible value = 240 by taking items of weight 10 and 20 kg and 2/3 fraction of 30 kg.
        Hence total price will be 60+100+(2/3)(120) = 240.
*/

#include<bits/stdc++.h>
using namespace std;

class item
{
public:
    double value, weight;
    item(double input_1, double input_2) : value (input_1), weight (input_2) {}
};

bool compare_cnd(item i1, item i2)
{
    return (i1.value / i1.weight) > (i2.value / i2.weight);
}

int func(item items[], int n, int max_weight)
{
    sort(items, items + n, compare_cnd);

    double weight = 0, value = 0;

    for(int i=0; i<n; i++)
        if(weight + items[i].weight <= max_weight)
        {
            weight += items[i].weight;
            value += items[i].value;
        }
        else
        {
            value +=  items[i].value * ( (max_weight - weight) / items[i].weight);
            break;
        }

    return value;
}

int main()
{
    int max_weight = 50;
    item items[] = { {60, 10}, {100, 20}, {120, 30} };
    int n = sizeof(items) / sizeof(items[0]);
    cout << func(items, n, max_weight);
}