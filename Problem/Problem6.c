
// প্রশ্ন:  
// একটি C প্রোগ্রাম লিখুন যা একটি ফাংশন ব্যবহার করে 50 থেকে 1 
// পর্যন্ত সংখ্যাগুলো উল্টো ক্রমে (descending order) প্রিন্ট করবে। 
// ফাংশনটি রিকার্সন (recursion) ব্যবহার করবে এবং প্রতিটি সংখ্যা 
// আলাদা লাইনে প্রিন্ট করতে হবে। যদি ইনপুট সংখ্যা 1-এর কম হয়, 
// তবে ফাংশনটি কিছু প্রিন্ট না করে ফিরে আসবে।

#include <stdio.h>

void printNumber(int i);

int main() {
  printNumber(50);        
    return 0;
}

void printNumber(int i) {
    if(i < 1) return;         
    printf("%d\n", i);  
    printNumber(i - 1);         
}

