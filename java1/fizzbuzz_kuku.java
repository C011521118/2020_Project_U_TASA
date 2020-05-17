class fizzbuzz_kuku{
    public static void main(String[] args){
        for (int i=1;i<=9 ;i++) {
          for (int j=1;j<=9 ;j++){
              if((i*j%3==0)&&(i*j%5==0)){
                System.out.printf("%8s","fizzbuzz");
              }else if(i*j%3==0){
                System.out.printf("%8s","fizz");
              }else if (i*j%5==0){
                System.out.printf("%8s","Bizz");
              }else{
                System.out.printf("%8d",i*j);
              }
            }
            System.out.println();
          }
        }
      }
