#include <iostream>

using namespace std;
int calculateMedian(int {}nums){
return 0;
}

double calculateAverage(int{}nums){
int total=0;
int average = 0;
int cize = sizeof(nums); //return the size of an array or a string

for (i=0, i<cize;i++){
    total += nums[i];
}
average = total/cize;
return average;

}
int main()
{
    int numbers[] = {45,34,25,65,57};
    cout << "Average" << calculateAverage(numbers)<<endl;
    return 0;
}
