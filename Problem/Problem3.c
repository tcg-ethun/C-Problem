
// প্রশ্ন:

// একটি C প্রোগ্রাম লিখুন যা ব্যবহারকারীর কাছ থেকে একটি 
// পূর্ণসংখ্যা ইনপুট নেবে এবং একটি ফাংশন ব্যবহার করে সেই 
// সংখ্যার নামতা (1 থেকে 10 পর্যন্ত গুণফল) প্রিন্ট করবে। প্রতিটি
//  গুণফল আলাদা লাইনে প্রিন্ট করতে হবে।

#include <stdio.h>

int table(int n);

int main() {
       int n ,result ;
       printf("Enter Number : ");
       scanf("%d",&n);
       result = table(n);
       printf("%d \n ",result);
    return 0;
}

int table(int n){
    for(int i = 1; i<10;i++){
        printf("%d \n",i*n);
    }
}
