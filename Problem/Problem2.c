
// প্রশ্ন:  
// একটি C প্রোগ্রাম লিখুন যা ব্যবহারকারীর কাছ থেকে দুটি পূর্ণসংখ্যা 
// ইনপুট নেবে এবং একটি ফাংশন ব্যবহার করে সেই দুটি সংখ্যার যোগফল 
// বের করবে। তারপর যোগফলটি প্রিন্ট করতে হবে।

#include <stdio.h>

int sum(int a , int b );

int main() {
     
     int a , b ,result ;
     printf("Enter 1st Number : ");
     scanf("%d",&a);
      printf("Enter 2nd Number : ");
     scanf("%d",&b);
    result = sum(a,b);
    printf("The sum is : %d \n",result);
}

int sum(int a , int b ){
     return a + b;
}
