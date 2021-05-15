import java.util.*;
import java.math.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        BigInteger a = scanner.nextBigInteger();
        BigInteger b = scanner.nextBigInteger();

        BigInteger sum  = a.add(b);
        BigInteger prod = a.multiply(b);
        System.out.println(sum);
        System.out.println(prod);
         
    }
}