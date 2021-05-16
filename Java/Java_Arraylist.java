// Java 10+
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        var numbers = new ArrayList<ArrayList<Integer>>();

        var scanner = new Scanner(System.in);
        int queries = scanner.nextInt();
        for (int i = 0; i < queries; i++)
        {
            numbers.add(new ArrayList<Integer>());
            int size = scanner.nextInt();

            for (int j = 0; j < size; j++)
            {
                numbers.get(i).add(scanner.nextInt());
            }
        }

        int queries_2 = scanner.nextInt();

        for (int i = 0; i < queries_2; i++ )
        {
            final int row = scanner.nextInt() - 1;
            final int col = scanner.nextInt() - 1;

            if ( row < numbers.size() && col < numbers.get(row).size() )
            {
                var element = numbers.get(row).get(col);
                System.out.println(element);
            }
            else
            {
                System.out.println("ERROR!");
            }
        }
    }
}