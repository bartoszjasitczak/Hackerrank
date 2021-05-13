import java.util.*;

class Solution{
    public static void main(String []argh){
        int sum_1;
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();

            for(int j=0;j<n;j++){
                
                sum_1 = 0;
                
                for (int k = 0; k<=j; k++)
                {
                    sum_1 += (int)Math.pow(2,k) * b;
                }
                
                int sum_2 = a + sum_1;
                
                System.out.print(sum_2  + " ");
            }

            System.out.println();

        }
        in.close();


    }
}
