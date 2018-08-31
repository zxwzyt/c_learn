import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.PrintWriter;
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

        // 类似c++中的lower_bound
        int lower_bound(int[] f, int n, int a) {
            int l = 1, r = n + 1;
            while (l <= r) {
                int m = (l + r) >> 1;
                if (a <= f[m])
                    r = m - 1;
                else
                    l = m + 1;
            }
            return r + 1;
        }

        // 类似c++中的upper_bound
        int upper_bound(int[] f, int n, int a) {
            int l = 1, r = n + 1;
            while (l <= r) {
                int m = (l + r) >> 1;
                if (a < f[m])
                    r = m - 1;
                else
                    l = m + 1;
            }
            return r + 1;
        }

        /* 请在这里定义你需要的全局变量 */

        // 计算最长公共子序列的长度
        // n：表示两序列长度
        // a：描述序列 a（这里需要注意的是，由于 a 的下标从 1 开始，因此 a[0] 的值为-1，你可以忽略它的值，只需知道我们从下标 1 开始存放有效信息即可）
        // b：描述序列b（同样地，b[0] 的值为 -1）
        // 返回值：最长公共子序列的长度
        int LCS(int n, int[] a, int[] b) {
            /* 请在这里设计你的算法 */
        }

        // ================= 代码实现结束 =================

        void solve(InputReader in, PrintWriter out) {
            int n = in.nextInt();
            int[] a = new int[n + 1];
            int[] b = new int[n + 1];
            a[0] = -1;
            b[0] = -1;
            for (int i = 1; i <= n; ++i)
                a[i] = in.nextInt();
            for (int i = 1; i <= n; ++i)
                b[i] = in.nextInt();
            int ans = LCS(n, a, b);
            out.println(ans);
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