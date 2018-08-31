import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) {
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        InputReader in = new InputReader(inputStream);
        PrintWriter out = new PrintWriter(outputStream);
        Task solver = new Task();
        solver.solve(in, out);
        out.close();
    }

    static class Task {

        // ================= 代码实现开始 =================

        /* 请在这里定义你需要的全局变量 */

        // 求解棋盘上最多能放多少个“车”
        // n：棋盘的大小为n×n的
        // board：所给棋盘，对于某个位置上的数：若值为1表示可以放“车”；若值为0表示不能放“车”
        // 返回值：能放“车”的最大个数
        int getAnswer(int n, List<List<Integer>> board) {
            /* 请在这里设计你的算法 */
        }

        // ================= 代码实现结束 =================

        void solve(InputReader in, PrintWriter out) {
            int n = in.nextInt();
            List<List<Integer>> e = new ArrayList<>();
            for (int i = 0; i < n; ++i) {
                List<Integer> t = new ArrayList<>();
                for (int j = 0; j < n; ++j)
                    t.add(in.nextInt());
                e.add(t);
            }
            out.println(getAnswer(n, e));
        }

    }

    static class InputReader {
        BufferedReader reader;
        StringTokenizer tokenizer;

        private InputReader(InputStream stream) {
            reader = new BufferedReader(new InputStreamReader(stream), 32768);
            tokenizer = null;
        }

        private String next() {
            while (tokenizer == null || !tokenizer.hasMoreTokens()) {
                try {
                    tokenizer = new StringTokenizer(reader.readLine());
                } catch (IOException e) {
                    throw new RuntimeException(e);
                }
            }
            return tokenizer.nextToken();
        }

        private short nextShort() {
            return Short.parseShort(next());
        }

        private int nextInt() {
            return Integer.parseInt(next());
        }

        private long nextLong() {
            return Long.parseLong(next());
        }

        private float nextFloat() {
            return Float.parseFloat(next());
        }

        private double nextDouble() {
            return Double.parseDouble(next());
        }
    }

}