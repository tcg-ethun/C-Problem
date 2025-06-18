
// প্রশ্ন:  
// একটি C প্রোগ্রাম লিখুন যা ব্যবহারকারীর কাছ থেকে একটি টাকার
//  পরিমাণ (float) ইনপুট নেবে। যদি ইনপুট মান 1000 টাকার বেশি হয়, 
//  তবে একটি ফাংশন ব্যবহার করে 10% ডিসকাউন্ট প্রয়োগ করবে এবং
//   ডিসকাউন্ট প্রয়োগের পরের মান দুই দশমিক স্থান পর্যন্ত প্রিন্ট করবে।
//    যদি মান 1000 টাকা বা তার কম হয়, তবে প্রিন্ট করবে যে ব্যবহারকারী
//     ডিসকাউন্টের জন্য যোগ্য নয় এবং মূল মানটি প্রিন্ট করবে।


#include <stdio.h>

 float calculate_Discount(float value);
int main() {
    float value  , result ;
printf("Enter Tk : ");
scanf("%f",&value);
   if(value>1000){
 result = calculate_Discount(value);
 printf("The value after adding Discount :  %.2f TK",result);
    }
    else{
        printf("You are not applicable for Discount & Your value is  :  %f",value);
    }
    return 0;
}

 float calculate_Discount(float value){
    value = value - (value*0.10);
    return value;
 }