import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.PrintWriter;
import java.util.ArrayList;
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

        // 类似于c++里的pair
        class pii {
            public int first;
            public int second;

            public pii() {
                first = second = 0;
            }

            public pii(int first, int second) {
                this.first = first;
                this.second = second;
            }
        }

        // ================= 代码实现开始 =================

        final int N = 1005;
        
        /* 请在这里定义你需要的全局变量 */

        // 为了减少复制开销，我们直接读入信息到全局变量中
        // a, b：题目所述数组，a的大小为(n+1)*(m+1)，b的大小为(p+1)*(q+1)，下标均从1开始有意义（下标0无意义，你可以直接无视）
        // n, m, p, q：题中所述
        int[][] a = new int[N][N];
        int[][] b = new int[N][N];
        int n, m, p, q;

        // 求出a中有哪些位置出现了b
        // 返回值：一个pii的数组，包含所有出现的位置
        List<pii> getAnswer() {
            /* 请在这里设计你的算法 */
        }

        // ================= 代码实现结束 =================

        void solve(InputReader in, PrintWriter out) {
            n = in.nextInt();
            m = in.nextInt();
            p = in.nextInt();
            q = in.nextInt();
            for (int i = 1; i <= n; ++i)
                for (int j = 1; j <= m; ++j)
                    a[i][j] = in.nextInt();
            for (int i = 1; i <= p; ++i)
                for (int j = 1; j <= q; ++j)
                    b[i][j] = in.nextInt();
            List<pii> ans = getAnswer();
            for (pii i : ans)
                out.printf("%d %d\n", i.first, i.second);
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