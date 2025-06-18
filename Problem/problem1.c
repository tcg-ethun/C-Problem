
// প্রশ্ন:  
// একটি C প্রোগ্রাম লিখুন যা 1 থেকে 50 পর্যন্ত সংখ্যাগুলোর মধ্যে বিজোড় 
// সংখ্যাগুলোর যোগফল বের করবে এবং সেই যোগফলকে বিজোড় সংখ্যার সংখ্যা দিয়ে
//  ভাগ করে তাদের গড় (average) নির্ণয় করবে। গড়টি দুই দশমিক স্থান পর্যন্ত প্রিন্ট করতে হবে।

#include <stdio.h>

  void proBlem();

int main() {
      proBlem();
    return 0;
}

  void proBlem(){
    int i  ,s =0 ,count = 0;
    float result ;
   for(i=1;i<=50;i++){
           if(i%2!=0){
              s+=i;
              count ++;
           }
   }
    result =   s/count;
      printf("%.2f \n",result);
  }
