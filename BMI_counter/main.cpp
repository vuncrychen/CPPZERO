#include <iostream>
#include <iomanip>

using namespace std;

float user_height_converter(float);
float make_user_bmi(float, float);

int main(int argc, char const *argv[])
{
    float user_height;
    float user_weight;

    float new_user_height;

    float user_bmi;

    cout << "請輸入您的身高(cm): ";
    cin >> user_height;
    cout << "請輸入您的體重(kg): ";
    cin >> user_weight;

    new_user_height = user_height_converter(user_height);
    
    user_bmi = make_user_bmi(new_user_height, user_weight);

    cout << "您的 BMI 值為 " << fixed << setprecision(1) << user_bmi << endl;

    float min_bmi_range = 18.5;
    int max_bmi_range = 24;

    cout << endl;

    if (user_bmi < min_bmi_range)
    {
        cout << "您的 BMI 值過小, 多吃一點吧!" << endl;
    }
    else if (user_bmi >= min_bmi_range && user_bmi < max_bmi_range)
    {
        cout << "您的 BMI 值正常, 恭喜恭喜!" << endl;
    }
    else
    {
        cout << "您的 BMI 值過大, 少吃一點吧!" << endl;
    }
    
    return 0;
}

float user_height_converter(float old_height)
{
    return old_height/100;
}

float make_user_bmi(float height, float weight)
{
    return weight/(height*height);
}